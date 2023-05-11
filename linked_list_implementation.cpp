#include <iostream>
using namespace std;

// Definition of a linked list node
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};
// Function to print the linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) {
            cout << "->";
        }
        head = head->next;
    }
    cout << "->NULL" << endl;
}
int main() {
    // Creating the linked list
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    // Connecting the nodes
    head->next = second;
    second->next = third;

    // Printing the linked list
    printLinkedList(head);

    // Clean up memory
    delete head;
    delete second;
    delete third;

    return 0;
}
