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

int main() {
    // Insertion at End
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    Node *head = NULL;
    for(int i=0; i<arr.size(); i++) {
        if(head == NULL) {
            head = new Node(arr[i]);
        } else {
            Node *tail = head;
            while(tail->next != NULL) {
                tail = tail->next;
            }
            Node *temp = new Node(arr[i]);
            tail->next = temp;
        }
    }

    // Optimized version
    Node *head = NULL, *tail = NULL;
    for(int i=0; i<arr.size(); i++) {
        if(head == NULL) {
            head = tail = new Node(arr[i]);
        } else {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // Print
    Node *temp = head;
    while(temp) {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"\b \b\b \b\b \b"<<endl;
    return 0;
}