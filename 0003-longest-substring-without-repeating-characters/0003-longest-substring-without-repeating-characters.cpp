class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int count=0;
        int answer=0;
        while(j<s.length()){
            mp[s[j]]++;          //start by increasing the hash value of that character
            if(mp[s[j]]==1){     //if its 1 and unique increase count and move right pointer for substring 
                count++;
            }
            while(mp[s[j]]>1){
                mp[s[i]]--; //remove that character as we're going front 
                i++;        //move front to check next substring
            }
            count=j-i+1; //number of characters between i and j;
            if(count>answer)
                answer=count;

        j++;
        
        }    
        return answer; 
        }
       
    };
