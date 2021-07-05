// Platform - Leetcode
// Tags - Sliding Window
// Runtime: 20 ms, faster than 47.46% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 6.8 MB, less than 98.61% of C++ online submissions for Longest Substring Without Repeating Characters.


/* class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i,max=0,ct,n,j,check=0;
        n=s.length();
        if(n==0)
            return 0;
        
        else
        {
        cout<<n;
        for(int i=0;i<n;i++)
        {
            ct=0;
            check=0;
           int arr[95]={0};
           
            for(j=i;j<n;j++)
            {
               
               if(arr[s[j]-' ']==1)
               {
                   check=1;
                   if(ct>max)
                   max=ct;
                   break;
                }
               arr[s[j]-' ']=1;
               ct++;
              
            }
            if(check==0)
                if(ct>max)
                max=ct;
        }
        }
        return max;
        
    }
};*/