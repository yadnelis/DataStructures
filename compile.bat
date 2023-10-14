cd /d %~dp0
g++ -I %~dp0headers -o program *.cpp
program