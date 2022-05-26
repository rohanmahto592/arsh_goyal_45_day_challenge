class Solution {
public:
    bool check(int i, int j, int n, int m)
    {
        return (i>=0 and j>=0 and i<n and j<m);
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int lives=0;
                if(check(i-1,j,n,m) and abs(board[i-1][j])==1)
                {
                    lives++;
                }
                if(check(i-1,j+1,n,m) and abs(board[i-1][j+1])==1)
                {
                    lives++;
                }
                if(check(i,j+1,n,m) and abs(board[i][j+1])==1)
                {
                    lives++;
                }
                if(check(i+1,j+1,n,m) and abs(board[i+1][j+1])==1)
                {
                    lives++;
                }
                if(check(i+1,j,n,m) and abs(board[i+1][j])==1)
                {
                    lives++;
                }
                if(check(i+1,j-1,n,m) and abs(board[i+1][j-1])==1)
                {
                    lives++;
                }
                if(check(i,j-1,n,m) and abs(board[i][j-1])==1)
                {
                    lives++;
                }
                if(check(i-1,j-1,n,m) and abs(board[i-1][j-1])==1)
                {
                    lives++;
                }
                if(board[i][j]==0 and lives==3)
                {
                    board[i][j]=2;
                }
                if(board[i][j]==1 and (lives<2 or lives>3))
                {
                    board[i][j]=-1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                board[i][j]=board[i][j]>0?1:0;
            }
        }
        
    }
};