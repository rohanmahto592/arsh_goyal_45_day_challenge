class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[n-1]=0;
        //cout<<dp[n-1]<<",";
        for(int i=n-2;i>=0;i--)
        {
            int res=nums[i];
             int mini=INT_MAX;
            for( int j=1;j<=res and (i+j)<n;j++)
            {
                if(dp[i+j]<mini and dp[i+j]!=-1 )
                {
                    mini=dp[i+j];
                }
            }
            
            //cout<<mini<<",";
            if(mini!=INT_MAX)
            {
            
            dp[i]=mini+1;
            //cout<<dp[i]<<",";
            }
            else
            {
                dp[i]=-1;
            }
            
        }
        if(dp[0]==-1)
            return false;
        return true;
        
    }
};