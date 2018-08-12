# Visual C++ minimal project with UTF-8

The minimal sample Visual C++ project with UTF-8 encoding. No compromising, no annoying Byte Order Marks.

## Requirements

- Windows 10
- VisualStudio 2017 Community Edition
- git for Windows

## Fetch

Download or `git clone` this repository and then `cd` into this project:

```console
git clone https://github.com/moutend/cpp-console-app-utf-8.git
cd cpp-console-app-utf-8
```

## Build

To build `hello.vcxproj`, run the following command:

```console
msbuild hello.vcxproj
```

You can also switch debug or release build by passing `/p:configuration=xxx` flag:

```console
msbuild hello.vcxproj /p:configuration=release
```

FYI, setup the `PATH` environment variable with this command:

```console
set PATH=%PATH%;%PROGRAMFILES(x86)%\Microsoft Visual Studio\2017\Community\MSBuild\15.0\Bin
```

## Run

After done the build steps above, run `hello.exe`:

```console
cd Debug
hello.exe
```

It shows the messages like:

```console
Hello, World!
こんにちは、世界！
```

## See Also

- [Walkthrough: Using MSBuild to Create a Visual C++ Project](https://docs.microsoft.com/en-us/cpp/build/walkthrough-using-msbuild-to-create-a-visual-cpp-project)
- [/utf-8 (Set Source and Executable character sets to UTF-8)](https://msdn.microsoft.com/en-us/library/mt708821.aspx)
- [How to print UTF-8 strings to std/cout on Windows? - Stack Overflow](https://stackoverflow.com/questions/45575863/how-to-print-utf-8-strings-to-stdcout-on-windows)

## LICENSE

MIT

## Author

Yoshiyuki Koyanagi <moutend@gmail.com>
