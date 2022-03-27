# DcPlugin

See: <https://slowburn.dev/blog/headless-fun-unreal-engine/>

This is a minimal Unreal Engine plugin with a headless target. It can also be
cross-compiled to Linux and executed under WSL.

It works on 4.27 and onwards.

```
# build headless target
C:\UnrealEngine\Engine\Binaries\DotNET\UnrealBuildTool -project="%CD%/DcPlugin.uplugin" DcPluginHeadless Win64 Debug

# run the binary
.\Binaries\Win64\DcPluginHeadless-Win64-Debug.exe

# cross compile to linux
C:\UnrealEngine\Engine\Binaries\DotNET\UnrealBuildTool HeadlessChaos Linux Debug

# run the binary with WSL
wsl ./Binaries/Linux/DcPluginHeadless-Linux-Debug
```