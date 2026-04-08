#include <climits>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

bool isValid(TreeNode* root, long minVal, long maxVal) {
    if (!root) return true;

    if (root->val <= minVal || root->val >= maxVal)
        return false;

    return isValid(root->left, minVal, root->val) &&
           isValid(root->right, root->val, maxVal);
}

bool isValidBST(TreeNode* root) {
    return isValid(root, LONG_MIN, LONG_MAX);
}