class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int i=0;
        int j=1;
        while(j<nums.size())
        {
            if(nums[j]==nums[i])
            {
                j++;
            }
            else
            {
                i++;
                nums[i]=nums[j];
                k++;
               
                j++;
            }
        }
        return k;
        
    }
};