#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Creating linked list
Node* insertAtEnd(int arr[], int index, int size) {
    if(index == size) {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = insertAtEnd(arr, index + 1, size);
    return temp;
}

int main() {
    int arr[] = {2, 4, 6, 8};
    int index = 0;
    int size = 4;
    Node *head = NULL;
    head = insertAtEnd(arr, index, size);

    // Traverse at Xth position
    int newValue = 30;
    int x = 2;
    Node *left = head;
    x--;
    while(x != 0) {
        left = left->next;
        x--;
    }
    Node *newNode = new Node(newValue);
    newNode->next = left->next;
    left->next = newNode;

    // Print
    Node *temp = head;
    while(temp) {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"\b \b\b \b\b \b"<<endl;
    return 0;
}