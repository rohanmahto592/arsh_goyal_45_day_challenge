class Solution {
public:
    bool isvalid(int i, int j,string &str)
    {
        while(i<j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                if(isvalid(i+1,j,s) or isvalid(i,j-1,s))
                {
                    return true;
                }
                else
                {
                    return false;
                }
                
            }
            i++;
            j--;
        }
        return true;
    }
};