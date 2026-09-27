@echo off
setlocal

set "PROJECT_ROOT=%~dp0.."

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b %errorlevel%

if not exist "%PROJECT_ROOT%\build" mkdir "%PROJECT_ROOT%\build"

cl.exe /nologo /std:c++17 /EHsc /utf-8 /Zi /DEBUG /Fe:"%PROJECT_ROOT%\build\leetcode.exe" /Fo:"%PROJECT_ROOT%\build\leetcode.obj" "%PROJECT_ROOT%\leetcode.cpp"

exit /b %errorlevel%

