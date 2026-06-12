class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n < 2) return s;

        int maxStart = 0;
        int maxLength = 1;

        for (int i = 0; i < n; ) {
            
            if (n - i <= maxLength / 2) break;

            int left = i;
            int right = i;

            
            while (right < n - 1 && s[right] == s[right + 1]) {
                right++;
            }

            
            i = right + 1;

            
            while (left > 0 && right < n - 1 && s[left - 1] == s[right + 1]) {
                left--;
                right++;
            }

            
            int currentLength = right - left + 1;
            if (currentLength > maxLength) {
                maxStart = left;
                maxLength = currentLength;
            }
        }

        return s.substr(maxStart, maxLength);
    }
};