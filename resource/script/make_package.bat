@cls
@echo ==========================================================================
@echo Creating of NuGet package...
@echo ==========================================================================
@echo Project name: MetaPlatform
@echo Output folder: %MP_OUTPUT_FOLDER%
@echo ==========================================================================

@mkdir %MP_OUTPUT_FOLDER%\output\package

@if not "%MP_OUTPUT_FOLDER%" == "" goto :continue1
@echo Build environment is not initialized.
@echo Run "metaplatform\resource\script\install_environment.bat" to resolve the problem.
@goto :finish

:continue1
@if exist "%MP_OUTPUT_FOLDER%\output\package\nuget.exe" goto :continue2
@echo File NuGet.exe not found!
@echo ------
@echo Copy this file to folder "%MP_OUTPUT_FOLDER%\output\package" from one of next location:
@echo ------
@dir /B /S %LOCALAPPDATA%\nuget.exe
@goto :finish

:continue2
@rmdir /S /Q %MP_OUTPUT_FOLDER%\output\package\metaplatform
@mkdir %MP_OUTPUT_FOLDER%\output\package\metaplatform
@xcopy /E /I /Q ..\package\*.nuspec %MP_OUTPUT_FOLDER%\output\package\metaplatform
@xcopy /E /I /Q ..\package\*.targets %MP_OUTPUT_FOLDER%\output\package\metaplatform\build
@xcopy /E /I /Q ..\..\library\*.hpp %MP_OUTPUT_FOLDER%\output\package\metaplatform\include

@%MP_OUTPUT_FOLDER%\output\package\nuget.exe pack %MP_OUTPUT_FOLDER%\output\package\metaplatform\MetaPlatform.nuspec -OutputDirectory %MP_OUTPUT_FOLDER%\output\package\metaplatform

:finish
@echo ==========================================================================
