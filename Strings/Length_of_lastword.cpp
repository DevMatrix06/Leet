class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        if (s.length()==0){
            return 0;
        }
        int i=s.length()-1;
        while(s[i]==' '&& i>=0){
            i--;
        }
        while(i>=0&&s[i]!=' '){
            len++;
            i--;
        }
        return len;

    }
};