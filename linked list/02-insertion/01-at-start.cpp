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
    // Insertion at Start
    Node *head = NULL;
    if(head == NULL) {      // LL doesn't exist
        head = new Node(40);
    } else {
        Node *temp = new Node(40);
        temp->next = head;
        head = temp;
    }

    // Inserting values from array
    Node *head = NULL;
    vector<int> arr = {2, 4, 6, 8};
    for(int i=0; i<arr.size(); i++) {
        if(head == NULL) {
            head = new Node(arr[i]);
        } else {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    // Print LL
    Node *temp = head;
    // while(temp != NULL) {    both same actually, (NULL-falsy value)
    while(temp) {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"\b \b\b \b\b \b"<<endl;
    return 0;
}