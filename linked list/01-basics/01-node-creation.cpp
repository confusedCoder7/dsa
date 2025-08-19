#include <iostream>
using namespace std;

// Definition of a Node
class Node {
    public:
    int data;
    Node *next;

    // Constructor to initialize values
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Leetcode (Definition)
class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

int main() {
    // Static Node Creation (Stack)
    // Node x;
    // x.data = 4;
    // x.next = NULL;

    // Dynamic Node Creation (Heap)
    // Node *head = new Node();
    // head->data = 40;
    // head->next = NULL;

    // Using Constructor
    Node *head;
    head = new Node(70);
    // Node *head = new Node(70);

    return 0;
}