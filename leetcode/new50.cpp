#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

// Assuming ListNode and TreeNode are defined elsewhere, e.g., in LeetCode environment
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

namespace LeetCode4 {
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int n1 = nums1.size();
        int n2 = nums2.size();

        int low = 0;
        int high = n1;

        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (n1 + n2 + 1) / 2 - cut1;

            int left1;
            if (cut1 == 0)
                left1 = INT_MIN;
            else
                left1 = nums1[cut1 - 1];

            int left2;
            if (cut2 == 0)
                left2 = INT_MIN;
            else
                left2 = nums2[cut2 - 1];

            int right1;
            if (cut1 == n1)
                right1 = INT_MAX;
            else
                right1 = nums1[cut1];

            int right2;
            if (cut2 == n2)
                right2 = INT_MAX;
            else
                right2 = nums2[cut2];

            if (left1 <= right2 && left2 <= right1) {
                if ((n1 + n2) % 2 == 0) {
                    return (max(left1, left2) + min(right1, right2)) / 2.0;
                } else {
                    return max(left1, left2);
                }
            }
            else if (left1 > right2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }

        return 0.0;
    }
};
}

namespace LeetCode23 {
class Solution {
public:
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;

        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != nullptr) {
                minHeap.push(lists[i]);
            }
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while (!minHeap.empty()) {
            ListNode* smallestNode = minHeap.top();
            minHeap.pop();

            tail->next = smallestNode;
            tail = tail->next;

            if (smallestNode->next != nullptr) {
                minHeap.push(smallestNode->next);
            }
        }

        return dummy->next;
    }
};
}

namespace LeetCode297 {
class Codec {
public:

    void serializeHelper(TreeNode* root, string& result) {
        if (root == nullptr) {
            result += "null,";
            return;
        }

        result += to_string(root->val) + ",";

        serializeHelper(root->left, result);
        serializeHelper(root->right, result);
    }

    string serialize(TreeNode* root) {
        string result = "";
        serializeHelper(root, result);
        return result;
    }

    TreeNode* deserializeHelper(queue<string>& nodes) {
        string current = nodes.front();
        nodes.pop();

        if (current == "null") {
            return nullptr;
        }

        TreeNode* root = new TreeNode(stoi(current));

        root->left = deserializeHelper(nodes);
        root->right = deserializeHelper(nodes);

        return root;
    }

    TreeNode* deserialize(string data) {
        queue<string> nodes;
        string temp = "";

        for (char ch : data) {
            if (ch == ',') {
                nodes.push(temp);
                temp = "";
            } else {
                temp += ch;
            }
        }

        return deserializeHelper(nodes);
    }
};
}

namespace LeetCode312 {
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();

        vector<int> balloons;
        balloons.push_back(1);

        for (int num : nums) {
            balloons.push_back(num);
        }

        balloons.push_back(1);

        int size = balloons.size();

        vector<vector<int>> dp(size, vector<int>(size, 0));

        for (int length = 2; length < size; length++) {
            for (int left = 0; left + length < size; left++) {
                int right = left + length;

                for (int last = left + 1; last < right; last++) {
                    int coinsFromCurrent = balloons[left] * balloons[last] * balloons[right];
                    int coinsFromLeftPart = dp[left][last];
                    int coinsFromRightPart = dp[last][right];

                    int totalCoins = coinsFromCurrent + coinsFromLeftPart + coinsFromRightPart;

                    dp[left][right] = max(dp[left][right], totalCoins);
                }
            }
        }

        return dp[0][size - 1];
    }
};
}
