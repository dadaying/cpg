#include "playground/play_base.h"

#include <print>

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    void PlayBase::PrintInfo() const
    {
        std::println("************** {} **************", "Print Info");
        std::println("play_version_={}", static_cast<int>(play_version_));
        std::println("play_type_={}", static_cast<int>(play_type_));
        std::println("play_status_={}", static_cast<int>(play_status_));
        std::println("play_describe_={}", play_describe_);
    }

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE