class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int z=nums.size()/2;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
            if(mp[x]>z)
            return x;
        }
        return -1;
        
        
    }
};