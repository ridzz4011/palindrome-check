cmake_minimum_required(VERSION 3.27.7)
project(Palindrome VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Palindrome main.cpp

               src/functionMisc/clearscreen/clearscreen.cpp
               src/functionMisc/loading/loading.cpp
               src/functionMisc/pauseconsole/pauseconsole.cpp
               src/functionMisc/intro/intro.cpp
               
               src/functionTugas/functionQueue/queueLL.cpp
               src/functionTugas/palindromeLL/cekPalindromeLL.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
