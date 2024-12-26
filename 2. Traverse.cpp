#include <bits/stdc++.h>
using namespace std;


class Node {
   public:
    int value;
    Node *next;
};

int main() {
    
    Node *head;
    Node *one   = new Node();
    Node *two   = new Node();
    Node *three = new Node();

    one->value = 10;
    two->value = 20;
    three->value = 30;


    one->next = two;
    two->next = three;
    three->next = NULL;


    head = one;

    cout << "Linked List Values: ";
    while (head != NULL) {
        cout << "[" << head->value << "]";
        if (head->next != NULL) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << " -> NULL" << endl;

    return 0;
}
