#include "../../../include/queueLL.hpp"

void queue::enQueue(char x) {
    node* temp = new node;
    temp->data = x;
    temp->next = nullptr;

    if (depan == nullptr) {
        depan = belakang = temp;
        return;
    } else {
        belakang->next = temp;
        belakang = temp;
    }
}

void queue::deQueue() {
    if (depan == nullptr && belakang == nullptr) {
        return;
    } 

    node* temp = depan;
    depan = depan->next;

    if (depan == nullptr) {
        belakang = nullptr;
    }

    delete(temp);
}

char queue::getDepan() {
    if (depan != nullptr) {
        return depan->data;
    } else {
        return ' ';
    }
}