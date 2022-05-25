class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<3)
        {
           
            return {};
        }
        int i=0;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        while(i<nums.size()-3)
        {
           int j=i+1;
            while(j<nums.size()-2)
            {
                int k=j+1;
                int l=nums.size()-1;
                while(k<l)
                {
                    if(nums[i]+nums[j]==target-(nums[k]+nums[l]))
                    {
                        vector< int>vs;
                        vs.push_back(nums[i]);
                        vs.push_back(nums[j]);
                        vs.push_back(nums[k]);
                        vs.push_back(nums[l]);
                        if(st.find(vs)==st.end())
                        {
                            st.insert(vs);
                        }
                        k++;
                        l--;
                    }
                    else if(nums[i]+nums[j]>target-(nums[k]+nums[l]))
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
                j++;
            }
            i++;
        }
        vector<vector< int>>vs;
        for(auto it=st.begin();it!=st.end();it++)
        {
            vs.push_back(*it);
        }
        return vs;
        
    }
};