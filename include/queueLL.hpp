#ifndef QUEUELL_HPP
#define QUEUELL_HPP

#include <string>

struct node {
    char data;
    node* next;
};

class queue {
    public:
        node *depan, *belakang;

        queue() {
            depan = belakang = nullptr;
        }

        void enQueue(char x);

        void deQueue();

        char getDepan();
};

bool cekPalindromeLL(std::string str);

#endif