class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsum=nums[0];
        int maxEnd=nums[0];
        int minsum=nums[0];
        int minEnd=nums[0];
        int n=nums.size();
        int total=nums[0];
        for(int i=1;i<n;i=i+1){
            total+=nums[i];
            maxEnd=max(nums[i],nums[i]+maxEnd);
            maxsum=max(maxsum,maxEnd);

            minEnd=min(nums[i],nums[i]+minEnd);
            minsum=min(minsum,minEnd);
        }
        if(maxsum<0){ //if entire array is -ve then only the first negative element is taken smallest
            return maxsum;
        }
        return max(maxsum,total-minsum);
        
    }
};