#ifndef PLAYGROUND_PLAY_MULTIPLE_SUBSCRIPTS_H_
#define PLAYGROUND_PLAY_MULTIPLE_SUBSCRIPTS_H_

#include "playground/play_base.h"
#include "playground/play_enum.h"
#include "playground/play_macro.h"
#include "playground/play_register.h"

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    class PlayMultipleSubscripts : public PlayBase
    {
    public:
        PlayMultipleSubscripts();

        ~PlayMultipleSubscripts() = default;

        void Run() override;
    };

    REGISTER_PLAY(PlayMultipleSubscripts);

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE

#endif // PLAYGROUND_PLAY_MULTIPLE_SUBSCRIPTS_H_
