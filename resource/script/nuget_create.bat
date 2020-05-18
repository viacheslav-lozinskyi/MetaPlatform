@ECHO ==========================================================================
@ECHO Creating of NuGet package...
@ECHO ==========================================================================

@rmdir /S /Q ..\..\builds\publish
@mkdir ..\..\builds\publish
@xcopy /E /I ..\package\*.nuspec ..\..\builds\publish
@xcopy /E /I ..\package\*.targets ..\..\builds\publish\build
@xcopy /E /I ..\..\library\*.* ..\..\builds\publish\library

@nuget.exe pack ..\..\builds\publish\MetaPlatform.nuspec -OutputDirectory ..\..\builds\publish
