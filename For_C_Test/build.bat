SET bdate=%date:~0%
SET btime=%time:~0,2%:%time:~3,2%:%time:~6,2%
set /A minute=time_end_minute-time_begin_minute
set /A second=time_end_second-time_begin_second+minute*60
set /A millisec=time2_millisec-time1_millisec

copy .\list\*.c
copy .\list\*.h

REM build
gcc -c main.c -o test.o
gcc -c list.c -o list.o

REM link
gcc test.o list.o -o test

REM clear
del *.o
del *.h
for %%i in (*.c) do (
    if not "%%i"=="main.c" (
        del "%%i"
    )
)
cls
@echo off
ECHO ***********************************************
ECHO *  Build Success
ECHO *  BUILD DAY   : %bdate%-%btime%
ECHO *  Consume Time: %second%.%millisec%Sec
ECHO ***********************************************

pause

