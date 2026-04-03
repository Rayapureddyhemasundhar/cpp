#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        while (st.find(s[right]) != st.end()) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}