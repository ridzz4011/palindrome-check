#ifndef QUEUEARR_HPP
#define QUEUEARR_HPP

struct Queue {
    char arr[20];
    int front, rear;
    int capacity;

    Queue(int size) {
        front = 0;
        rear = -1;
        capacity = size;
    }

    // Function untuk mengecek apakah queue penuh
    bool isFull();
    // Function untuk mengecek apakah queue kosong
    bool isEmpty();

    // Function untuk menambahkan elemen ke belakang queue
    void enqueue(char k);

    // Function untuk menghapus elemen dari depan queue
    char dequeue();
};

bool cekPalindromeArr(char str[], int length);

#endif