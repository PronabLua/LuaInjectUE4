# Building LuaInjectUE4

## Requirements

- **Android SDK**: Ensure you have the Android SDK installed.
- **Android NDK**: Required for compiling C++ code.
- **Java Development Kit (JDK)**: Version 8 or higher (compatible with your Gradle version).
- **CMake**: Version 3.10.2 or higher.

## Building with Command Line

The easiest way to build the project is using the Gradle wrapper included in the repository.

1.  Open a terminal in the project root.
2.  Run the build command:
    *   **Windows (PowerShell/CMD):**
        ```powershell
        .\gradlew.bat build
        ```
    *   **Linux/macOS:**
        ```bash
        ./gradlew build
        ```

3.  The build artifacts (AAR/APK) will be located in `build/outputs/aar/` (since this is a library project).

## Building with VS Code

1.  **Open Folder**: Open the `LuaInject` folder in VS Code.
2.  **Extensions**: It is recommended to install the following extensions for a better development experience:
    *   **C/C++** (by Microsoft) for C++ intellisense.
    *   **Gradle for Java** (by Microsoft) if you want UI integration for Gradle tasks.

### Using the Integrated Terminal

1.  Open the VS Code terminal (`Ctrl + ~`).
2.  Run the standard gradle build command:
    ```powershell
    .\gradlew.bat build
    ```

## Project Structure

- `src/main.cpp`: Core C++ logic.
- `src/LuaGlobal.cpp`: Lua global state management.
- `CMakeLists.txt`: CMake build configuration.
- `build.gradle`: Gradle build configuration.
