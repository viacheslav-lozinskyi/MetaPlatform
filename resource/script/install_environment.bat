@echo ==========================================================================
@echo Installing of default build environment...
@echo ==========================================================================

@if "%1"=="" goto :error
@setx MP_OUTPUT_FOLDER %*
@goto :finish

:error
@echo OPERATION FAILED!
@echo ---
@echo USAGE:
@echo    install_environment.bat [output_folder]

:finish
@echo ==========================================================================
@echo Restart Windows to apply changes...
@echo ==========================================================================