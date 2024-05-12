#include <iostream>

#include "../../../include/intro.hpp"

#include "../../../include/clearscreen.hpp"

#include <chrono>
#include <thread>

void Intro() {
    ClearScreen();

    for(int i = 0; i < 75; i++) {
        std::cout << "=" ;
    }

    std::cout << "\n" ;

    std::cout << "\n\t\t" << "           +--------------------+" ;
    std::cout << "\n\t\t" << "           |   Kel Strukdat 8   |" ;
    std::cout << "\n\t\t" << "+------------------------------------------+" ;
    std::cout << "\n\t\t" << "| Nama :                  Farid Noer Hakim |" ;
    std::cout << "\n\t\t" << "| NPM :                      2310631170081 |" ;
    std::cout << "\n\t\t" << "| Kelas :                   2C Informatika |" ;
    std::cout << "\n\t\t" << "+------------------------------------------+" ;
    std::cout << "\n\t\t" << "| Nama :           Faishal Muhammad Farhan |" ;
    std::cout << "\n\t\t" << "| NPM :                      2310631170135 |" ;
    std::cout << "\n\t\t" << "| Kelas :                   2C Informatika |" ;
    std::cout << "\n\t\t" << "+------------------------------------------+" ;
    std::cout << "\n\t\t" << "| Nama :             Rafaisya Dwi Adrianto |" ;
    std::cout << "\n\t\t" << "| NPM :                      2310631170147 |" ;
    std::cout << "\n\t\t" << "| Kelas :                   2C Informatika |" ;
    std::cout << "\n\t\t" << "+------------------------------------------+" ;

    std::cout << "\n\n" ;

    for(int i = 0; i < 75; i++) {
        std::cout << "=" ;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(5500));
}