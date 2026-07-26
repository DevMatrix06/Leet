class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        if (s.length()==0){                  //if no string return 0
            return 0;
        } 
        int i=s.length()-1;                  //go to last index and start 
        while(s[i]==' '&& i>=0){            //until there is a space at last and i>=0 keep progressing leftwards till we encounter a word--> " Hello  "
            i--;
        }
        while(i>=0&&s[i]!=' '){           //while i>=0 and the letter isnt a blank character or space add the length and keep going left words(i--)
            len++;                        //as u go left and encounter a blank character we can conclude that its the last word in the string
            i--;
        }
        return len;

    }
};
