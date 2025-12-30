

namespace Lua
{
    int (*luaL_loadbufferx_Ptr)(void* L, const char* buff, size_t size, const char* name, const char* mode);
    int (*lua_pcall_Ptr)(void* L, int nargs, int nresults, int errfunc);
    int64_t (*sub_BA003F8_Ptr)(int a1);
    const char* (*lua_tostring_Ptr)(void* L, int index);

    void* GetLuaState();
    bool ExecuteLuaScript(void* L, const char* script, const char* name);
    void Initialize();
}
