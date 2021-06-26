// Archive - GOOGLE
// Platform used - LeetCode
// Runtime: 40 ms, faster than 55.43% of C++ online submissions for First Unique Character in a String.
//Memory Usage: 10.6 MB, less than 60.99% of C++ online submissions for First Unique Character in a String.


/* class Solution {
public:
    int firstUniqChar(string s) 
    {
        int i,j,c=0,k=-1;
        for(i=0;i<s.size();i++)
        {
            c=0;
           //cout<<"\n"<<s[i]<<"\t";
            for(j=0;j<s.size();j++)
            {
                if(j!=i)
                {
            
                //cout<<s[j];
                if(s[i]==s[j])
                {
                    c=1;
                    break;
                }
                }
                
            }
            if(c==0)
            {
                return i;
            }
        }
       
            return k;
       
    }
}; */