class Solution {
public:
    unordered_set<string> dict;
    unordered_map<string, vector<string>> memo;

    vector<string> dfs(string s) {
        if (memo.count(s)) return memo[s];

        vector<string> result;

        if (dict.count(s)) result.push_back(s);

        for (int i = 1; i < s.size(); i++) {
            string right = s.substr(i);
            if (!dict.count(right)) continue;

            string left = s.substr(0, i);
            vector<string> leftPart = dfs(left);

            for (string l : leftPart) {
                result.push_back(l + " " + right);
            }
        }

        return memo[s] = result;
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        dict = unordered_set<string>(wordDict.begin(), wordDict.end());
        return dfs(s);
    }
};