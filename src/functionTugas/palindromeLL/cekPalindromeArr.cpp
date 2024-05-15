#include "../../../include/queueArr.hpp"

bool cekPalindromeArr(char str[], int length) {
    // Buat queue baru dengan kapasitas sebanyak length
    Queue q(length);

    // Enqueue setiap karakter dari kata ke queue
    for (int i = 0; i < length; i++)
        q.enqueue(str[i]);

    // Bandingkan setiap karakter dari depan dan belakang
    // Jika ada perbedaan, kata bukan palindrom
    for (int i = 0; i < length / 2; i++) {
        char front = q.dequeue();
        char back = str[length - i - 1];
        if (front != back)
            return false;
    }

    return true;
}