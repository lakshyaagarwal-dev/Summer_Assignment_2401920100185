class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // Base Case: If the tree is empty, return nullptr
        if (root == nullptr) {
            return nullptr;
        }

        // Recursively invert the left and right subtrees
        TreeNode* leftSubtree = invertTree(root->left);
        TreeNode* rightSubtree = invertTree(root->right);

        // Swap the left and right pointers of the current node
        root->left = rightSubtree;
        root->right = leftSubtree;

        return root;
    }
};