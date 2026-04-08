#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left, *right;
};

int diameter = 0;

int height(TreeNode* root) {
    if (!root) return 0;

    int left = height(root->left);
    int right = height(root->right);

    diameter = std::max(diameter, left + right);

    return 1 + std::max(left, right);
}

int diameterOfBinaryTree(TreeNode* root) {
    height(root);
    return diameter;
}