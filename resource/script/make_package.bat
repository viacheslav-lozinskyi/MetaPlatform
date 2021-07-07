@echo ==========================================================================
@echo Creating of NuGet package...
@echo ==========================================================================
@echo Project name: MetaPlatform
@echo Output folder: %USERPROFILE%\.metaoutput\package
@echo ==========================================================================

@if exist %USERPROFILE%\.metaoutput\package\ goto :continue1
@mkdir %USERPROFILE%\.metaoutput\package
:continue1

@if not exist %USERPROFILE%\.metaoutput\package\metaplatform goto :continue2
@echo --- Package removing... --------------------------------------------------
@rmdir /S /Q %USERPROFILE%\.metaoutput\package\metaplatform
@rmdir /S /Q %HOMEDRIVE%%HOMEPATH%\.nuget\packages\metaplatform
:continue2

@echo --- Package copying... ---------------------------------------------------
@mkdir %USERPROFILE%\.metaoutput\package\metaplatform
@xcopy /S /I /Q ..\package\metaplatform*.nuspec %USERPROFILE%\.metaoutput\package\metaplatform
@xcopy /S /I /Q ..\package\metaplatform*.targets %USERPROFILE%\.metaoutput\package\metaplatform\build
@xcopy /S /I /Q ..\..\library\metaplatform.core\*.hpp %USERPROFILE%\.metaoutput\package\metaplatform\include\metaplatform.core

@echo --- Package generating... ------------------------------------------------
@..\..\..\metaplatform\resource\tool\nuget.exe pack %USERPROFILE%\.metaoutput\package\metaplatform\MetaPlatform.nuspec -OutputDirectory %USERPROFILE%\.metaoutput\package\metaplatform
@echo ==========================================================================
