class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int h1=0;//rowstart
        int h2=matrix[0].size()-1;//columnend
        int l1=0;//columnstart
        int l2=matrix.size()-1;//rowend
        vector<int>finals;
        int direction=0;
        while(h1<=l2 and l1<=h2)
        {
            if(direction==0)
            {
            for(int i=l1;i<=h2;i++)
            {
               finals.push_back(matrix[h1][i]);
            }
            h1++;
            }
            if(direction==1)
            {
            for(int i=h1;i<=l2;i++)
            {
                finals.push_back(matrix[i][h2]);
            }
            h2--;
            }
            if(direction==2)
            {
            for(int i=h2;i>=l1;i--)
            {
                finals.push_back(matrix[l2][i]);
            }
            l2--;
            }
            if(direction==3)
            {
            for(int i=l2;i>=h1;i--)
            {
                finals.push_back(matrix[i][l1]);
            }
            l1++;
            }
            direction=(direction+1)%4;
        }
        return finals;
        
        
        
    }
};