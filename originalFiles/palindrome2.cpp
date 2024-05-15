#include <iostream>
#include <string>

struct Node {
    char data;
    Node* next;
};

class Queue {
public:
    Node *front, *rear;
    Queue() {
        front = rear = NULL;
    }

    void enQueue(char x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;

        if (front == NULL) {
            front = rear = temp;
            return;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    void deQueue() {
        if (front == NULL && rear == NULL) {
            return;
        }     

        Node* temp = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete(temp);
    }

    char getFront() {
        if (front != NULL) {
            return front->data;
        } else {
            return ' ';
        }
    }
};

bool cekPalindrome(std::string str) {
    Queue q;
    int panjangString = str.length();

    // Enqueue semua karakter yang ada didalam string
    for (int i = 0; i < panjangString; i++) {
        q.enQueue(str[i]);
    }

    // Dequeue lalu membandingkan huruf pertama dan terakhir
    for (int i = panjangString - 1; i >= 0; i--) {
        if (str[i] != q.getFront()) {
            return false;
        }
        q.deQueue();
    }

    return true;
}


int main() {
    while (true) {
        std::string kata;
        std::cout << "Masukkan kata: ";
        std::getline(std::cin, kata);

        if (kata.empty()) break;

        if (cekPalindrome(kata))
            std::cout << "Kata tersebut adalah palindrome" << std::endl;
        else
            std::cout << "Kata tersebut bukan palindrome" << std::endl;
    }

    return 0;
}
