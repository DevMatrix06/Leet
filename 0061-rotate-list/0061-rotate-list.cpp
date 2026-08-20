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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int len=1;
        ListNode *tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
        k=k%len;
        if(k==0){
            return head;
        }
        tail->next=head; // make it circular list
        int stepstoTail=len-k;
        ListNode *newtail=head;
        for(int i=1;i<stepstoTail;i++){
            newtail=newtail->next;
        }
           ListNode* newhead = newtail->next;
        newtail->next = NULL;
        return newhead;
    }
};