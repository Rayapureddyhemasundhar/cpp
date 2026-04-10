#include <vector>
#include <string>

using namespace std;

class TrieNode {
public:
    TrieNode* children[26];
    string word;

    TrieNode() {
        for (int i = 0; i < 26; i++) children[i] = nullptr;
        word = "";
    }
};

class Solution {
public:
    TrieNode* buildTrie(vector<string>& words) {
        TrieNode* root = new TrieNode();

        for (string word : words) {
            TrieNode* node = root;
            for (char c : word) {
                int index = c - 'a';
                if (!node->children[index]) {
                    node->children[index] = new TrieNode();
                }
                node = node->children[index];
            }
            node->word = word;
        }

        return root;
    }

    void dfs(vector<vector<char>>& board, int i, int j, TrieNode* node, vector<string>& result) {
        char c = board[i][j];

        if (c == '#' || node->children[c - 'a'] == nullptr)
            return;

        node = node->children[c - 'a'];

        if (node->word != "") {
            result.push_back(node->word);
            node->word = "";
        }

        board[i][j] = '#';

        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        for (auto& d : dirs) {
            int x = i + d[0], y = j + d[1];
            if (x >= 0 && y >= 0 && x < board.size() && y < board[0].size()) {
                dfs(board, x, y, node, result);
            }
        }

        board[i][j] = c;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> result;
        TrieNode* root = buildTrie(words);

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                dfs(board, i, j, root, result);
            }
        }

        return result;
    }
};