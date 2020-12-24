@echo ==========================================================================
@echo Creating of NuGet package...
@echo ==========================================================================
@echo Project name: MetaPlatform
@echo Output folder: %MP_OUTPUT_FOLDER%
@echo ==========================================================================

@if exist %MP_OUTPUT_FOLDER%\output\package\ goto :continue1
@mkdir %MP_OUTPUT_FOLDER%\output\package

:continue1
@if not "%MP_OUTPUT_FOLDER%" == "" goto :continue2
@echo Build environment is not initialized.
@echo Run "metaplatform\resource\script\install_environment.bat" to resolve the problem.
@goto :finish

:continue2
@if exist "%MP_OUTPUT_FOLDER%\output\package\nuget.exe" goto :continue3
@echo ERROR: File NuGet.exe not found!
@echo ------
@echo Copy this file to folder "%MP_OUTPUT_FOLDER%\output\package" from one of next location:
@echo ------
@dir /B /S %USERPROFILE%\nuget.exe
@goto :finish

:continue3
@rmdir /S /Q %MP_OUTPUT_FOLDER%\output\package\metaplatform
@rmdir /S /Q %HOMEDRIVE%%HOMEPATH%\.nuget\packages\metaplatform
@mkdir %MP_OUTPUT_FOLDER%\output\package\metaplatform
@xcopy /S /I /Q ..\package\*.nuspec %MP_OUTPUT_FOLDER%\output\package\metaplatform
@xcopy /S /I /Q ..\package\*.targets %MP_OUTPUT_FOLDER%\output\package\metaplatform\build
@xcopy /S /I /Q ..\..\library\*.hpp %MP_OUTPUT_FOLDER%\output\package\metaplatform\include
@echo ==========================================================================
@%MP_OUTPUT_FOLDER%\output\package\nuget.exe pack %MP_OUTPUT_FOLDER%\output\package\metaplatform\MetaPlatform.nuspec -OutputDirectory %MP_OUTPUT_FOLDER%\output\package\metaplatform

:finish
@echo ==========================================================================
