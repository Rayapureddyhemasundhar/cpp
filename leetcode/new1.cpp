#include <unordered_set>
#include <queue>
using namespace std;

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> dict(wordList.begin(), wordList.end());
    queue<pair<string, int>> q;

    q.push({beginWord, 1});

    while (!q.empty()) {
        auto [word, steps] = q.front();
        q.pop();

        if (word == endWord) return steps;

        for (int i = 0; i < word.size(); i++) {
            string temp = word;

            for (char c = 'a'; c <= 'z'; c++) {
                temp[i] = c;

                if (dict.count(temp)) {
                    q.push({temp, steps + 1});
                    dict.erase(temp);
                }
            }
        }
    }

    return 0;
}