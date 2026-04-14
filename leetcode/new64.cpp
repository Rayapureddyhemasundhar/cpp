#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        vector<vector<string>> result;

        if (!dict.count(endWord)) return result;

        unordered_map<string, vector<string>> parents;
        unordered_set<string> currentLevel, nextLevel;
        currentLevel.insert(beginWord);

        bool found = false;

        while (!currentLevel.empty() && !found) {
            for (auto word : currentLevel)
                dict.erase(word);

            for (auto word : currentLevel) {
                string temp = word;

                for (int i = 0; i < temp.size(); i++) {
                    char original = temp[i];

                    for (char c = 'a'; c <= 'z'; c++) {
                        temp[i] = c;

                        if (dict.count(temp)) {
                            nextLevel.insert(temp);
                            parents[temp].push_back(word);

                            if (temp == endWord)
                                found = true;
                        }
                    }
                    temp[i] = original;
                }
            }

            currentLevel = nextLevel;
            nextLevel.clear();
        }

        if (!found) return result;

        vector<string> path = {endWord};
        backtrack(endWord, beginWord, parents, path, result);

        return result;
    }

    void backtrack(string word, string beginWord,
                   unordered_map<string, vector<string>>& parents,
                   vector<string>& path,
                   vector<vector<string>>& result) {

        if (word == beginWord) {
            vector<string> temp = path;
            reverse(temp.begin(), temp.end());
            result.push_back(temp);
            return;
        }

        for (string parent : parents[word]) {
            path.push_back(parent);
            backtrack(parent, beginWord, parents, path, result);
            path.pop_back();
        }
    }
};