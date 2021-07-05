//Platform - LeetCode
// Google Mock Interview
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate Image.
// Memory Usage: 7 MB, less than 70.42% of C++ online submissions for Rotate Image.
// Concepts used : Transpose without second matrix, Horizontal Flip



/*class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int temp;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
               temp=matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
               temp=matrix[i][j];
               matrix[i][j]=matrix[i][n-1-j];
               matrix[i][n-j-1]=temp;
            }
        }
        
        
    }
};*/