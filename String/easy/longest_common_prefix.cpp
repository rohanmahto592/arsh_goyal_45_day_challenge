class Solution {
public:
    string check(string&str,string&str2)
    {
        int i=0,j=0;
        string finals="";
        while(i<str.length() and j<str2.length())
        {
            if(str[i]==str2[j])
            {
                finals+=str[i];
                i++;
                j++;
            }
            else
            {
                break;
            }
        }
        return finals;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string str=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            str=check(str,strs[i]);
        }
        return str;
        
    }
};