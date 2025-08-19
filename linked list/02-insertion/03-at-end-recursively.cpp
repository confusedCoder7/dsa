#include <iostream>
#include <vector>
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

Node* insertAtEnd(int arr[], int index, int size) {
    // Base Case
    if(index == size) {
        return NULL;
    }
    // Create current node
    Node *temp = new Node(arr[index]);
    temp->next = insertAtEnd(arr, index + 1, size);
    // Return current address
    return temp;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    Node *head = insertAtEnd(arr, 0, 5);

    // Print
    Node *temp = head;
    while(temp) {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"\b \b\b \b\b \b"<<endl;
    return 0;
}