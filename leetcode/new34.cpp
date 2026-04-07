#include <sstream>
#include <string>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

string serialize(TreeNode* root) {
    if (!root) return "";

    queue<TreeNode*> q;
    q.push(root);
    string res;

    while (!q.empty()) {
        TreeNode* node = q.front(); q.pop();

        if (!node) {
            res += "N,";
            continue;
        }

        res += to_string(node->val) + ",";
        q.push(node->left);
        q.push(node->right);
    }

    return res;
}

TreeNode* deserialize(string data) {
    if (data.empty()) return NULL;

    stringstream ss(data);
    string item;
    getline(ss, item, ',');
    TreeNode* root = new TreeNode{stoi(item)};

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front(); q.pop();

        getline(ss, item, ',');
        if (item != "N") {
            node->left = new TreeNode{stoi(item)};
            q.push(node->left);
        }

        getline(ss, item, ',');
        if (item != "N") {
            node->right = new TreeNode{stoi(item)};
            q.push(node->right);
        }
    }

    return root;
}