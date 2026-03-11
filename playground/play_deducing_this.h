#ifndef PLAYGROUND_PLAY_DEDUCING_THIS_H_
#define PLAYGROUND_PLAY_DEDUCING_THIS_H_

#include <print>
#include <utility>
#include <string>
#include <type_traits>

#include "playground/play_base.h"
#include "playground/play_enum.h"
#include "playground/play_macro.h"
#include "playground/play_register.h"

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    namespace detail
    {
        class TestDeducingThis
        {
        public:
            explicit TestDeducingThis(const std::string &str)
            {
                test_str_ = str;
            }
            ~TestDeducingThis() = default;

            template <typename Self>
            std::string GetString(this Self &&self)
            {
                using SelfType = decltype(self);
                using UnrefSelfType = std::remove_reference_t<SelfType>;
                bool is_const = false, is_left = false;
                if constexpr (std::is_const_v<UnrefSelfType>)
                {
                    is_const = true;
                }
                if constexpr (std::is_lvalue_reference_v<SelfType>)
                {
                    is_left = true;
                }
                std::println("is_const={}, is_left={}", is_const, is_left);
                return std::forward<Self>(self).test_str_;
            }

        private:
            std::string test_str_;
        };
    } // namespace detail

    class PlayDeducingThis : public PlayBase
    {
    public:
        PlayDeducingThis();

        ~PlayDeducingThis() = default;

        void Run() override;

    private:
        void RunCvAndReferenceQualifier();
        void RunCuriouslyRecurringTemplatePattern();
    };

    REGISTER_PLAY(PlayDeducingThis);

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE

#endif // PLAYGROUND_PLAY_DEDUCING_THIS_H_
