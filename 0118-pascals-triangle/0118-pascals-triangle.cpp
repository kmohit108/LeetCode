class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return {};
        if(numRows == 1) return {{1}};

        vector<vector<int>> preRows = generate(numRows-1);
        vector<int> newRow(numRows, 1);

        for(int i=1; i<numRows-1; i++){
            newRow[i]=preRows.back()[i-1]+ preRows.back()[i];
        }
        preRows.push_back(newRow);
        return preRows;
     }
};