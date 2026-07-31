class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=nums[0];
        int maxEnd=nums[0];
        int minsum=nums[0];
        int minEnd=nums[0];
         for (int i = 1; i < nums.size(); i++) {
            maxEnd=max(nums[i],nums[i]+maxEnd);
            maxsum=max(maxsum,maxEnd);

            minEnd=min(nums[i],nums[i]+minEnd);
            minsum=min(minsum,minEnd);
    
        }
        return max(maxsum,abs(minsum));
            
        
    }
};