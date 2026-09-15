class Solution {
public:
    bool isValid(string s) {
        char a[10000];
        int top = -1;

        for(char c :s) {

            if(c == '(' || c == '{' || c == '[') {
                a[++top] = c;
            }
            else {
                if(top == -1) return false;

                if(c == ')' && a[top] != '(') return false;
                if(c == '}' && a[top] != '{') return false;
                if(c == ']' && a[top] != '[') return false;

                top--;
            }
        }

        return top == -1;
    }
};