class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(ransomNote==magazine)
        return true;
        for(auto x:ransomNote){
            mp1[x]++;
        }
        for(auto y:magazine){
            mp2[y]++;
        }
        for(auto i:mp1){
            if(mp2[i.first]<i.second) //check if number of i'th character in mp2 is < mp1 
            return false;
        }
        return true;
        
        


        
    }
};