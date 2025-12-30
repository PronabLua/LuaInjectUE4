# PUBG Mobile UE4 Lua Injector

A professional, open-source injector for executing **custom Lua scripts** inside **PUBG Mobile (Unreal Engine 4)** at runtime by hooking the game’s native Lua execution pipeline.

This project enables developers, researchers, and reverse engineers to inject Lua logic into PUBG Mobile’s in-game Lua environment without modifying game assets.

---

## 🚀 Features

- Runtime injection of **custom Lua scripts**
- Hooks native UE4 Lua loading and execution functions
- Executes scripts inside the game’s **original Lua VM**
- Modular and extensible architecture
- Focused on research, reverse engineering, and experimentation

---

## 🎯 Project Goals

- Provide a clean and stable Lua injection framework for UE4
- Rely strictly on **engine-native Lua functions**
- Maintain a readable and maintainable open-source codebase
- Help developers understand PUBG Mobile’s Lua pipeline

---

## 📁 Repository Structure

.
├── src/
│ ├── Hook/
│ │ ├── LuaHooks.cpp # Lua loader & executor hooks
│ │ └── UE4Hooks.cpp # Unreal Engine hooks
│ ├── Lua/
│ │ ├── Injector.cpp # Script injection logic
│ │ └── ScriptManager.cpp # Script lifecycle handling
│ ├── Utils/
│ │ ├── Logger.cpp
│ │ └── Memory.cpp
│ └── Main.cpp # Entry point
│
├── include/ # Public headers
├── scripts/ # Example Lua scripts
├── CMakeLists.txt
└── README.md

yaml
Copy code

---

## 🧠 How It Works

Custom Lua Script
↓
luaL_loadbuffer (hooked)
↓
lua_load
↓
Lua bytecode compilation
↓
lua_pcall / lua_call
↓
UE4 Lua VM execution

yaml
Copy code

The injector feeds custom Lua scripts directly into the game’s existing Lua execution flow, ensuring correct engine context and stability.

---

## ⚙️ Requirements

- Rooted Android device or emulator
- ARM64 (`arm64-v8a`)
- PUBG Mobile (UE4-based)
- Any native injection method (`ptrace`, `dlopen`, etc.)
- C++17 compatible compiler

---

## 📜 License

Licensed under the **MIT License**.  
See the `LICENSE` file for more information.

---

## 🤝 Contributions

Contributions are welcome.  
Please fork the repository, create a feature branch, and submit a pull request with clear documentation.

---

## 🙌 Credits

- **Pronab / PronabLua**  
  https://github.com/PronabLua/

---

## ⚠️ Disclaimer

This project is intended **for educational and research purposes only**.  
Use of this software may violate game terms of service or local laws.  
This project is **not affiliated** with Tencent, PUBG Corporation, or Epic Games.
