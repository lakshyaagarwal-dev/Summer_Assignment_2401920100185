class Solution {
public:
    void buildSequences(vector<string>& collection, string currentChain, int openCount, int closeCount, int maxPairs) {
        if (currentChain.length() == maxPairs * 2) {
            collection.push_back(currentChain);
            return;
        }
        
        if (openCount < maxPairs) {
            buildSequences(collection, currentChain + "(", openCount + 1, closeCount, maxPairs);
        }
        
        if (closeCount < openCount) {
            buildSequences(collection, currentChain + ")", openCount, closeCount + 1, maxPairs);
        }
    }

    vector<string> generateParenthesis(int totalPairs) {
        vector<string> validCombinations;
        buildSequences(validCombinations, "", 0, 0, totalPairs);
        return validCombinations;
    }
};