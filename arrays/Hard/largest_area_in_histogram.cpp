class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st,st2;
        int left[heights.size()];
        int right[heights.size()];
        for(int i=0;i<heights.size();i++)
        {
            
                
                while(!st.empty() and heights[st.top()]>=heights[i])
                {
                    st.pop();
                }
                left[i]=st.empty()?-1:st.top();
                st.push(i);
            
        }
        
        
        for(int i=heights.size()-1;i>=0;i--)
        {
            
                
                while(!st2.empty() and heights[st2.top()]>=heights[i])
                {
                    st2.pop();
                }
                right[i]=st2.empty()?heights.size():st2.top();
                st2.push(i);
            
        }
        
        int maxi=0;
        for(int i=0;i<heights.size();i++)
        {
            maxi=max( maxi,heights[i]*(right[i]-left[i]-1));
        }
        return maxi;
        
        
        
    }
};