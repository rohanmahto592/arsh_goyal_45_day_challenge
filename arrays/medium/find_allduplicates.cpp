class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int j=0;
        vector<int>v;
       set<int>s;
        while(j<nums.size())
        {
            if(nums[j]-1==j)
            {
                j++;
            }
            else
            {
                if(nums[j]==nums[nums[j]-1])
                {
                    v.push_back(nums[j]);
                    
                    j++;
                }
                else
                {
                    swap(nums[j],nums[nums[j]-1]);
                }
            }
        }
        for(auto z:v)
        {
            s.insert(z);
        }
        v.clear();
        
        for(auto p:s)
        {
            v.push_back(p);
        }
        return v;
        
        
    }
};