#include <iostream>
#include <vector>
#include <string>

#include "include/clearscreen.hpp"
#include "include/loading.hpp"
#include "include/pauseconsole.hpp"
#include "include/intro.hpp"

#include "include/queueLL.hpp"
#include "include/queueArr.hpp"

void deco() {
    for (int i = 0; i < 85; i++) {
        std::cout << "=" ;
    }
}

void deco2() {
    for (int i = 0; i < 85; i++) {
        std::cout << "_" ;
    }
}

int main(int, char**){
    using namespace std;

    Intro();

    Loading();

    int program;

    bool ulang = true;
    do 
    {
        deco();
        cout << "\n" ;

        cout << "\t\t\t" << "|" << "\tList Program:\t    " << "|" << "\n";
        cout << "1. Program Cek Palindrome menggunakan Queue Linked List" << "\n";
        cout << "2. Program Cek Palindrome menggunakan Queue Array" << "\n";
        cout << "3. Exit" << "\n";

        deco();
        cout << "\n";

        cout << "Masukkan pilihan: ";
        cin >> program;

        deco2();
        cout << endl;

        switch (program)
        {
        case 1:
        {
            PauseConsole();
            ClearScreen();

            string kata;
            
            deco();
            cout << "\n\n";

            cout << "Masukan kata: " ;
            getline(cin, kata);

            deco2();
            cout << "\n\n";

            if (kata.empty()) {
                cout << "Masukan kata yang benar!\n";
            }

            if (cekPalindromeLL(kata)) {
                cout << "Kata tersebut termasuk kata palindrome!\n"; 
            } else {
                cout << "Kata tersebut bukan termasuk kata palindrome!\n";
            }
        }
            PauseConsole();
            ClearScreen();
            break;
        case 2:
        {
            PauseConsole();
            ClearScreen();

            string kata;
            int length;
            
            deco();
            cout << "\n\n";

            cout << "Masukan jumlah data dalam kata: ";
            cin >> length;
            cin.ignore();

            cout << "\n";

            char str[20];
            cout << "Masukan Data satu persatu:\n";
            Queue qA(length);
            for(int i = 0; i < length; i++) {
                cout << "Data ke-" << i + 1 << " : ";
                cin >> str[i];
                qA.enqueue(str[i]);
                cout << "Data berhasil ditambahkan!\n";
            }

            deco2();
            cout << "\n\n";

            if (cekPalindromeArr(str, length)) {
                cout << "Kata tersebut termasuk kata palindrome!\n"; 
            } else {
                cout << "Kata tersebut bukan termasuk kata palindrome!\n";
            }
        }
            PauseConsole();
            ClearScreen();
            break;

        case 3:
            cout << "Keluar dari program..." << endl;
            ulang = false;
            PauseConsole();
            ClearScreen();
            break;
        
        default:
            cout << "Angka yang anda pilih tidak ada di pilihan!" << endl ;
            PauseConsole();
            ClearScreen();
            break;
        }

    } while (ulang);

    return 0;
}
