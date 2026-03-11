#ifndef PLAYGROUND_PLAY_PRINT_H_
#define PLAYGROUND_PLAY_PRINT_H_

#include "playground/play_base.h"
#include "playground/play_enum.h"
#include "playground/play_macro.h"
#include "playground/play_register.h"

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    class PlayPrint : public PlayBase
    {
    public:
        PlayPrint();

        ~PlayPrint() = default;

        void Run() override;
    };

    REGISTER_PLAY(PlayPrint);

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE

#endif // PLAYGROUND_PLAY_PRINT_H_
