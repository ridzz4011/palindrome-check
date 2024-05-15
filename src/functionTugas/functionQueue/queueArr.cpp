#include <iostream>
#include "../../../include/queueArr.hpp"

void Queue::enqueue(char k) {
    if (rear - front + 1 == capacity) {
       std::cout << "Antrian sudah penuh\n" ;
       return;
    }
    arr[++rear] = k;
}

char Queue::dequeue() {
    if (front > rear) {
       std::cout << "Antrian masih kosong\n" ;
       return '\0';
    }
    return arr[front++];
}