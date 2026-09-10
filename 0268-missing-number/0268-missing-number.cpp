class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        for(int i=0;i<n;i++){
            arr1.push_back(i);
        }
    
    int missing;
    int j=0;
    sort(nums.begin(),nums.end());
    while(j<n){
        if(nums[j]!=j)
        return j;
        j++;
    }
        return n;
    }
};