#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<char>> &board, string word, int idx, int &flag)
    {
        if(idx == word.size())
        {
            flag = 1;
            return ;
        }

        if(min(i, j) < 0 || i >= n || j >= m || idx > word.size() || 
        board[i][j] != word[idx])
            return ;

        board[i][j] = '0';
        dfs(i + 1, j, n, m, board, word, idx + 1, flag);
        dfs(i - 1, j, n, m, board, word, idx + 1, flag);
        dfs(i, j + 1, n, m, board, word, idx + 1, flag);
        dfs(i, j - 1, n, m, board, word, idx + 1, flag);

        board[i][j] = word[idx];
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j] == word[0])
                {
                    int idx = 0;
                    int flag = 0;
                    dfs(i, j, n, m, board, word, idx, flag);
                    if(flag)
                        return true;
                }
            }
        }

        return false;
    }
};

