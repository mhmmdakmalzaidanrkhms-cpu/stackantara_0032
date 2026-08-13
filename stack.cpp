#include <iostream>
using namespace std;

// 1. inisialisasi class Node
class Node {
public:
    // 2. inisialisasi variabel data dan Node next sebagai member class
    int data;
    Node* next;

    Node() {
        // 3. pemberian value next sebagai NULL
        next = NULL;
    }
};

// 4. inisialisasi class Stack
class Stack {
private:
};
