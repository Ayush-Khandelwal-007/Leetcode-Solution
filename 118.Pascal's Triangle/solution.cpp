class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> ans;
      vector<int>row[31];
      row[0].push_back(1);
      row[1].push_back(1);
      row[1].push_back(1);
      for(int i=2;i<numRows;i++){
        row[i].push_back(1);
        for(int j=1;j<i;j++){
          row[i].push_back(row[i-1][j-1]+row[i-1][j]);
        }
        row[i].push_back(1);
      }
      for(int i=0;i<numRows;i++){
        ans.push_back(row[i]);
      }
      return ans;
    }
};