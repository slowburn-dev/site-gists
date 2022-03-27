# DcProject

See: <https://slowburn.dev/blog/headless-fun-unreal-engine/>

This is a minimal Unreal Engine project that can be built and opened from the editor. This took inspiration from this awesome video: [Unreal Engine C++ Project Setup, From Scratch](https://www.youtube.com/watch?v=94FvzO1HVzY).

This also serves as a minimal sample project that can be used to build [DataConfig](https://slowburn.dev/dataconfig/) in a editor environment.

It works on 4.27 and onwards. If you're on older releases, you need to remove `ContentBrowserAssetDataSource/ContentBrowserClassDataSource/ContentBrowserFileDataSource` from `./DcProject.uproject`.

```
# build
C:\UnrealEngine\Engine\Binaries\DotNET\UnrealBuildTool DcProjectEditor Win64 Development "%CD%/DcProject.uproject" -Rocket -NoHotReload

# generate VS solution
C:\UnrealEngine\Engine\Binaries\DotNET\UnrealBuildTool DcProjectEditor Win64 Development "%CD%/DcProject.uproject" -Rocket -ProjectFiles -Game -Engine -NoIntellisense

# run editor
C:\UnrealEngine\Engine\Binaries\Win64\UE4Editor "%CD%/DcProject.uproject"
```