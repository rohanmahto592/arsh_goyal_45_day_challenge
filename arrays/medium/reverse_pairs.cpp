class Solution {
public:
    int cnt;
    void merge(vector<int>&arr,int low,int mid, int high)
    {
        int i=low;
        int j=mid+1;
        while(i<=mid and j<=high)
        {
            if((long)arr[i]>(long)2*arr[j])
            {
                cnt+=(mid-i+1);
                j++;
            }
            else
            {
                i++;
            }
        }
        sort(arr.begin()+low,arr.begin()+high+1);
        return;
        
    }
    void mergesort(vector<int>&nums,int low, int high)
    {
        if(low==high)
        {
            return;
        }
        int mid=(low+high)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
        
    }
    int reversePairs(vector<int>& nums) {
        cnt=0;
        mergesort(nums,0,nums.size()-1);
        return cnt;
        
        
        
    }
};