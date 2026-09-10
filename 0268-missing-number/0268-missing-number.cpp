class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        int total=0;
        int sum=n*(n+1)/2;
        for(auto x:nums){
            total+=x;

        }
        return sum-total;
        
}};