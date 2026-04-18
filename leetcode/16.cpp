class Solution {
public:
    vector<string> result;

    void dfs(string num, int target, int pos,
             long long curr, long long prev, string path) {

        if (pos == num.size()) {
            if (curr == target)
                result.push_back(path);
            return;
        }

        for (int i = pos; i < num.size(); i++) {
            if (i != pos && num[pos] == '0') break;

            string part = num.substr(pos, i - pos + 1);
            long long val = stoll(part);

            if (pos == 0) {
                dfs(num, target, i + 1, val, val, part);
            } else {
                dfs(num, target, i + 1, curr + val, val, path + "+" + part);
                dfs(num, target, i + 1, curr - val, -val, path + "-" + part);
                dfs(num, target, i + 1,
                    curr - prev + prev * val,
                    prev * val,
                    path + "*" + part);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        dfs(num, target, 0, 0, 0, "");
        return result;
    }
};