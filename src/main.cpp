

#include <thread>
#include <chrono>
#include "LuaGlobal.h"
#include "Common.h"


void Main_Thread()
{
    while (!Cheat::libUE4Base)
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

    *(uintptr_t *)&Lua::luaL_loadbufferx_Ptr = Cheat::libUE4Base + (0xACC8218);
    *(uintptr_t *)&Lua::lua_pcall_Ptr = Cheat::libUE4Base + (0xACA4A08);
    *(uintptr_t *)&Lua::sub_BA003F8_Ptr = Cheat::libUE4Base + (0xBA003F8);
    *(uintptr_t *)&Lua::lua_tostring_Ptr = Cheat::libUE4Base + (0xACA2E28);

    Lua::Initialize();
}


__attribute__((constructor)) void library_constructor()
{
    std::thread(Main_Thread).detach();
}
