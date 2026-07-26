class Solution {
public:
    int strStr(string haystack, string needle) {

        for (int i = 0; i <= haystack.length() - needle.length(); i++) {                //run the for loop till difference of the two lengths os strings

            if (haystack.substr(i, needle.length()) == needle)                          //if substring of the string exists return i index
                return i;
        }

        return -1;
    }
};
