# C++  20/17/14/11 code examples

Table of Contents. (More features coming)

Sr No| C++ Version  | Topic | New Feature  | Code Sample Available? | Notes |
| ------------- | ------------- | ------------- | ------------- | ------------- |
1.1| C++20 | Bitfields | Default initialization | Yes |  |
1.2| C++20 | Bitfields | Max Munch Rule | Coming soon |  |
2| C++20 | Lambda | Capture 'this' vs capture \*this | Yes | 1.lambda capture [this] 2. capture [\*this] \*this capture should be used with NUMA friendly & async code. **Bug opened with gnu gcc.** [95388](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=95388) |
3.1| C++20 | 3 way comparison | TBD | Coming soon |  |
4.1| C++20 | Concurrency | Latches | Coming soon |  |
5.1| C++20 | Atomics | Compare & Exchange with bits padding | Coming soon |  |
6.1| C++20 | Constexpr | Virtual calls from constexpr | Coming soon |  |
7.1| C++20 | Concepts | TBD | Coming soon |  |
8.1| C++20 | Modules | TBD | Coming soon |  |
9.1| C++20 | Coroutines | TBD | Coming soon |  |
| C++17 | Folding expressions  | Left Fold | Yes |  |
| C++17 | Folding expressions  | Right Fold | Coming Soon |  |
| C++17 | Parallel loops | TBD | Coming soon |  |



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
