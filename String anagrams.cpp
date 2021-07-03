// Platform - Leetcode
// Google Mock Interview
// Runtime: 8 ms, faster than 86.47% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.4 MB, less than 6.54% of C++ online submissions for Valid Anagram.

/*class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int arr[26]={0};
        if(s.length()!=t.length())
        {
            return false;
        }
        
          for(int i=0;i<s.length();i++)
            {
                arr[s[i]-'a']=arr[s[i]-'a']+1;
                arr[t[i]-'a']--;
                //cout<<arr[i]<<"\t";
            }
        
        for(int i=0;i<26;i++)
        {
            cout<<arr[i]<<"\n";
            if(arr[i]!=0)
                return false;
            
        }
        return true;
    }
    
};*/