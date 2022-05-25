class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int currentmax=0;
        int totalsum=0;
        int maxi=-1;
        for(int i=1;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(prices[i],mini);
            if(maxi-mini>currentmax)
            {
                currentmax=maxi-mini;
            }
            else
            {
                totalsum+=currentmax;
                currentmax=0;
                mini=prices[i];
                maxi=-1;
            }
        }
        return totalsum+currentmax;
        ;
        
    }
};