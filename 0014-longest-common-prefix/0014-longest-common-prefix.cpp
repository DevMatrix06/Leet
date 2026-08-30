class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest=strs[0];
        
        for(int i=0;i<strs.size()-1;i++){
            string first=strs[i];
            string second=strs[i+1];
            int j=0;
            while(j<first.length()&&j<second.length()&&first[j]==second[j]){
                j++;
  
            }
            if(j==0)
            return "";
        
            longest=longest.substr(0,j);

        }
        
        return longest;
    }
};