class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,mid=mat.size()/2;
        int rowsize=mat.size();
        int colsize=mat[0].size();
        for(int i=0;i<rowsize;i++)
        {
            for(int j=0;j<colsize;j++)
            {
                if(i==j)
                {
                    sum=sum+mat[i][j];
                }
                if(j==colsize-i-1)
                {
                sum=sum+mat[i][j];
                }

            }
        }
        if(mat.size()%2==0)
        {
            return sum;
        }
        else
        {
        return sum-mat[mid][mid];
        }
    }
};