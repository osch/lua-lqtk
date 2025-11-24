// Type: QGradient
// Base: nil

/* ============================================================================================ */

#include <QColor>
#include <QGradient>
#include <QLinearGradient>
#include <QObject>

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
#include "QColorBinding.hpp"
#include "QGradientBinding.hpp"
#include "QLinearGradientBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */


struct lqtk_QGradient_coordinateMode_Args
{
    FromLua<QGradient*> arg_1_1;
    ToLua<QGradient::CoordinateMode> rslt_1;
};

extern "C" int lqtk_QGradient_coordinateMode(lua_State* L)
{
    lqtk_QGradient_coordinateMode_Args  argValues;
    lqtk_QGradient_coordinateMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QGradient::coordinateMode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGradient", "coordinateMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGradient_setColorAt_Args
{
    FromLua<QGradient*> arg_1_1;
    FromLua<qreal> arg_2_1;
    FromLua<QColor*> arg_3_1;
};

extern "C" int lqtk_QGradient_setColorAt(lua_State* L)
{
    lqtk_QGradient_setColorAt_Args  argValues;
    lqtk_QGradient_setColorAt_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_3_1.check(L, argOffs+3);
            {
                    args->arg_1_1.getValue()->QGradient::setColorAt(args->arg_2_1.getValue(), *args->arg_3_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QGradient", "setColorAt", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGradient_setCoordinateMode_Args
{
    FromLua<QGradient*> arg_1_1;
    FromLua<QGradient::CoordinateMode> arg_2_1;
};

extern "C" int lqtk_QGradient_setCoordinateMode(lua_State* L)
{
    lqtk_QGradient_setCoordinateMode_Args  argValues;
    lqtk_QGradient_setCoordinateMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QGradient::setCoordinateMode(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QGradient", "setCoordinateMode", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGradient_setSpread_Args
{
    FromLua<QGradient*> arg_1_1;
    FromLua<QGradient::Spread> arg_2_1;
};

extern "C" int lqtk_QGradient_setSpread(lua_State* L)
{
    lqtk_QGradient_setSpread_Args  argValues;
    lqtk_QGradient_setSpread_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QGradient::setSpread(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QGradient", "setSpread", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGradient_spread_Args
{
    FromLua<QGradient*> arg_1_1;
    ToLua<QGradient::Spread> rslt_1;
};

extern "C" int lqtk_QGradient_spread(lua_State* L)
{
    lqtk_QGradient_spread_Args  argValues;
    lqtk_QGradient_spread_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QGradient::spread();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGradient", "spread", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QGradient_type_Args
{
    FromLua<QGradient*> arg_1_1;
    ToLua<QGradient::Type> rslt_1;
};

extern "C" int lqtk_QGradient_type(lua_State* L)
{
    lqtk_QGradient_type_Args  argValues;
    lqtk_QGradient_type_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QGradient::type();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QGradient", "type", nargs, "1");
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
        QGradientBinding::QType* ptr = static_cast<QGradientBinding::QType*>(objectPtr);
        if (targetClassInfo == &QGradientBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QGradient* ptr = (QGradient*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QGradient_new_Args
{
    FromLua<QGradient::Preset> arg_1_1;
    ToLua<QGradient*> rslt_1;
};

extern "C" int lqtk_QGradient_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QGradient_new_Args  argValues;
    lqtk_QGradient_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QGradientBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QGradient> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QGradient* rslt = 
                    new QGradient(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QGradient", "new", nargs, "2");
        } else {
            return util::argCountError(L, "QGradient", nullptr, nargs, "1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QGradient_new(lua_State* L)
{
    return lqtk_QGradient_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QGradientBinding::pushObject(lua_State* L, QGradient* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QGradient>(L, hasUserValue);     // -> uval?, udata
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
    { "AboveTheSky",         Member::INTEGER,              (void*) QGradient::AboveTheSky },
    { "AfricanField",        Member::INTEGER,              (void*) QGradient::AfricanField },
    { "AlchemistLab",        Member::INTEGER,              (void*) QGradient::AlchemistLab },
    { "AmourAmour",          Member::INTEGER,              (void*) QGradient::AmourAmour },
    { "AmyCrisp",            Member::INTEGER,              (void*) QGradient::AmyCrisp },
    { "AngelCare",           Member::INTEGER,              (void*) QGradient::AngelCare },
    { "AquaGuidance",        Member::INTEGER,              (void*) QGradient::AquaGuidance },
    { "AquaSplash",          Member::INTEGER,              (void*) QGradient::AquaSplash },
    { "AwesomePine",         Member::INTEGER,              (void*) QGradient::AwesomePine },
    { "BigMango",            Member::INTEGER,              (void*) QGradient::BigMango },
    { "BlackSea",            Member::INTEGER,              (void*) QGradient::BlackSea },
    { "Blessing",            Member::INTEGER,              (void*) QGradient::Blessing },
    { "BurningSpring",       Member::INTEGER,              (void*) QGradient::BurningSpring },
    { "CheerfulCaramel",     Member::INTEGER,              (void*) QGradient::CheerfulCaramel },
    { "ChildCare",           Member::INTEGER,              (void*) QGradient::ChildCare },
    { "CleanMirror",         Member::INTEGER,              (void*) QGradient::CleanMirror },
    { "CloudyApple",         Member::INTEGER,              (void*) QGradient::CloudyApple },
    { "CloudyKnoxville",     Member::INTEGER,              (void*) QGradient::CloudyKnoxville },
    { "CochitiLake",         Member::INTEGER,              (void*) QGradient::CochitiLake },
    { "ColdEvening",         Member::INTEGER,              (void*) QGradient::ColdEvening },
    { "ColorfulPeach",       Member::INTEGER,              (void*) QGradient::ColorfulPeach },
    { "ConfidentCloud",      Member::INTEGER,              (void*) QGradient::ConfidentCloud },
    { "ConicalGradient",     Member::INTEGER,              (void*) QGradient::ConicalGradient },
    { "CrystalRiver",        Member::INTEGER,              (void*) QGradient::CrystalRiver },
    { "Crystalline",         Member::INTEGER,              (void*) QGradient::Crystalline },
    { "DeepBlue",            Member::INTEGER,              (void*) QGradient::DeepBlue },
    { "DeepRelief",          Member::INTEGER,              (void*) QGradient::DeepRelief },
    { "DenseWater",          Member::INTEGER,              (void*) QGradient::DenseWater },
    { "DesertHump",          Member::INTEGER,              (void*) QGradient::DesertHump },
    { "DirtyBeauty",         Member::INTEGER,              (void*) QGradient::DirtyBeauty },
    { "DustyGrass",          Member::INTEGER,              (void*) QGradient::DustyGrass },
    { "EternalConstance",    Member::INTEGER,              (void*) QGradient::EternalConstance },
    { "EverlastingSky",      Member::INTEGER,              (void*) QGradient::EverlastingSky },
    { "FabledSunset",        Member::INTEGER,              (void*) QGradient::FabledSunset },
    { "FarawayRiver",        Member::INTEGER,              (void*) QGradient::FarawayRiver },
    { "FebruaryInk",         Member::INTEGER,              (void*) QGradient::FebruaryInk },
    { "FlyHigh",             Member::INTEGER,              (void*) QGradient::FlyHigh },
    { "FlyingLemon",         Member::INTEGER,              (void*) QGradient::FlyingLemon },
    { "ForestInei",          Member::INTEGER,              (void*) QGradient::ForestInei },
    { "FreshMilk",           Member::INTEGER,              (void*) QGradient::FreshMilk },
    { "FreshOasis",          Member::INTEGER,              (void*) QGradient::FreshOasis },
    { "FrozenBerry",         Member::INTEGER,              (void*) QGradient::FrozenBerry },
    { "FrozenDreams",        Member::INTEGER,              (void*) QGradient::FrozenDreams },
    { "FrozenHeat",          Member::INTEGER,              (void*) QGradient::FrozenHeat },
    { "FruitBlend",          Member::INTEGER,              (void*) QGradient::FruitBlend },
    { "GagarinView",         Member::INTEGER,              (void*) QGradient::GagarinView },
    { "GentleCare",          Member::INTEGER,              (void*) QGradient::GentleCare },
    { "GlassWater",          Member::INTEGER,              (void*) QGradient::GlassWater },
    { "GrassShampoo",        Member::INTEGER,              (void*) QGradient::GrassShampoo },
    { "GreatWhale",          Member::INTEGER,              (void*) QGradient::GreatWhale },
    { "GrownEarly",          Member::INTEGER,              (void*) QGradient::GrownEarly },
    { "HappyAcid",           Member::INTEGER,              (void*) QGradient::HappyAcid },
    { "HappyFisher",         Member::INTEGER,              (void*) QGradient::HappyFisher },
    { "HappyMemories",       Member::INTEGER,              (void*) QGradient::HappyMemories },
    { "HappyUnicorn",        Member::INTEGER,              (void*) QGradient::HappyUnicorn },
    { "HealthyWater",        Member::INTEGER,              (void*) QGradient::HealthyWater },
    { "HeavenPeach",         Member::INTEGER,              (void*) QGradient::HeavenPeach },
    { "HeavyRain",           Member::INTEGER,              (void*) QGradient::HeavyRain },
    { "HiddenJaguar",        Member::INTEGER,              (void*) QGradient::HiddenJaguar },
    { "HighFlight",          Member::INTEGER,              (void*) QGradient::HighFlight },
    { "ItmeoBranding",       Member::INTEGER,              (void*) QGradient::ItmeoBranding },
    { "JapanBlush",          Member::INTEGER,              (void*) QGradient::JapanBlush },
    { "JuicyCake",           Member::INTEGER,              (void*) QGradient::JuicyCake },
    { "JuicyPeach",          Member::INTEGER,              (void*) QGradient::JuicyPeach },
    { "JungleDay",           Member::INTEGER,              (void*) QGradient::JungleDay },
    { "KindSteel",           Member::INTEGER,              (void*) QGradient::KindSteel },
    { "LadogaBottom",        Member::INTEGER,              (void*) QGradient::LadogaBottom },
    { "LadyLips",            Member::INTEGER,              (void*) QGradient::LadyLips },
    { "LandingAircraft",     Member::INTEGER,              (void*) QGradient::LandingAircraft },
    { "LeCocktail",          Member::INTEGER,              (void*) QGradient::LeCocktail },
    { "LemonGate",           Member::INTEGER,              (void*) QGradient::LemonGate },
    { "LightBlue",           Member::INTEGER,              (void*) QGradient::LightBlue },
    { "LilyMeadow",          Member::INTEGER,              (void*) QGradient::LilyMeadow },
    { "LinearGradient",      Member::INTEGER,              (void*) QGradient::LinearGradient },
    { "LogicalMode",         Member::INTEGER,              (void*) QGradient::LogicalMode },
    { "LoveKiss",            Member::INTEGER,              (void*) QGradient::LoveKiss },
    { "MagicLake",           Member::INTEGER,              (void*) QGradient::MagicLake },
    { "MagicRay",            Member::INTEGER,              (void*) QGradient::MagicRay },
    { "MalibuBeach",         Member::INTEGER,              (void*) QGradient::MalibuBeach },
    { "MarbleWall",          Member::INTEGER,              (void*) QGradient::MarbleWall },
    { "MarsParty",           Member::INTEGER,              (void*) QGradient::MarsParty },
    { "MeanFruit",           Member::INTEGER,              (void*) QGradient::MeanFruit },
    { "MidnightBloom",       Member::INTEGER,              (void*) QGradient::MidnightBloom },
    { "MillenniumPine",      Member::INTEGER,              (void*) QGradient::MillenniumPine },
    { "MindCrawl",           Member::INTEGER,              (void*) QGradient::MindCrawl },
    { "MixedHopes",          Member::INTEGER,              (void*) QGradient::MixedHopes },
    { "MoleHall",            Member::INTEGER,              (void*) QGradient::MoleHall },
    { "MorningSalad",        Member::INTEGER,              (void*) QGradient::MorningSalad },
    { "MorpheusDen",         Member::INTEGER,              (void*) QGradient::MorpheusDen },
    { "MountainRock",        Member::INTEGER,              (void*) QGradient::MountainRock },
    { "NearMoon",            Member::INTEGER,              (void*) QGradient::NearMoon },
    { "Nega",                Member::INTEGER,              (void*) QGradient::Nega },
    { "NewLife",             Member::INTEGER,              (void*) QGradient::NewLife },
    { "NewRetrowave",        Member::INTEGER,              (void*) QGradient::NewRetrowave },
    { "NewYork",             Member::INTEGER,              (void*) QGradient::NewYork },
    { "NightCall",           Member::INTEGER,              (void*) QGradient::NightCall },
    { "NightFade",           Member::INTEGER,              (void*) QGradient::NightFade },
    { "NightParty",          Member::INTEGER,              (void*) QGradient::NightParty },
    { "NightSky",            Member::INTEGER,              (void*) QGradient::NightSky },
    { "NoGradient",          Member::INTEGER,              (void*) QGradient::NoGradient },
    { "NorseBeauty",         Member::INTEGER,              (void*) QGradient::NorseBeauty },
    { "NorthMiracle",        Member::INTEGER,              (void*) QGradient::NorthMiracle },
    { "ObjectBoundingMode",  Member::INTEGER,              (void*) QGradient::ObjectBoundingMode },
    { "ObjectMode",          Member::INTEGER,              (void*) QGradient::ObjectMode },
    { "OctoberSilence",      Member::INTEGER,              (void*) QGradient::OctoberSilence },
    { "OldHat",              Member::INTEGER,              (void*) QGradient::OldHat },
    { "OrangeJuice",         Member::INTEGER,              (void*) QGradient::OrangeJuice },
    { "OverSun",             Member::INTEGER,              (void*) QGradient::OverSun },
    { "PadSpread",           Member::INTEGER,              (void*) QGradient::PadSpread },
    { "PaloAlto",            Member::INTEGER,              (void*) QGradient::PaloAlto },
    { "PartyBliss",          Member::INTEGER,              (void*) QGradient::PartyBliss },
    { "PassionateBed",       Member::INTEGER,              (void*) QGradient::PassionateBed },
    { "PerfectBlue",         Member::INTEGER,              (void*) QGradient::PerfectBlue },
    { "PerfectWhite",        Member::INTEGER,              (void*) QGradient::PerfectWhite },
    { "PhoenixStart",        Member::INTEGER,              (void*) QGradient::PhoenixStart },
    { "PlumBath",            Member::INTEGER,              (void*) QGradient::PlumBath },
    { "PlumPlate",           Member::INTEGER,              (void*) QGradient::PlumPlate },
    { "PoliteRumors",        Member::INTEGER,              (void*) QGradient::PoliteRumors },
    { "PremiumDark",         Member::INTEGER,              (void*) QGradient::PremiumDark },
    { "PremiumWhite",        Member::INTEGER,              (void*) QGradient::PremiumWhite },
    { "PurpleDivision",      Member::INTEGER,              (void*) QGradient::PurpleDivision },
    { "RadialGradient",      Member::INTEGER,              (void*) QGradient::RadialGradient },
    { "RainyAshville",       Member::INTEGER,              (void*) QGradient::RainyAshville },
    { "RareWind",            Member::INTEGER,              (void*) QGradient::RareWind },
    { "RedSalvation",        Member::INTEGER,              (void*) QGradient::RedSalvation },
    { "ReflectSpread",       Member::INTEGER,              (void*) QGradient::ReflectSpread },
    { "RepeatSpread",        Member::INTEGER,              (void*) QGradient::RepeatSpread },
    { "RichMetal",           Member::INTEGER,              (void*) QGradient::RichMetal },
    { "RipeMalinka",         Member::INTEGER,              (void*) QGradient::RipeMalinka },
    { "RiskyConcrete",       Member::INTEGER,              (void*) QGradient::RiskyConcrete },
    { "RiverCity",           Member::INTEGER,              (void*) QGradient::RiverCity },
    { "RoyalGarden",         Member::INTEGER,              (void*) QGradient::RoyalGarden },
    { "SaintPetersburg",     Member::INTEGER,              (void*) QGradient::SaintPetersburg },
    { "SaltMountain",        Member::INTEGER,              (void*) QGradient::SaltMountain },
    { "SandStrike",          Member::INTEGER,              (void*) QGradient::SandStrike },
    { "SeaLord",             Member::INTEGER,              (void*) QGradient::SeaLord },
    { "SeaStrike",           Member::INTEGER,              (void*) QGradient::SeaStrike },
    { "Seashore",            Member::INTEGER,              (void*) QGradient::Seashore },
    { "ShadyWater",          Member::INTEGER,              (void*) QGradient::ShadyWater },
    { "SharpBlues",          Member::INTEGER,              (void*) QGradient::SharpBlues },
    { "SharpeyeEagle",       Member::INTEGER,              (void*) QGradient::SharpeyeEagle },
    { "ShyRainbow",          Member::INTEGER,              (void*) QGradient::ShyRainbow },
    { "SkyGlider",           Member::INTEGER,              (void*) QGradient::SkyGlider },
    { "SleeplessNight",      Member::INTEGER,              (void*) QGradient::SleeplessNight },
    { "SmartIndigo",         Member::INTEGER,              (void*) QGradient::SmartIndigo },
    { "SmilingRain",         Member::INTEGER,              (void*) QGradient::SmilingRain },
    { "SnowAgain",           Member::INTEGER,              (void*) QGradient::SnowAgain },
    { "SoftCherish",         Member::INTEGER,              (void*) QGradient::SoftCherish },
    { "SoftGrass",           Member::INTEGER,              (void*) QGradient::SoftGrass },
    { "SoftLipstick",        Member::INTEGER,              (void*) QGradient::SoftLipstick },
    { "SolidStone",          Member::INTEGER,              (void*) QGradient::SolidStone },
    { "SpaceShift",          Member::INTEGER,              (void*) QGradient::SpaceShift },
    { "SpikyNaga",           Member::INTEGER,              (void*) QGradient::SpikyNaga },
    { "SpringWarmth",        Member::INTEGER,              (void*) QGradient::SpringWarmth },
    { "StarWine",            Member::INTEGER,              (void*) QGradient::StarWine },
    { "StretchToDeviceMode", Member::INTEGER,              (void*) QGradient::StretchToDeviceMode },
    { "StrictNovember",      Member::INTEGER,              (void*) QGradient::StrictNovember },
    { "StrongBliss",         Member::INTEGER,              (void*) QGradient::StrongBliss },
    { "StrongStick",         Member::INTEGER,              (void*) QGradient::StrongStick },
    { "SugarLollipop",       Member::INTEGER,              (void*) QGradient::SugarLollipop },
    { "SummerGames",         Member::INTEGER,              (void*) QGradient::SummerGames },
    { "SunVeggie",           Member::INTEGER,              (void*) QGradient::SunVeggie },
    { "SunnyMorning",        Member::INTEGER,              (void*) QGradient::SunnyMorning },
    { "SupremeSky",          Member::INTEGER,              (void*) QGradient::SupremeSky },
    { "SweetDessert",        Member::INTEGER,              (void*) QGradient::SweetDessert },
    { "SweetPeriod",         Member::INTEGER,              (void*) QGradient::SweetPeriod },
    { "TeenNotebook",        Member::INTEGER,              (void*) QGradient::TeenNotebook },
    { "TeenParty",           Member::INTEGER,              (void*) QGradient::TeenParty },
    { "TemptingAzure",       Member::INTEGER,              (void*) QGradient::TemptingAzure },
    { "TrueSunset",          Member::INTEGER,              (void*) QGradient::TrueSunset },
    { "ViciousStance",       Member::INTEGER,              (void*) QGradient::ViciousStance },
    { "WarmFlame",           Member::INTEGER,              (void*) QGradient::WarmFlame },
    { "WideMatrix",          Member::INTEGER,              (void*) QGradient::WideMatrix },
    { "WildApple",           Member::INTEGER,              (void*) QGradient::WildApple },
    { "WinterNeva",          Member::INTEGER,              (void*) QGradient::WinterNeva },
    { "WitchDance",          Member::INTEGER,              (void*) QGradient::WitchDance },
    { "YoungGrass",          Member::INTEGER,              (void*) QGradient::YoungGrass },
    { "YoungPassion",        Member::INTEGER,              (void*) QGradient::YoungPassion },
    { "ZeusMiracle",         Member::INTEGER,              (void*) QGradient::ZeusMiracle },
    { "coordinateMode",      Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_coordinateMode },
    { "setColorAt",          Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_setColorAt },
    { "setCoordinateMode",   Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_setCoordinateMode },
    { "setSpread",           Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_setSpread },
    { "spread",              Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_spread },
    { "type",                Member::NORMAL_FUNCTION,      (void*) lqtk_QGradient_type },
    { NULL,                  Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QGradientBinding::classInfo = 
{
    "QGradient",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QGradient_constructor,
    lqtk_QGradient_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    185,
    members
};

/* ============================================================================================ */

int QGradientBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
