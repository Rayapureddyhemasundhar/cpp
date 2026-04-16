class Solution {
public:
    vector<int> count;

    void mergeSort(vector<pair<int,int>>& nums, int left, int right) {
        if (right - left <= 1) return;

        int mid = (left + right) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid, right);

        vector<pair<int,int>> temp;
        int i = left, j = mid, rightCount = 0;

        while (i < mid && j < right) {
            if (nums[i].first > nums[j].first) {
                rightCount++;
                temp.push_back(nums[j++]);
            } else {
                count[nums[i].second] += rightCount;
                temp.push_back(nums[i++]);
            }
        }

        while (i < mid) {
            count[nums[i].second] += rightCount;
            temp.push_back(nums[i++]);
        }

        while (j < right) {
            temp.push_back(nums[j++]);
        }

        for (int k = left; k < right; k++) {
            nums[k] = temp[k - left];
        }
    }

    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        count = vector<int>(n, 0);

        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }

        mergeSort(v, 0, n);
        return count;
    }
};