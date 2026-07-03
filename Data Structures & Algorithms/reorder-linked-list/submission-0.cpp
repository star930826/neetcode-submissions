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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=nullptr &&fast->next->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* right=slow->next;
        slow->next=nullptr;

        ListNode* prev=nullptr;
        ListNode* curr=right;
        while(curr!=nullptr){
            ListNode* nextTemp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextTemp;
        }
        ListNode* left=head;
        right=prev;

        while(right!=nullptr){
            ListNode* tmp1=left->next;
            ListNode* tmp2=right->next;
            left->next=right;
            right->next=tmp1;
            left=tmp1;
            right=tmp2;
        }
        
    }
};
