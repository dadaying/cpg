#ifndef PLAYGROUND_PLAY_ENUM_H_
#define PLAYGROUND_PLAY_ENUM_H_

#include <cstdint>

#include "playground/play_macro.h"

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    enum class PlayVersion : uint8_t
    {
        kCxx98 = 0,
        kCxx03 = 1,
        kCxx11 = 2,
        kCxx14 = 3,
        kCxx17 = 4,
        kCxx20 = 5,
        kCxx23 = 6,
        kCxx26 = 7,
    };

    enum class PlayType : uint64_t
    {
        // ***************** CoreLanguage=0 *****************
        kCoreLanguage = 0,
        kDeducingThis = 1,
        kConsteval = 2,
        kOperatorOverride = 3,
        kLambda = 4,
        kTypeDeducing = 5,
        kAttributes = 6,
        kPreprocessor = 7,
        kLifecycleManagement = 8,
        kConstructorFunction = 9,
        kCodeStructure = 10,
        kInitializationStatements = 11,
        kLiteral = 12,
        kFloatType = 13,
        kCodeFormat = 14,
        kMoveSemantic = 15,
        kConstexpr = 16,
        kTypeConvert = 17,
        kClassMemoryLayout = 18,
        kObjectMemoryLayout = 19,
        kCharacterEncoding = 20,
        // ***************** STL=10000 *****************
        // STL.
        kSTL = 10000,
        kContainer = 10001,
        kIterator = 10002,
        kExpected = 10003,
        kMdspan = 10004,
        kGenerator = 10005,
        kFormatOutput = 10006,
        kRanges = 10007,
        kModules = 10008,
        kCoroutines = 10009,
        // ***************** Algorithm=20000 *****************
        kAlgorithm = 20000,
        kSIMD = 20001,
        // ***************** Template=30000 *****************
        kTemplate = 30000,
        kConcepts = 30001,
        // ***************** System=40000 *****************
        kSystem = 40000,
        kDebug = 40001,
        kBuld = 40002,
        kRunTime = 40003,
        kRunMemory = 40004,
    };

    enum class PlayLabel : uint64_t
    {
        kNewFeature = 0,
        kBugFix = 1,
        kOptimization = 2,
        kNodiscard = 3,
        kDelete = 4,
        kClass = 5,
        kObject = 6,
        kMemory = 7,
        kMultiThread = 8,
        kAsync = 9,
        kSynchronizationPrimitives = 10,
    };

    enum class PlayStatus : uint8_t
    {
        kUnknown = 0,
        kWIP = 1,
        kFinsh = 2,
        kOther = 255
    };

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE

#endif // PLAYGROUND_PLAY_ENUM_H_