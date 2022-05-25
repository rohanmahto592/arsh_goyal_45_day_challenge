class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]==i+1)
            {
                i++;
            }
            else
            {
                if(nums[i]==nums[nums[i]-1])
                {
                    return nums[i];
                }
                else
                {
                    swap(nums[i],nums[nums[i]-1]);
                }
            }
        }
        return -1;
        
    }
};