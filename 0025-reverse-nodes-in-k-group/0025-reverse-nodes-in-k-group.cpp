class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        int count = 0;

        // Check whether k nodes exist
        while (count< k) {
            if (temp==NULL) {
                return head;
            }

            temp=temp->next;
            count++;
        }

        // Reverse the remaining groups first
        ListNode* prevnode=reverseKGroup(temp, k);

        // Reverse current group
        temp = head;
        count = 0;

        while (count<k) {
            ListNode* next = temp->next;

            temp->next = prevnode;

            prevnode = temp;
            temp = next;

            count++;
        }

        return prevnode;   
    }
};