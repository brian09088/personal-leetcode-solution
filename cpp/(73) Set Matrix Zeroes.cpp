class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty()){return ;}
        int m = matrix.size();
        int n = matrix[0].size();
        bool row0 = false,col0 = false;
        for(int i=0;i<m;i++){
            if(matrix[i][0] == 0){
                col0 = true;
            }
        }
        for(int j=0;j<n;j++){
            if(matrix[0][j] == 0){
                row0 = true;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(col0){
            for(int i=0;i<m;i++){
                matrix[i][0] = 0;
            }
        }
        if(row0){
            for(int i=0;i<n;i++){
                matrix[0][i] = 0;
            }
        }
    }
};
