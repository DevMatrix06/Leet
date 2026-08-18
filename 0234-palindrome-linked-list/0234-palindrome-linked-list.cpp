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
    bool isPalindrome(ListNode* head) {
        unordered_map<int,int>mp;
        ListNode *temp=head;
        int i=0;
        
        while(temp!=NULL){
            mp[i]=temp->val;
            temp=temp->next;
            i++;  
        }
        int left=0;
        int right=i-1;
        while(left<right){
            if(mp[left]!=mp[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
 
    }
};