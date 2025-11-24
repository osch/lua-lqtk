// Type: QLinearGradient
// Base: QGradient

/* ============================================================================================ */

#include <QGradient>
#include <QLinearGradient>
#include <QObject>
#include <QPointF>

#include <QPointer>
#include <stdexcept>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "ClassInfo.hpp"
#include "BindingUtil.hpp"
#include "ObjectUdata.hpp"
#include "ClassUdata.hpp"
#include "trace.hpp"
#include "FromLua.hpp"
#include "ToLua.hpp"
#include "registry.hpp"
#include "StateGuard.hpp"
#include "QGradientBinding.hpp"
#include "QLinearGradientBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPointFBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

extern "C" {
    int lqtk_QGradient_coordinateMode(lua_State* L);
    int lqtk_QGradient_setColorAt(lua_State* L);
    int lqtk_QGradient_setCoordinateMode(lua_State* L);
    int lqtk_QGradient_setSpread(lua_State* L);
    int lqtk_QGradient_spread(lua_State* L);
    int lqtk_QGradient_type(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QLinearGradient_finalStop_Args
{
    FromLua<QLinearGradient*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QLinearGradient_finalStop(lua_State* L)
{
    lqtk_QLinearGradient_finalStop_Args  argValues;
    lqtk_QLinearGradient_finalStop_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLinearGradient::finalStop();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLinearGradient", "finalStop", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLinearGradient_setFinalStop_Args
{
    FromLua<QLinearGradient*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
};

extern "C" int lqtk_QLinearGradient_setFinalStop(lua_State* L)
{
    lqtk_QLinearGradient_setFinalStop_Args  argValues;
    lqtk_QLinearGradient_setFinalStop_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLinearGradient::setFinalStop(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QLinearGradient::setFinalStop(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLinearGradient", "setFinalStop", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLinearGradient_setStart_Args
{
    FromLua<QLinearGradient*> arg_1_1;
    FromLua<QPointF*> arg_2_1;
    FromLua<double> arg_3_1;
    FromLua<double> arg_3_2;
};

extern "C" int lqtk_QLinearGradient_setStart(lua_State* L)
{
    lqtk_QLinearGradient_setStart_Args  argValues;
    lqtk_QLinearGradient_setStart_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLinearGradient::setStart(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            args->arg_3_2.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QLinearGradient::setStart(args->arg_3_1.getValue(), args->arg_3_2.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLinearGradient", "setStart", nargs, "2,3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLinearGradient_start_Args
{
    FromLua<QLinearGradient*> arg_1_1;
    ToLua<QPointF*> rslt_1;
};

extern "C" int lqtk_QLinearGradient_start(lua_State* L)
{
    lqtk_QLinearGradient_start_Args  argValues;
    lqtk_QLinearGradient_start_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLinearGradient::start();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLinearGradient", "start", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QLinearGradientBinding::QType* ptr = static_cast<QLinearGradientBinding::QType*>(objectPtr);
        if (targetClassInfo == &QLinearGradientBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QGradientBinding::classInfo) {
            return static_cast<QGradientBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QLinearGradient* ptr = (QLinearGradient*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QLinearGradient_new_Args
{
    FromLua<QPointF*> arg_1_1;
    FromLua<QPointF*> arg_1_2;
    FromLua<double> arg_2_1;
    FromLua<double> arg_2_2;
    FromLua<double> arg_2_3;
    FromLua<double> arg_2_4;
    ToLua<QLinearGradient*> rslt_1;
};

extern "C" int lqtk_QLinearGradient_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QLinearGradient_new_Args  argValues;
    lqtk_QLinearGradient_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QLinearGradientBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QLinearGradient> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QLinearGradient* rslt = 
                    new QLinearGradient();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_1_2.check(L, argOffs+2);
            {
                QLinearGradient* rslt = 
                    new QLinearGradient(*args->arg_1_1.getValue(), *args->arg_1_2.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 4) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_2_2.check(L, argOffs+2);
            args->arg_2_3.check(L, argOffs+3);
            args->arg_2_4.check(L, argOffs+4);
            {
                QLinearGradient* rslt = 
                    new QLinearGradient(args->arg_2_1.getValue(), args->arg_2_2.getValue(), args->arg_2_3.getValue(), args->arg_2_4.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QLinearGradient", "new", nargs, "1,3,5");
        } else {
            return util::argCountError(L, "QLinearGradient", nullptr, nargs, "0,2,4");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QLinearGradient_new(lua_State* L)
{
    return lqtk_QLinearGradient_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QLinearGradientBinding::pushObject(lua_State* L, QLinearGradient* objPtr, OwnerType ownerType)
{
    StateGuard::pushWeakUdataRef(L, objPtr);                             // -> udata?
    ObjectUdata* udata = ObjectUdata::testArg(L, -1);  
                                                                         // -> udata?
    if (!udata || udata->classInfo != &classInfo  
               || udata->getObjectPtr() != objPtr)
    {                                                                    // -> xxx
        lua_pop(L, 1);                                                   // -> 
        bool hasUserValue = false;
        if (StateGuard::pushWeakUserValue(L, objPtr) == LUA_TTABLE) {    // -> uval?
            hasUserValue = true;
        }
        udata = ObjectUdata::pushNew<QLinearGradient>(L, hasUserValue);     // -> uval?, udata
        udata->setRawPtr(L, -1, objPtr, ownerType);                      // -> uval?, udata
        if (hasUserValue) {
            udata->setUserValue(L, -1, -2);                              // -> uval,  udata, 
        }                                                                // -> uval?, udata
        lua_remove(L, -2);                                               // -> udata
    }                                                                    // -> udata
    return udata;
}

/* ============================================================================================ */

static const Member members[] =
{
    { "AboveTheSky",         Member::INTEGER,              (void*) QLinearGradient::AboveTheSky },
    { "AfricanField",        Member::INTEGER,              (void*) QLinearGradient::AfricanField },
    { "AlchemistLab",        Member::INTEGER,              (void*) QLinearGradient::AlchemistLab },
    { "AmourAmour",          Member::INTEGER,              (void*) QLinearGradient::AmourAmour },
    { "AmyCrisp",            Member::INTEGER,              (void*) QLinearGradient::AmyCrisp },
    { "AngelCare",           Member::INTEGER,              (void*) QLinearGradient::AngelCare },
    { "AquaGuidance",        Member::INTEGER,              (void*) QLinearGradient::AquaGuidance },
    { "AquaSplash",          Member::INTEGER,              (void*) QLinearGradient::AquaSplash },
    { "AwesomePine",         Member::INTEGER,              (void*) QLinearGradient::AwesomePine },
    { "BigMango",            Member::INTEGER,              (void*) QLinearGradient::BigMango },
    { "BlackSea",            Member::INTEGER,              (void*) QLinearGradient::BlackSea },
    { "Blessing",            Member::INTEGER,              (void*) QLinearGradient::Blessing },
    { "BurningSpring",       Member::INTEGER,              (void*) QLinearGradient::BurningSpring },
    { "CheerfulCaramel",     Member::INTEGER,              (void*) QLinearGradient::CheerfulCaramel },
    { "ChildCare",           Member::INTEGER,              (void*) QLinearGradient::ChildCare },
    { "CleanMirror",         Member::INTEGER,              (void*) QLinearGradient::CleanMirror },
    { "CloudyApple",         Member::INTEGER,              (void*) QLinearGradient::CloudyApple },
    { "CloudyKnoxville",     Member::INTEGER,              (void*) QLinearGradient::CloudyKnoxville },
    { "CochitiLake",         Member::INTEGER,              (void*) QLinearGradient::CochitiLake },
    { "ColdEvening",         Member::INTEGER,              (void*) QLinearGradient::ColdEvening },
    { "ColorfulPeach",       Member::INTEGER,              (void*) QLinearGradient::ColorfulPeach },
    { "ConfidentCloud",      Member::INTEGER,              (void*) QLinearGradient::ConfidentCloud },
    { "ConicalGradient",     Member::INTEGER,              (void*) QLinearGradient::ConicalGradient },
    { "CrystalRiver",        Member::INTEGER,              (void*) QLinearGradient::CrystalRiver },
    { "Crystalline",         Member::INTEGER,              (void*) QLinearGradient::Crystalline },
    { "DeepBlue",            Member::INTEGER,              (void*) QLinearGradient::DeepBlue },
    { "DeepRelief",          Member::INTEGER,              (void*) QLinearGradient::DeepRelief },
    { "DenseWater",          Member::INTEGER,              (void*) QLinearGradient::DenseWater },
    { "DesertHump",          Member::INTEGER,              (void*) QLinearGradient::DesertHump },
    { "DirtyBeauty",         Member::INTEGER,              (void*) QLinearGradient::DirtyBeauty },
    { "DustyGrass",          Member::INTEGER,              (void*) QLinearGradient::DustyGrass },
    { "EternalConstance",    Member::INTEGER,              (void*) QLinearGradient::EternalConstance },
    { "EverlastingSky",      Member::INTEGER,              (void*) QLinearGradient::EverlastingSky },
    { "FabledSunset",        Member::INTEGER,              (void*) QLinearGradient::FabledSunset },
    { "FarawayRiver",        Member::INTEGER,              (void*) QLinearGradient::FarawayRiver },
    { "FebruaryInk",         Member::INTEGER,              (void*) QLinearGradient::FebruaryInk },
    { "FlyHigh",             Member::INTEGER,              (void*) QLinearGradient::FlyHigh },
    { "FlyingLemon",         Member::INTEGER,              (void*) QLinearGradient::FlyingLemon },
    { "ForestInei",          Member::INTEGER,              (void*) QLinearGradient::ForestInei },
    { "FreshMilk",           Member::INTEGER,              (void*) QLinearGradient::FreshMilk },
    { "FreshOasis",          Member::INTEGER,              (void*) QLinearGradient::FreshOasis },
    { "FrozenBerry",         Member::INTEGER,              (void*) QLinearGradient::FrozenBerry },
    { "FrozenDreams",        Member::INTEGER,              (void*) QLinearGradient::FrozenDreams },
    { "FrozenHeat",          Member::INTEGER,              (void*) QLinearGradient::FrozenHeat },
    { "FruitBlend",          Member::INTEGER,              (void*) QLinearGradient::FruitBlend },
    { "GagarinView",         Member::INTEGER,              (void*) QLinearGradient::GagarinView },
    { "GentleCare",          Member::INTEGER,              (void*) QLinearGradient::GentleCare },
    { "GlassWater",          Member::INTEGER,              (void*) QLinearGradient::GlassWater },
    { "GrassShampoo",        Member::INTEGER,              (void*) QLinearGradient::GrassShampoo },
    { "GreatWhale",          Member::INTEGER,              (void*) QLinearGradient::GreatWhale },
    { "GrownEarly",          Member::INTEGER,              (void*) QLinearGradient::GrownEarly },
    { "HappyAcid",           Member::INTEGER,              (void*) QLinearGradient::HappyAcid },
    { "HappyFisher",         Member::INTEGER,              (void*) QLinearGradient::HappyFisher },
    { "HappyMemories",       Member::INTEGER,              (void*) QLinearGradient::HappyMemories },
    { "HappyUnicorn",        Member::INTEGER,              (void*) QLinearGradient::HappyUnicorn },
    { "HealthyWater",        Member::INTEGER,              (void*) QLinearGradient::HealthyWater },
    { "HeavenPeach",         Member::INTEGER,              (void*) QLinearGradient::HeavenPeach },
    { "HeavyRain",           Member::INTEGER,              (void*) QLinearGradient::HeavyRain },
    { "HiddenJaguar",        Member::INTEGER,              (void*) QLinearGradient::HiddenJaguar },
    { "HighFlight",          Member::INTEGER,              (void*) QLinearGradient::HighFlight },
    { "ItmeoBranding",       Member::INTEGER,              (void*) QLinearGradient::ItmeoBranding },
    { "JapanBlush",          Member::INTEGER,              (void*) QLinearGradient::JapanBlush },
    { "JuicyCake",           Member::INTEGER,              (void*) QLinearGradient::JuicyCake },
    { "JuicyPeach",          Member::INTEGER,              (void*) QLinearGradient::JuicyPeach },
    { "JungleDay",           Member::INTEGER,              (void*) QLinearGradient::JungleDay },
    { "KindSteel",           Member::INTEGER,              (void*) QLinearGradient::KindSteel },
    { "LadogaBottom",        Member::INTEGER,              (void*) QLinearGradient::LadogaBottom },
    { "LadyLips",            Member::INTEGER,              (void*) QLinearGradient::LadyLips },
    { "LandingAircraft",     Member::INTEGER,              (void*) QLinearGradient::LandingAircraft },
    { "LeCocktail",          Member::INTEGER,              (void*) QLinearGradient::LeCocktail },
    { "LemonGate",           Member::INTEGER,              (void*) QLinearGradient::LemonGate },
    { "LightBlue",           Member::INTEGER,              (void*) QLinearGradient::LightBlue },
    { "LilyMeadow",          Member::INTEGER,              (void*) QLinearGradient::LilyMeadow },
    { "LinearGradient",      Member::INTEGER,              (void*) QLinearGradient::LinearGradient },
    { "LogicalMode",         Member::INTEGER,              (void*) QLinearGradient::LogicalMode },
    { "LoveKiss",            Member::INTEGER,              (void*) QLinearGradient::LoveKiss },
    { "MagicLake",           Member::INTEGER,              (void*) QLinearGradient::MagicLake },
    { "MagicRay",            Member::INTEGER,              (void*) QLinearGradient::MagicRay },
    { "MalibuBeach",         Member::INTEGER,              (void*) QLinearGradient::MalibuBeach },
    { "MarbleWall",          Member::INTEGER,              (void*) QLinearGradient::MarbleWall },
    { "MarsParty",           Member::INTEGER,              (void*) QLinearGradient::MarsParty },
    { "MeanFruit",           Member::INTEGER,              (void*) QLinearGradient::MeanFruit },
    { "MidnightBloom",       Member::INTEGER,              (void*) QLinearGradient::MidnightBloom },
    { "MillenniumPine",      Member::INTEGER,              (void*) QLinearGradient::MillenniumPine },
    { "MindCrawl",           Member::INTEGER,              (void*) QLinearGradient::MindCrawl },
    { "MixedHopes",          Member::INTEGER,              (void*) QLinearGradient::MixedHopes },
    { "MoleHall",            Member::INTEGER,              (void*) QLinearGradient::MoleHall },
    { "MorningSalad",        Member::INTEGER,              (void*) QLinearGradient::MorningSalad },
    { "MorpheusDen",         Member::INTEGER,              (void*) QLinearGradient::MorpheusDen },
    { "MountainRock",        Member::INTEGER,              (void*) QLinearGradient::MountainRock },
    { "NearMoon",            Member::INTEGER,              (void*) QLinearGradient::NearMoon },
    { "Nega",                Member::INTEGER,              (void*) QLinearGradient::Nega },
    { "NewLife",             Member::INTEGER,              (void*) QLinearGradient::NewLife },
    { "NewRetrowave",        Member::INTEGER,              (void*) QLinearGradient::NewRetrowave },
    { "NewYork",             Member::INTEGER,              (void*) QLinearGradient::NewYork },
    { "NightCall",           Member::INTEGER,              (void*) QLinearGradient::NightCall },
    { "NightFade",           Member::INTEGER,              (void*) QLinearGradient::NightFade },
    { "NightParty",          Member::INTEGER,              (void*) QLinearGradient::NightParty },
    { "NightSky",            Member::INTEGER,              (void*) QLinearGradient::NightSky },
    { "NoGradient",          Member::INTEGER,              (void*) QLinearGradient::NoGradient },
    { "NorseBeauty",         Member::INTEGER,              (void*) QLinearGradient::NorseBeauty },
    { "NorthMiracle",        Member::INTEGER,              (void*) QLinearGradient::NorthMiracle },
    { "ObjectBoundingMode",  Member::INTEGER,              (void*) QLinearGradient::ObjectBoundingMode },
    { "ObjectMode",          Member::INTEGER,              (void*) QLinearGradient::ObjectMode },
    { "OctoberSilence",      Member::INTEGER,              (void*) QLinearGradient::OctoberSilence },
    { "OldHat",              Member::INTEGER,              (void*) QLinearGradient::OldHat },
    { "OrangeJuice",         Member::INTEGER,              (void*) QLinearGradient::OrangeJuice },
    { "OverSun",             Member::INTEGER,              (void*) QLinearGradient::OverSun },
    { "PadSpread",           Member::INTEGER,              (void*) QLinearGradient::PadSpread },
    { "PaloAlto",            Member::INTEGER,              (void*) QLinearGradient::PaloAlto },
    { "PartyBliss",          Member::INTEGER,              (void*) QLinearGradient::PartyBliss },
    { "PassionateBed",       Member::INTEGER,              (void*) QLinearGradient::PassionateBed },
    { "PerfectBlue",         Member::INTEGER,              (void*) QLinearGradient::PerfectBlue },
    { "PerfectWhite",        Member::INTEGER,              (void*) QLinearGradient::PerfectWhite },
    { "PhoenixStart",        Member::INTEGER,              (void*) QLinearGradient::PhoenixStart },
    { "PlumBath",            Member::INTEGER,              (void*) QLinearGradient::PlumBath },
    { "PlumPlate",           Member::INTEGER,              (void*) QLinearGradient::PlumPlate },
    { "PoliteRumors",        Member::INTEGER,              (void*) QLinearGradient::PoliteRumors },
    { "PremiumDark",         Member::INTEGER,              (void*) QLinearGradient::PremiumDark },
    { "PremiumWhite",        Member::INTEGER,              (void*) QLinearGradient::PremiumWhite },
    { "PurpleDivision",      Member::INTEGER,              (void*) QLinearGradient::PurpleDivision },
    { "RadialGradient",      Member::INTEGER,              (void*) QLinearGradient::RadialGradient },
    { "RainyAshville",       Member::INTEGER,              (void*) QLinearGradient::RainyAshville },
    { "RareWind",            Member::INTEGER,              (void*) QLinearGradient::RareWind },
    { "RedSalvation",        Member::INTEGER,              (void*) QLinearGradient::RedSalvation },
    { "ReflectSpread",       Member::INTEGER,              (void*) QLinearGradient::ReflectSpread },
    { "RepeatSpread",        Member::INTEGER,              (void*) QLinearGradient::RepeatSpread },
    { "RichMetal",           Member::INTEGER,              (void*) QLinearGradient::RichMetal },
    { "RipeMalinka",         Member::INTEGER,              (void*) QLinearGradient::RipeMalinka },
    { "RiskyConcrete",       Member::INTEGER,              (void*) QLinearGradient::RiskyConcrete },
    { "RiverCity",           Member::INTEGER,              (void*) QLinearGradient::RiverCity },
    { "RoyalGarden",         Member::INTEGER,              (void*) QLinearGradient::RoyalGarden },
    { "SaintPetersburg",     Member::INTEGER,              (void*) QLinearGradient::SaintPetersburg },
    { "SaltMountain",        Member::INTEGER,              (void*) QLinearGradient::SaltMountain },
    { "SandStrike",          Member::INTEGER,              (void*) QLinearGradient::SandStrike },
    { "SeaLord",             Member::INTEGER,              (void*) QLinearGradient::SeaLord },
    { "SeaStrike",           Member::INTEGER,              (void*) QLinearGradient::SeaStrike },
    { "Seashore",            Member::INTEGER,              (void*) QLinearGradient::Seashore },
    { "ShadyWater",          Member::INTEGER,              (void*) QLinearGradient::ShadyWater },
    { "SharpBlues",          Member::INTEGER,              (void*) QLinearGradient::SharpBlues },
    { "SharpeyeEagle",       Member::INTEGER,              (void*) QLinearGradient::SharpeyeEagle },
    { "ShyRainbow",          Member::INTEGER,              (void*) QLinearGradient::ShyRainbow },
    { "SkyGlider",           Member::INTEGER,              (void*) QLinearGradient::SkyGlider },
    { "SleeplessNight",      Member::INTEGER,              (void*) QLinearGradient::SleeplessNight },
    { "SmartIndigo",         Member::INTEGER,              (void*) QLinearGradient::SmartIndigo },
    { "SmilingRain",         Member::INTEGER,              (void*) QLinearGradient::SmilingRain },
    { "SnowAgain",           Member::INTEGER,              (void*) QLinearGradient::SnowAgain },
    { "SoftCherish",         Member::INTEGER,              (void*) QLinearGradient::SoftCherish },
    { "SoftGrass",           Member::INTEGER,              (void*) QLinearGradient::SoftGrass },
    { "SoftLipstick",        Member::INTEGER,              (void*) QLinearGradient::SoftLipstick },
    { "SolidStone",          Member::INTEGER,              (void*) QLinearGradient::SolidStone },
    { "SpaceShift",          Member::INTEGER,              (void*) QLinearGradient::SpaceShift },
    { "SpikyNaga",           Member::INTEGER,              (void*) QLinearGradient::SpikyNaga },
    { "SpringWarmth",        Member::INTEGER,              (void*) QLinearGradient::SpringWarmth },
    { "StarWine",            Member::INTEGER,              (void*) QLinearGradient::StarWine },
    { "StretchToDeviceMode", Member::INTEGER,              (void*) QLinearGradient::StretchToDeviceMode },
    { "StrictNovember",      Member::INTEGER,              (void*) QLinearGradient::StrictNovember },
    { "StrongBliss",         Member::INTEGER,              (void*) QLinearGradient::StrongBliss },
    { "StrongStick",         Member::INTEGER,              (void*) QLinearGradient::StrongStick },
    { "SugarLollipop",       Member::INTEGER,              (void*) QLinearGradient::SugarLollipop },
    { "SummerGames",         Member::INTEGER,              (void*) QLinearGradient::SummerGames },
    { "SunVeggie",           Member::INTEGER,              (void*) QLinearGradient::SunVeggie },
    { "SunnyMorning",        Member::INTEGER,              (void*) QLinearGradient::SunnyMorning },
    { "SupremeSky",          Member::INTEGER,              (void*) QLinearGradient::SupremeSky },
    { "SweetDessert",        Member::INTEGER,              (void*) QLinearGradient::SweetDessert },
    { "SweetPeriod",         Member::INTEGER,              (void*) QLinearGradient::SweetPeriod },
    { "TeenNotebook",        Member::INTEGER,              (void*) QLinearGradient::TeenNotebook },
    { "TeenParty",           Member::INTEGER,              (void*) QLinearGradient::TeenParty },
    { "TemptingAzure",       Member::INTEGER,              (void*) QLinearGradient::TemptingAzure },
    { "TrueSunset",          Member::INTEGER,              (void*) QLinearGradient::TrueSunset },
    { "ViciousStance",       Member::INTEGER,              (void*) QLinearGradient::ViciousStance },
    { "WarmFlame",           Member::INTEGER,              (void*) QLinearGradient::WarmFlame },
    { "WideMatrix",          Member::INTEGER,              (void*) QLinearGradient::WideMatrix },
    { "WildApple",           Member::INTEGER,              (void*) QLinearGradient::WildApple },
    { "WinterNeva",          Member::INTEGER,              (void*) QLinearGradient::WinterNeva },
    { "WitchDance",          Member::INTEGER,              (void*) QLinearGradient::WitchDance },
    { "YoungGrass",          Member::INTEGER,              (void*) QLinearGradient::YoungGrass },
    { "YoungPassion",        Member::INTEGER,              (void*) QLinearGradient::YoungPassion },
    { "ZeusMiracle",         Member::INTEGER,              (void*) QLinearGradient::ZeusMiracle },
    { "coordinateMode",      Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_coordinateMode },
    { "finalStop",           Member::NORMAL_FUNCTION,      (void*) lqtk_QLinearGradient_finalStop },
    { "setColorAt",          Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_setColorAt },
    { "setCoordinateMode",   Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_setCoordinateMode },
    { "setFinalStop",        Member::NORMAL_FUNCTION,      (void*) lqtk_QLinearGradient_setFinalStop },
    { "setSpread",           Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_setSpread },
    { "setStart",            Member::NORMAL_FUNCTION,      (void*) lqtk_QLinearGradient_setStart },
    { "spread",              Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_spread },
    { "start",               Member::NORMAL_FUNCTION,      (void*) lqtk_QLinearGradient_start },
    { "type",                Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_type },
    { NULL,                  Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QLinearGradientBinding::classInfo = 
{
    "QLinearGradient",

    &QGradientBinding::classInfo,

    false, // isQObject
    false, // needsGuard
    lqtk_QLinearGradient_constructor,
    lqtk_QLinearGradient_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    189,
    members
};

/* ============================================================================================ */

int QLinearGradientBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
