#include "playground/play_register.h"

#include <print>

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    PlayRegister *PlayRegister::play_register_ = nullptr;

    PlayRegister *PlayRegister::GetInstance()
    {
        static std::once_flag flag;
        std::call_once(flag, []()
                       { play_register_ = new PlayRegister(); });
        return play_register_;
    }

    void PlayRegister::AddPlay(const std::string &derived_name, PlayBase *play_base)
    {
        play_list_.push_back(play_base);
        play_index_to_object_map_.emplace(play_index_to_object_map_.size(), derived_name);
    }

    void PlayRegister::Run()
    {
        std::println("########################## {} ##########################", "Play Run Start");
        for (size_t i = 0; i < play_list_.size(); ++i)
        {
            std::println("************** {} **************", "Register Info");
            std::println("play_index={}", i);
            std::println("derived_name={}", play_index_to_object_map_[i]);
            if (play_list_[i] != nullptr)
            {
                play_list_[i]->PrintInfo();
                play_list_[i]->Run();
            }
            std::println("*************************");
        }
        std::println("************** {} **************", "Total Info");
        std::println("Play Num = {}", play_list_.size());
        std::println("########################## {} ##########################", "Play Run End");
    }

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE