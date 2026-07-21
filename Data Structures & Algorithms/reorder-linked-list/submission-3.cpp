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
//複習 看一點點昨天的
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;

        //快慢法左右分開
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* right=slow->next;
        slow->next=nullptr;

        //右側反轉
        ListNode* prev=nullptr;
        ListNode* curr=right;
        while(curr!=nullptr){
            ListNode* nextTemp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextTemp;
        }

        //左右交叉
        ListNode* left=head;
        right=prev;

        while(right!=nullptr){
            ListNode* r=right->next;
            ListNode* l=left->next;
            left->next=right;
            right->next=l;
            left=l;
            right=r;
        }
    }
};
