//MEDIUM
//Array Preprocessing
//Platform - Leetcode
//Runtime: 88 ms, faster than 46.84% of C++ online submissions for Container With Most Water.
//Memory Usage: 59.1 MB, less than 37.03% of C++ online submissions for Container With Most Water.
/*class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int i=0;
        int j=n-1;
        int area,max=0;
       while(i<j&&i<n)
       {
           
                area=min(height[i],height[j])*(j-i);
                if(max<area)
                    max=area;
           
           if(height[i]>height[j])
               j--;
           else
               i++;
            
        }
        return max;
    }
};*/