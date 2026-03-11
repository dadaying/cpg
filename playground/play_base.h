#ifndef PLAYGROUND_PLAY_BASE_H_
#define PLAYGROUND_PLAY_BASE_H_

#include <string>

#include "playground/play_enum.h"
#include "playground/play_macro.h"

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    class PlayBase
    {
    public:
        virtual void Run() = 0;
        virtual void PrintInfo() const;

    protected:
        PlayVersion play_version_ = PlayVersion::kCxx98;
        PlayType play_type_ = PlayType::kCoreLanguage;
        PlayStatus play_status_ = PlayStatus::kUnknown;
        std::string play_describe_;
    };

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE

#endif // PLAYGROUND_PLAY_BASE_H_