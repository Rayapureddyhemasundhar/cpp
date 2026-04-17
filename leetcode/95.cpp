class TrieNode {
public:
    TrieNode* child[26] = {};
    string word = "";
};

class Solution {
public:
    TrieNode* root = new TrieNode();

    void insert(string w) {
        TrieNode* node = root;
        for (char c : w) {
            if (!node->child[c - 'a'])
                node->child[c - 'a'] = new TrieNode();
            node = node->child[c - 'a'];
        }
        node->word = w;
    }

    vector<string> result;

    void dfs(vector<vector<char>>& board, int i, int j, TrieNode* node) {
        char c = board[i][j];
        if (c == '#' || !node->child[c - 'a']) return;

        node = node->child[c - 'a'];

        if (!node->word.empty()) {
            result.push_back(node->word);
            node->word = "";
        }

        board[i][j] = '#';

        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        for (auto &d : dirs) {
            int x = i + d[0], y = j + d[1];
            if (x >= 0 && y >= 0 && x < board.size() && y < board[0].size())
                dfs(board, x, y, node);
        }

        board[i][j] = c;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        for (auto &w : words) insert(w);

        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                dfs(board, i, j, root);

        return result;
    }
};