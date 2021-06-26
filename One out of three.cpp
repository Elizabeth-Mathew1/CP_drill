//Interview Archive GOOGLE - MEDIUM
//Runtime: 4 ms, faster than 98.26% of C++ online submissions for Single Number II.
//Memory Usage: 9.5 MB, less than 49.48% of C++ online submissions for Single Number II.

/*class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int s=nums.size(),i,j,c=0;
        sort(nums.begin(),nums.end());
        for (i=0;i<=s-3;i=i+3)
        {
           if(nums[i]!=nums[i+1] || nums[i+1]!=nums[i+2])
           {
               return nums[i];
           }
            
        }
        return nums[i];
        
    }
};*/