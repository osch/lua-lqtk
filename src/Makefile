.PHONY: default
default: gen lqtk rockspec

.SECONDARY: 

BUILD_DATE  := $(shell date "+%Y-%m-%dT%H:%M:%S")
COMMA       := ,

################################################################################

LNX_QT_ROOT_INC := /usr/include/qt6
LNX_COPTS        = -I$(LNX_QT_ROOT_INC) \
                   -I$(LNX_QT_ROOT_INC)/QtCore \
                   -I$(LNX_QT_ROOT_INC)/QtGui \
                   -I$(LNX_QT_ROOT_INC)/QtWidgets \
                   -I$(LNX_QT_ROOT_INC)/QtOpenGLWidgets
LNX_MOC_RUN     := /usr/lib/qt6/moc
LNX_GCC_RUN     := g++ -fPIC -O0 -g  -Werror=return-type
LNX_LOPTS       := -shared -g -lQt6Core \
                              -lQt6Gui \
                              -lQt6Widgets \
                              -lQt6OpenGLWidgets
LNX_SO_EXT      := so
LNX_DOC_DIR     := /usr/share/doc/qt6

################################################################################

WIN_QT_ROOT_INC := /mingw64/include/qt6
WIN_COPTS        = -I$(WIN_QT_ROOT_INC) \
                   -I$(WIN_QT_ROOT_INC)/QtCore \
                   -I$(WIN_QT_ROOT_INC)/QtGui \
                   -I$(WIN_QT_ROOT_INC)/QtWidgets \
                   -I$(WIN_QT_ROOT_INC)/QtOpenGLWidgets
WIN_GCC_RUN     := g++ -fPIC -O2 -shared 
WIN_LOPTS       := -g /mingw64/lib/libQt6Core.dll.a \
                      /mingw64/lib/libQt6Gui.dll.a \
                      /mingw64/lib/libQt6Widgets.dll.a \
                      /mingw64/lib/libQt6OpenGLWidgets.dll.a \
                      /mingw64/lib/liblua.dll.a

WIN_SO_EXT      := dll
WIN_DOC_DIR     := /mingw64/share/qt6/doc

################################################################################

MAC_COPTS       := -std=c++11 -I/usr/local/include/lua
MAC_GCC_RUN     := g++ -O2 -bundle -undefined dynamic_lookup -all_load
MAC_LOPTS       := 
MAC_SO_EXT      := so

################################################################################

QT_ROOT_INC  :=
COPTS        :=
MOC_RUN      := 
GCC_RUN      :=
LOPTS        :=
SO_EXT       :=
DOC_DIR      := 
PARSE_QTDDOC := false

################################################################################

# platforms: LNX, WIN, MAC
# (may be set in sandbox.mk)

PLATFORM    := LNX
LUA_VERSION := 5.4

-include sandbox.mk

QT_ROOT_INC   := $(or $(QT_ROOT_INC),   $($(PLATFORM)_QT_ROOT_INC))
GCC_RUN       := $(or $(GCC_RUN),       $($(PLATFORM)_GCC_RUN))
MOC_RUN       := $(or $(MOC_RUN),       $($(PLATFORM)_MOC_RUN))
SO_EXT        := $(or $(SO_EXT),        $($(PLATFORM)_SO_EXT))
COPTS         := $(or $(COPTS),         $($(PLATFORM)_COPTS))
LOPTS         := $(or $(LOPTS),         $($(PLATFORM)_LOPTS))
DOC_DIR       := $(or $(DOC_DIR),       $($(PLATFORM)_DOC_DIR))
       
ifeq ($(strip $(PARSE_QTDDOC)),true)
default: parse
endif


################################################################################

BINDINGS = $(patsubst def/%Binding.lua,%,$(wildcard def/Q*Binding.lua))

MODULES :=  main.cpp  \
  	    ClassUdata.cpp \
  	    ObjectUdata.cpp \
  	    NamespaceUdata.cpp \
  	    ConnectionUdata.cpp \
  	    \
  	    Member.cpp \
  	    ClassInfo.cpp \
  	    StateGuard.cpp \
  	    Listener.cpp \
  	    moc_Listener.cpp \
  	    util.cpp \
  	    trace.cpp \
  	    FromLua.cpp \
  	    ToLua.cpp \
  	    BindingUtil.cpp \
  	    registry.cpp \
  	    \
  	    QObjectBinding2.cpp \
  	    QApplicationBinding2.cpp \
  	    QStandardItemBinding2.cpp \
  	    QRectBinding2.cpp \
  	    QSizeBinding2.cpp \
  	    QPointBinding2.cpp \
  	    QPainterBinding2.cpp \
  	    QWidgetBinding2.cpp \
  	    QStringBinding2.cpp \
  	    QCharBinding2.cpp \
  	    QByteArrayBinding2.cpp \
  	    QRectFBinding2.cpp \
  	    QTransformBinding2.cpp 

