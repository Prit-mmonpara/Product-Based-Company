
class Solution {
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, 1, -1, 0};
public:
    int numEnclaves(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        queue<pair<int, int>> q;

        int sum = 0;
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                int count = 0;
                if(i != 0 && j != 0 && i != board.size() - 1 && j != board[0].size() - 1 && board[i][j] == 1)
                {
                    q.push({i, j});
                    board[i][j] = 0;
                    count++;
                    int flag = 0;
                    while(!q.empty())
                    {
                        int sz = q.size();
                        while(sz--)
                        {
                            auto it = q.front();
                            q.pop();

                            for(int i = 0; i < 4; i++)
                            {
                                int x = it.first + dx[i];
                                int y = it.second + dy[i];

                                if(x >= 0 && y >= 0 && x < board.size() && y < board[0].size() && board[x][y] == 1)
                                {
                                    if(x == 0 || y == 0 || x == board.size() - 1 || y == board[0].size() - 1)
                                        flag = 1;
                                    q.push({x, y});
                                    board[x][y] = 0;
                                    count++;
                                }
                            }
                        }
                    }
                    if(0 == flag)
                        sum += count;
                }
            }
        }

        return sum;
    }
};
