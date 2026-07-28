class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;      //create empty hash_map for now 
        vector<int> result;            //resultant vector array to return 
        for(int x:nums1){          //traverse thru nums1 first 
            mp[x]=1;               //in hash_map assign everything=1 cuz its present in array 1
        }
        for(int x:nums2){
            if(mp[x]==1)           //taverse thru nums2 and if in hashmap that element is marked 1 already check it
            {
                result.push_back(x);   //as its marked 1 and present in both arrays,push into result
                mp[x]=0;               //avoids pushing repeated elements 
            }
        }
        return result;
    }
};