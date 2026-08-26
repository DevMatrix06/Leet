class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
        while(left<right&&!isalnum(s[left])){ //if its space or smtg just keep moving  right
            left++;

        }
        while(left<right&&!isalnum(s[right])){//if its space keep moving left before checking
             right--;
        }
        if(tolower(s[left])!=tolower(s[right]))//check in the outer while loop if characters r equal in lower case obviously
        return false;
    left++;
    right--;
        
    }
    return true;
}};