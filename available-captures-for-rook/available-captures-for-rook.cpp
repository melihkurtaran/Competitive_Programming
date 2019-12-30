class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x = 0, y = 0, output = 0;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (board[i][j] == 'R') {
                    x = i; y = j; break;
                }
            }
        }
        for(int r=x;r >= 0; --r)
        {
            if (board[r][y] == 'B')
                break;
            if (board[r][y] == 'p'){
                ++output;
                break;
            }
        }
        for(int r=x;r < 8; ++r)
        {
            if (board[r][y] == 'B')
                break;
            if (board[r][y] == 'p'){
                ++output;
                break;
            }
        }
        for(int c=y; c >= 0; --c)
        {
            if (board[x][c] == 'B')
                break;
            if (board[x][c] == 'p'){
                ++output;
                break;
            }
        }
        for(int c=y; c < 8; ++c)
        {
            if (board[x][c] == 'B')
                break;
            if (board[x][c] == 'p'){
                ++output;
                break;
            }
        }
        return output;
    }
};
