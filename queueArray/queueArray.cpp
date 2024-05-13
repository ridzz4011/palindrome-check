#include <iostream>
#include <cstring>
using namespace std;

#define MAX_SIZE 20

// Struktur data untuk queue dengan array
struct Queue {
    char arr[MAX_SIZE];
    int front, rear;
    int capacity;

    Queue(int size) {
        front = 0;
        rear = -1;
        capacity = size;
    }

    // Function untuk mengecek apakah queue penuh
    bool isFull() {
        return (rear - front + 1 == capacity);
    }

    // Function untuk mengecek apakah queue kosong
    bool isEmpty() {
        return (front > rear);
    }

    // Function untuk menambahkan elemen ke belakang queue
    void enqueue(char k) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[++rear] = k;
    }

    // Function untuk menghapus elemen dari depan queue
    char dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return '\0';
        }
        return arr[front++];
    }
};

// Function untuk mengecek apakah sebuah kata adalah palindrom atau tidak
bool isPalindrome(char str[], int length) {
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

// Function main untuk menguji program
int main() {
    int length;
    cout << "Masukkan jumlah huruf dalam kata: ";
    cin >> length;
    cin.ignore(); // Membersihkan newline character dari buffer

    char str[length];
    cout << "Masukkan huruf satu persatu:" << endl;
    for (int i = 0; i < length; i++) {
        cout << "Huruf ke-" << i + 1 << ": ";
        cin >> str[i];
    }

    if (isPalindrome(str, length))
        cout << "Palindrom" << endl;
    else
        cout << "Bukan Palindrom" << endl;

    return 0;
}
