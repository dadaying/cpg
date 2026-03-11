#ifndef PLAYGROUND_PLAY_INTERFACE_H_
#define PLAYGROUND_PLAY_INTERFACE_H_

#include "playground/play_macro.h"
#include "playground/play_register.h"

using namespace PLAYGROUND_NAMESPACE;

inline void RunPlayGround()
{
    auto *play_register = PlayRegister::GetInstance();
    if (play_register != nullptr)
    {
        play_register->Run();
    }
}

#endif // PLAYGROUND_PLAY_INTERFACE_H_
