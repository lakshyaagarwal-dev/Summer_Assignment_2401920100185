class Solution {
public:
    string decodeString(string targetStr) {
        stack<int> countStack;
        stack<string> stringStack;
        string currentSegment = "";
        int currentMultiplier = 0;
        
        for (char symbol : targetStr) {
            if (isdigit(symbol)) {
                currentMultiplier = currentMultiplier * 10 + (symbol - '0');
            } else if (symbol == '[') {
                countStack.push(currentMultiplier);
                stringStack.push(currentSegment);
                currentSegment = "";
                currentMultiplier = 0;
            } else if (symbol == ']') {
                string evaluatedSequence = stringStack.top();
                stringStack.pop();
                int repeatTimes = countStack.top();
                countStack.pop();
                
                while (repeatTimes > 0) {
                    evaluatedSequence += currentSegment;
                    repeatTimes--;
                }
                currentSegment = evaluatedSequence;
            } else {
                currentSegment += symbol;
            }
        }
        
        return currentSegment;
    }
};