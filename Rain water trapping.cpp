//GOOGLE ARCHIVES
//Platform - Leetcode
//Runtime: 4 ms, faster than 89.34% of C++ online submissions for Trapping Rain Water.
//Memory Usage: 14.2 MB, less than 78.43% of C++ online submissions for Trapping Rain Water.


/*lass Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        if(n==0)
            return 0;
        int left[n];
        int right[n];
        int diff,level,sum=0;
        for(int i=0;i<n;i++)
        {
            left[i]=0;
            right[i]=0;
        }
        left[0]=height[0];   
        for(int i=1;i<n;i++)
        {
            if(height[i]>left[i-1])
            {
                left[i]=height[i];
                //cout<<left[i]<<'\t';
            }
            else
                left[i]=left[i-1];
            
        }
        right[n-1]=height[n-1];
        //cout<<"\n";
        for(int i=n-2;i>=0;i--)
        {
            
            if(height[i]>right[i+1])
            {
                right[i]=height[i];
                //cout<<right[i]<<"\t";
            }
            else
                right[i]=right[i+1];
                
        }
        for(int i=0;i<n;i++)
        {
            diff=min(left[i],right[i]);
            level=diff-height[i];
            sum+=level;
        }
        return sum;
        
    }
};*/