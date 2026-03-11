#include "playground/play_deducing_this.h"

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    PlayDeducingThis::PlayDeducingThis()
    {
        play_version_ = PlayVersion::kCxx23;
        play_type_ = PlayType::kDeducingThis;
        play_status_ = PlayStatus::kWIP;
        play_describe_ = "Explicit Object Parameter";
    }

    void PlayDeducingThis::Run()
    {
        std::println("************** {} **************", "Run Context");
        RunCvAndReferenceQualifier();
        RunCuriouslyRecurringTemplatePattern();
    }

    void PlayDeducingThis::RunCvAndReferenceQualifier()
    {
        std::println("------------- {} -------------", "RunCvAndReferenceQualifier");

        // C L.
        std::println("Const And Left Value");
        const detail::TestDeducingThis test_deducing_this_1("Const And Left Value");
        std::println("Output member value={}", test_deducing_this_1.GetString());
        // C R.
        std::println("Const And Right Value");
        std::println("Output member value={}", static_cast<const detail::TestDeducingThis &&>(detail::TestDeducingThis("Const And Right Value")).GetString());
        // V L.
        std::println("Volatile And Left Value");
        detail::TestDeducingThis test_deducing_this_3("Volatile And Left Value");
        std::println("Output member value={}", test_deducing_this_3.GetString());
        // V R.
        std::println("Volatile And Right Value");
        std::println("Output member value={}", detail::TestDeducingThis("Volatile And Right Value").GetString());
    }

    void PlayDeducingThis::RunCuriouslyRecurringTemplatePattern()
    {
        std::println("------------- {} -------------", "RunCvAndReferenceQualifier");
    }

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE