class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=min(str1.length(),str2.length());
        for(int i=n;i>=1;i--){
            string s=str1.substr(0,i);
            string a="",b="";
            while(a.length()<str1.length()){
                a+=s;
            }
            while(b.length()<str2.length()){
                b+=s;
            }
            if(a==str1&&b==str2){
                return s;
            }
            
        }
        return "";

        
    
}};