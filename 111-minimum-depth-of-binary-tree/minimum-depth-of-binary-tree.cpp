class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;

        // If left subtree is missing
        if(root->left == NULL)
            return minDepth(root->right) + 1;

        // If right subtree is missing
        if(root->right == NULL)
            return minDepth(root->left) + 1;

        // If both exist
        return min(minDepth(root->left),
                   minDepth(root->right)) + 1;
    }
};