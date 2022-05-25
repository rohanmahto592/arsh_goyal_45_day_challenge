class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxi=0;
        int n=cardPoints.size();
        int window=0;
        int sum=0;
        for(auto a:cardPoints)
        {
            sum+=a;
        }
        if(k==n)
        {
            return sum;
        }
        for(int i=0;i<n-k-1;i++)
        {
            window+=cardPoints[i];
        }
        for(int i=n-k-1;i<n;i++)
        {
            window+=cardPoints[i];
            maxi=max(maxi,sum-window);
            window-= cardPoints[i-(n-k-1)];
        }
        return maxi;
        
    }
};