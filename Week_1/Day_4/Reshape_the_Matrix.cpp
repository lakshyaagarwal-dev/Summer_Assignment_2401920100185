class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rowsize=mat.size();
        int colsize=mat[0].size();
        if(r*c>rowsize*colsize || r*c<rowsize*colsize) return mat;
        vector<vector<int>> reshape(r,vector<int>(c));

        
        int row=0;
        int col=0;
        for(int i=0;i<rowsize;i++)
        {
            for(int j=0;j<colsize;j++)
            {
                if(col<c) 
                {
                    reshape[row][col]=mat[i][j];
                    col++;
                }
                else
                {
                    row++;
                    col=0;
                    reshape[row][col]=mat[i][j];
                    col++;
                }
              
            }
        }return reshape;
    }
};