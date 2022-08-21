class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i=0;i<n;i++){
        set<int>temp;
        for(int j=0;j<n;j++){
            temp.insert(matrix[i][j]);
        }
        if(temp.size()!=n){
            return false;
        }
    }
        for(int i=0;i<n;i++){
        set<int>temp;
        for(int j=0;j<n;j++){
            temp.insert(matrix[j][i]);
        }
        if(temp.size()!=n){
            return false;
        }
    }
        return true;
    }
};