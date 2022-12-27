//我們將矩陣倒轉
//ex:
//[1,2,3][4,5,6][7,8,9]轉成
//[7,8,9][4,5,6][1,2,3]
//之後把矩陣做轉置矩陣transfose of a matrix得出答案

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
    }
};
