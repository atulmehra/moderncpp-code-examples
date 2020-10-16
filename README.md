# C++  20/17/14/11 code examples

Table of Contents. (More features coming)

# C++20
| Sr No | C++ Version  | Topic | New Feature  | Code Sample Available? | Notes |
| ---| ------------- | ------------- | ------------- | ------------- | ------------- |
|1| C++20 | Bitfields | Default initialization | Yes |  |
|2| C++20 | Lambda | Capture 'this' vs capture \*this | Yes | 1.lambda capture [this] 2. capture [\*this] \*this capture should be used with NUMA friendly & async code. **Bug opened with gnu gcc.** [95388](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=95388). Fixed by gnu on 16-Oct-20 |
|3| C++20 | 3 way comparison | Example | Yes |  |
|4| C++20 | Concepts | Apply constraints using concepts on a function | Yes |  |
|5| C++20 | Modules | Import, export a module | Yes | 1. Feature request in [Goldbolt](https://github.com/compiler-explorer/compiler-explorer/issues/2166). 2. Stackoverflow [link](https://stackoverflow.com/questions/60760248/how-to-test-c-modules-with-godbolt-compiler-explorer/63682170#63682170) |
|6| C++20 | Coroutines | Coyield | Yes |  | See [Godbolt](https://godbolt.org/z/6GEY95) example too
|7| C++20 | Ranges | Lazy algos & function chaining  | Yes |  |
|8| C++20 | Ranges | Simplified usage of algorithms  | Yes |  |
|9| C++20 | Ranges | Views  | Yes |  |
|10| C++20 | Constexpr | Call new from a constexpr | Yes |  |
|11| C++20 | Constexpr | Virtual calls from constexpr | Coming soon |  |
|12| C++20 | Constexpr | Relaxations of constexpr restrictions | Coming soon |  |
|13| C++20 | Bitfields | Max Munch Rule | Coming soon |  |
|14| C++20 | Concurrency | Latches | Coming soon |  |
|15| C++20 | Atomics | Compare & Exchange with bits padding | Coming soon |  |

# C++17
| Sr No | C++ Version  | Topic | New Feature  | Code Sample Available? | Notes |
| ---| ------------- | ------------- | ------------- | ------------- | ------------- |
|1| C++17 | Folding expressions  | Left Fold | Yes |  |
|2| C++17 | Folding expressions  | Right Fold | Coming Soon |  |
|3| C++17 | Parallel loops | TBD | Coming soon |  |




# Setting up dev env
## Windows 10. (Windows Subsystem for Linux)

1. Open windows powershell. Type wsl
2. Create directory for gcc. I have pre built the gcc for windows 10 wsl. I will soon upload [here](https://github.com/atulmehra/cpp-tools/upload/master) to my repository. Copy locally to your folder. Add to PATH to the folder.
3. You may have to install extensions for cmake tools. Then press CTRL+SHIFT+P. Choose CMake configure.
4. In VS Code, now you should see gcc11.0.0 configured.
5. Happy modern-cpp-ing. Enjoy.
6. Write back to me eng.amehra@gmail for any issues and I can possibly help you, if you face an issue.

![Build cpp20 code example with VSCode](https://github.com/atulmehra/cpp-tools/blob/master/VSCode-CPP20-Configure-gcc20.png)

## Linux
You can get the prebuilt binaries for gcc from [homebrew](https://formulae.brew.sh/formula/gcc#default)