GEN_MODULES := registryEntries.cpp \
               $(patsubst %,%Binding.cpp,$(BINDINGS))

ALL_MODULES := $(MODULES) \
               $(GEN_MODULES)


BUILD_DIR := build/lua$(LUA_VERSION)

.PHONY: lqtk
lqtk: $(BUILD_DIR)/lqtk.$(SO_EXT)

.PHONY: clean
clean:
	rm -rf build

.PHONY: clean-all
clean-all:
	rm -rf build
	rm -rf moc_*
	rm -rf gen
	rm -rf orig

.PHONY: gen
gen: build/generated.tmstmp

WRAPPER_BINDINGS := 

include gen/wrappers.mk

build/generated.tmstmp: $(patsubst %,gen/%Binding.hpp,      $(BINDINGS)) \
                        $(patsubst %,gen/%Binding.cpp,      $(BINDINGS)) \
                        $(patsubst %,gen/%Wrapper.hpp,      $(WRAPPER_BINDINGS)) \
                        $(filter moc_%.cpp, $(MODULES))
	@mkdir -p build
	@date > $@

.PHONY: test
test:
	lua alltests.lua
                                               
.PHONY: format
format:
	@for i in def/Q*Binding.lua; do echo "formatting $$i"; lua formatBinding.lua $$i - ; done
                                               

.PHONY: parse
parse: $(patsubst %,orig/%FromDoc.lua, $(BINDINGS))

orig/%FromDoc.lua: parseQtdoc.lua $(patsubst %,def/%Binding.lua,$(BINDINGS))
	@echo "Generating: $@"
	@mkdir -p orig
	@lua parseQtdoc.lua $*  $(DOC_DIR)
	
.PHONY: rockspec
rockspec: ../lqtk-scm-0.rockspec
../lqtk-scm-0.rockspec: Makefile substmodules.lua build/sources build/generated.tmstmp
	@ echo "Updating $@"
	@lua substmodules.lua $@ build/sources

build/sources: Makefile build/generated.tmstmp
	@ echo "Updating $@"
	@ mkdir -p build
	@ ( $(foreach m,$(MODULES)    ,echo src/$m;) \
	    $(foreach m,$(GEN_MODULES),echo src/gen/$m;) \
	  ) > build/sources

include $(wildcard $(BUILD_DIR)/*.dep)

$(BUILD_DIR)/lqtk.$(SO_EXT): $(patsubst %, $(BUILD_DIR)/%.o, $(ALL_MODULES))
	@echo "Linking:    $@"
	@$(GCC_RUN) $^ \
	    $(LOPTS) \
	    -o $@

moc_%.cpp: %.hpp
	@echo "Generating: $@"
	@$(MOC_RUN) $< -o $@

gen/registryEntries.cpp: registryEntries.cpp.emlua 
	@mkdir -p gen
	@echo "Preprocessing $@"
	@lua -e 'BINDINGS={$(patsubst %,"%"$(COMMA),$(BINDINGS))}' em.lua $< $@

gen/wrappers.mk: genWrapperList.lua \
                 $(patsubst %,def/%Binding.lua,$(BINDINGS))
	@mkdir -p gen
	@echo "Generating $@"
	@lua genWrapperList.lua $@ $(BINDINGS)

gen/%Binding.cpp: def/%Binding.lua genBinding.lua \
                                   ClassBindingTemplate.cpp.emlua \
                                   NamespaceBindingTemplate.cpp.emlua
	@mkdir -p gen
	@echo "Preprocessing $< -> $@"
	@lua genBinding.lua $* $@ $(BINDINGS)

gen/%Wrapper.hpp: def/%Binding.lua genBinding.lua \
                                   ClassWrapperTemplate.hpp.emlua
	@mkdir -p gen
	@echo "Preprocessing $< -> $@"
	@lua genBinding.lua $* $@

gen/%Binding.hpp: def/%Binding.lua genBinding.lua \
                                   ClassBindingTemplate.hpp.emlua \
                                   NamespaceBindingTemplate.hpp.emlua
	@mkdir -p gen
	@echo "Preprocessing $< -> $@"
	@lua genBinding.lua $* $@

$(BUILD_DIR)/%.cpp.o: gen/%.cpp build/generated.tmstmp
	$(COMPILE_RUN)

$(BUILD_DIR)/%.o: %   build/generated.tmstmp
	$(COMPILE_RUN)
	
define COMPILE_RUN
	@echo "Compiling:  $<"
	@mkdir -p $(BUILD_DIR)/
	@$(GCC_RUN)  -c $(COPTS) \
	    -I . -I gen \
	    -MMD -MT $@ -MF $@.dep \
	    -D LQTK_VERSION=Makefile \
	    $< -o $@
endef

