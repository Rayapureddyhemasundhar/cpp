#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        heights.push_back(0);
        int maxArea = 0;

        for (int i = 0; i < heights.size(); i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int h = heights[st.top()]; st.pop();
                int w = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, h * w);
            }
            st.push(i);
        }

        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int n = matrix[0].size();
        vector<int> heights(n, 0);
        int maxArea = 0;

        for (auto& row : matrix) {
            for (int i = 0; i < n; i++) {
                heights[i] = (row[i] == '1') ? heights[i] + 1 : 0;
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }

        return maxArea;
    }
};