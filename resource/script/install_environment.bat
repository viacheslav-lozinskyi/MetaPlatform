@cls
@echo ==========================================================================
@echo Installing of default build environment...
@echo ==========================================================================

@if "%1"=="" goto :default
@setx MP_OUTPUT_FOLDER %*
@goto :finish

:default
@setx MP_OUTPUT_FOLDER c:
@echo ==========================================================================
@echo USAGE:
@echo    install_environment.bat [output_folder]

:finish
@echo ==========================================================================
@echo Restart Windows to apply changes...
@echo ==========================================================================