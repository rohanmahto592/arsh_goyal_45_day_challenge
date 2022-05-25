class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.empty())
        {
            return {};
        }
        if(nums.size()==1||nums.size()==2)
        {
            return {};
        }
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>vs;
        
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int j=i+1;
            int n=nums.size()-1;
            while(j<n)
            {
                vector<int>v;
                int sum=0;
                sum=nums[i]+nums[j]+nums[n];
                
                if(sum==0)
                {
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(nums[n]);
                    j++;
                    n--;
                   if(s.count(v)==false) 
                   {
                       s.insert(v);
                       vs.push_back(v);
                       
                   }
                }
                else if(sum<0)
                {
                j++;
                }
                else
                {
                    n--;
                }
            }
        }
        return vs;
        
    }
};