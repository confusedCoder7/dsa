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

Node* insertAtStart(int arr[], int index, int size, Node *prev) {
    if(index == size) {
        return prev;
    }
    Node *temp = new Node(arr[index]);
    temp->next = prev;
    prev = temp;

    return insertAtStart(arr, index + 1, size, prev);
}

int main() {
    Node *head = NULL;
    int arr[] = {30, 7, 8, 20};
    int index = 0, size = 4;
    Node *prev = NULL;
    head = insertAtStart(arr, index, size, prev);

    // Delete at start
    Node *temp = head;
    head = head->next;
    delete temp;

    // Print
    temp = head;
    while(temp) {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"\b \b\b \b\b \b"<<endl;
    return 0;
}