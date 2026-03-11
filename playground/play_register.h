#ifndef PLAYGROUND_PLAY_REGISTER_H_
#define PLAYGROUND_PLAY_REGISTER_H_

#include <mutex>
#include <vector>
#include <string>
#include <unordered_map>

#include "playground/play_macro.h"
#include "playground/play_base.h"

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    class PlayRegister
    {
    public:
        static PlayRegister *GetInstance();

        void AddPlay(const std::string &derived_name, PlayBase *play_base);

        void Run();

    private:
        static PlayRegister *play_register_;
        std::vector<PlayBase *> play_list_;
        std::unordered_map<uint64_t, std::string> play_index_to_object_map_;
    };

#define REGISTER_PLAY(derived_name)                                            \
    namespace                                                                  \
    {                                                                          \
        struct PlayRegister##derived_name                                      \
        {                                                                      \
            PlayRegister##derived_name()                                       \
            {                                                                  \
                auto *play_register = PlayRegister::GetInstance();             \
                if (play_register != nullptr)                                  \
                {                                                              \
                    play_register->AddPlay(#derived_name, new derived_name()); \
                }                                                              \
            }                                                                  \
            ~PlayRegister##derived_name() = default;                           \
        };                                                                     \
        static PlayRegister##derived_name play_register##derived_name;         \
    } // namespace

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE

#endif // PLAYGROUND_PLAY_REGISTER_H_
