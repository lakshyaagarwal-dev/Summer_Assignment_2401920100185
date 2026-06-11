class Solution {
public:
    string reverseWords(string inputStr) {
        int totalLen = inputStr.length();
        int wordStart = 0;
        
        for (int currentIdx = 0; currentIdx <= totalLen; ++currentIdx) {
            if (currentIdx == totalLen || inputStr[currentIdx] == ' ') {
                int leftBound = wordStart;
                int rightBound = currentIdx - 1;
                
                while (leftBound < rightBound) {
                    swap(inputStr[leftBound], inputStr[rightBound]);
                    leftBound++;
                    rightBound--;
                }
                wordStart = currentIdx + 1;
            }
        }
        return inputStr;
    }
};