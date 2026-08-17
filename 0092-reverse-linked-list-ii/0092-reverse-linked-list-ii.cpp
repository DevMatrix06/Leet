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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *temp=dummy;
        for(int i=1;i<left;i++){
            temp=temp->next;
        }
        ListNode *prev=NULL;
        ListNode *current=temp->next;
        for(int i=left;i<=right;i++){
            ListNode *next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        temp->next->next=current;
        temp->next=prev;
        return dummy->next;
        
    }
};