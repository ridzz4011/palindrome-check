#include "../../../include/queueLL.hpp"

bool cekPalindromeLL(std::string str) {
    queue q;
    int panjangString = str.length();

    // Enqueue semua karakter yang ada didalam string
    for (int i = 0; i < panjangString; i++) {
        q.enQueue(str[i]);
    }

    // Dequeue lalu membandingkan huruf pertama dan terakhir
    for (int i = panjangString - 1; i >= 0; i--) {
        if (str[i] != q.getDepan()) {
            return false;
        }
        q.deQueue();
    }

    return true;
}