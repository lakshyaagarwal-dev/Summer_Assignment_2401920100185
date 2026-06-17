class Solution {
public:
    bool isValid(string s) {
        
        if (s.length() % 2 != 0) return false;
        
        int top = -1;
        
        for (char ch : s) {
            
            if (ch == '(' || ch == '[' || ch == '{') {
                top++;
                s[top] = ch;
            } 
            
            else {
            
                if (top == -1 || !(ch - s[top] == 1 || ch - s[top] == 2)) {
                    return false;
                }
                top--; 
            }
        }
        
        
        return top == -1;
    }
};