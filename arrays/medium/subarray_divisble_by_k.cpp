class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<0)
            {
                sum=(sum%k)+k;
            }
            if(mp.find(sum%k)!=mp.end())
            {
                count+=mp[sum%k];
                mp[sum%k]=mp[sum%k]+1;
                
            }
            else
            {
                mp[sum%k]=1;
            }
        }
        return count;
        
    }
};