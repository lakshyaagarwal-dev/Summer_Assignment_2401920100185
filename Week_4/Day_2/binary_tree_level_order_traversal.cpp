/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> result;
        if (root == nullptr) {
            return result;
        }

        
        std::vector<TreeNode*> current_level;
        current_level.push_back(root);

        while (!current_level.empty()) {
            std::vector<int> current_values;
            std::vector<TreeNode*> next_level;

            
            for (TreeNode* node : current_level) {
                current_values.push_back(node->val);

            
                if (node->left != nullptr) {
                    next_level.push_back(node->left);
                }
                if (node->right != nullptr) {
                    next_level.push_back(node->right);
                }
            }

            
            result.push_back(current_values);
            
            
            current_level = std::move(next_level);
        }

        return result;
    }
};