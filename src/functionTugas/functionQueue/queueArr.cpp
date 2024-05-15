#include <iostream>
#include "../../../include/queueArr.hpp"

bool Queue::isFull() {
    return (rear - front + 1 == capacity);
}

bool Queue::isEmpty() {
    return (front > rear);
}

void Queue::enqueue(char k) {
    if (isFull) {
       std::cout << "Antrian sudah penuh\n" ;
       return;
    }
    arr[++rear] = k;
}

char Queue::dequeue() {
    if (isEmpty) {
       std::cout << "Antrian masih kosong\n" ;
       return '\0';
    }
    return arr[front++];
}