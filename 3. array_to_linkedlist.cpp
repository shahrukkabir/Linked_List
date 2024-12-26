#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createLinkedList(vector<int> v, int n) {
    if (n == 0) return nullptr; // Handle empty vector case

    Node* head = new Node(); // Create the head node
    head->data = v[0];       // Assign the first element
    head->next = nullptr;

    Node* current = head; // Pointer to keep track of the last node

    // Loop through the vector to create nodes
    for (int i = 1; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = v[i];
        newNode->next = nullptr;
        current->next = newNode; // Link the new node
        current = newNode;       // Move to the new node
    }

    return head; // Return the head of the list
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    int n;
    cin >> n; 
    vector<int> v(n);
    for (auto& i : v) cin >> i; 

    Node* head = createLinkedList(v, n); // Create linked list

    cout << "Linked List: ";
    printList(head); // Print the linked list

    // Cleanup to free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
