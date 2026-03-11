#include "playground/play_print.h"

#include <print>

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    PlayPrint::PlayPrint()
    {
        play_version_ = PlayVersion::kCxx23;
        play_type_ = PlayType::kFormatOutput;
        play_status_ = PlayStatus::kFinsh;
        play_describe_ = "Print And Prinln";
    }

    void PlayPrint::Run()
    {
        std::println("************** {} **************", "Run Context");
        std::print("Hi, I'm print, I did not use a line break.");
        std::println("Hi, I'm println, I have a line break.");
        std::print("Hi, I'm print, I did not use a line break.");
        std::println("Hi, {2} {1} {0}", "AI", "a", "I'm");
    }

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE