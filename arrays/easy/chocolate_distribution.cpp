class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi;
        int mini=prices[0];
        int total_maxi=0;
        for(int i=1;i<prices.size();i++)
        {
           mini=min(mini,prices[i]);
            maxi=max(prices[i],mini);
            total_maxi=max(maxi-mini,total_maxi);
        }
        return total_maxi;
        
    }
};