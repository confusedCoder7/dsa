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

    return insertAtStart(arr, index + 1, size, temp);
}

int main() {
    int arr[4] = {2, 4, 6, 8};
    Node *head = insertAtStart(arr, 0, 4, NULL);

    Node *temp = head;
    while(temp) {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"\b \b\b \b\b \b"<<endl;
    return 0;
}