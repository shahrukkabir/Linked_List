#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
public:
    int value;      // Data stored in the node
    Node *next;     // next is a pointer which points to the next node of the list
};

int main() {
    // Create three nodes dynamically
    Node *first  = new Node();  // Pointer to the first node
    Node *second = new Node();  // Pointer to the second node
    Node *third  = new Node();  // Pointer to the third node

    // Assign values to each node
    first->value = 10;
    second->value = 20;
    third->value = 30;

    // Link nodes together
    first->next  = second;  // First node points to second node
    second->next = third;  // Second node points to third node
    third->next  = NULL; // Last node points to null (end of list)

    // Traverse the linked list
    Node* head = first;  // Start from the first node
    while (head != NULL) {
        cout << "Value: " << head->value << endl; // Print current node value
        head = head->next;                       // Move to the next node
    }

    return 0;
}
