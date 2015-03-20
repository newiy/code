class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > result;
        if(numRows == 0) return result;
        vector<int> row;
        row.push_back(1);
        result.push_back(row);
        if(numRows == 1) return result;
        for(int i = 2; i <= numRows; i++){
            row.clear();
            row.push_back(1);
            for(int j = 1; j < i - 1; j++){
                row.push_back(result[i-2][j-1] + result[i-2][j]);
            }
            row.push_back(1);
            result.push_back(row);
        }
        return result;
    }
};