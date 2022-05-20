/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* reverse(ListNode *head){
        ListNode* dummy=NULL;
        ListNode *next=NULL;
        while(head){
           next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
        }
       return dummy;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next and fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow){
            if (head->val!=slow->val) return false;
                head=head->next; 
                slow=slow->next;
        }
        return true;
    }
};