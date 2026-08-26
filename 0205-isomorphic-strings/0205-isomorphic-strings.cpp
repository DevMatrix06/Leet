class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>iso1;
        unordered_map<char,int>iso2;
        if(s.length()!=t.length()){
            return false;
        }
        
        for(int i=0;i<s.length();i++){
            if(iso1[s[i]]!=iso2[t[i]]){
                return false;
            }
            iso1[s[i]]=i+1;
            iso2[t[i]]=i+1;
        }
       return true; 
    }
};