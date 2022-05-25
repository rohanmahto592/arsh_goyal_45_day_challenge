class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int rows[n];
        int columns[m];
        memset(rows,-1,sizeof(rows));
        memset(columns,-1,sizeof(columns));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    rows[i]=0;
                    columns[j]=0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(rows[i]==0 or columns[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        
    }
};