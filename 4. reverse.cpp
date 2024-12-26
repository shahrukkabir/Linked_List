//Problem Link:  https://leetcode.com/problems/reverse-linked-list/
//Editorial :    https://leetcode.com/problems/reverse-linked-list/solutions/5612752/step-by-step-explained-with-images-easiest-to-understand-java-c-python-javascript-go-codes/


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = nullptr; 
        ListNode* next = nullptr;
        ListNode* curr = head;    
       
        while (curr != nullptr) {
           
            next = curr->next;

           
            curr->next = prev;

            
            prev = curr; 
            curr = next; 
        }

        return prev;
    }
};

