class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        
       int i=0,j=n;
        int finalarea=-1;
        while(i<j)
        {
            int area=(j-i)*min(height[i],height[j]);
            finalarea=max(finalarea,area);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return finalarea;
        
        
    }
};