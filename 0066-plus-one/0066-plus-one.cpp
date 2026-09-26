class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        while(n>=0&&digits[n]==9){
            digits[n]=0;        //if from last its 9 make it 0 and keep coming left 
            n--;
        }
        if(n>=0)
        digits[n]++;
        else//if its not 9 and smtg else just increase it by 1
        digits.insert(digits.begin(),1); //insert 1 at beginning when we it is 9,9,9 we need new space
        return digits;
    }
};