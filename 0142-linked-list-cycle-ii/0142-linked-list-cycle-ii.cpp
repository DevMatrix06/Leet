/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <unordered_set>
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp=head;
        unordered_set<ListNode*>visited;
        while(temp!=NULL){
            if(visited.count(temp))
            return temp;

            visited.insert(temp);
            temp=temp->next;
        }
        return NULL;
    }
};