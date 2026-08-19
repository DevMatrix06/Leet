class Solution {
public:

    ListNode* getKthNode(ListNode* temp, int k) {
        k -= 1;

        while(temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }

        return temp;
    }

    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;

        while(temp != NULL) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* prevlast = NULL;

        while(temp != NULL) {

            ListNode* kthNode = getKthNode(temp, k);

            if(kthNode == NULL) {
                if(prevlast) {
                    prevlast->next = temp;
                }
                break;
            }

            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;

            reverseLinkedList(temp);

            if(prevlast == NULL) {
                head = kthNode;
            }
            else {
                prevlast->next = kthNode;
            }

            prevlast = temp;
            temp = nextNode;
        }

        return head;
    }
};