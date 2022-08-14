class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2, 0));
        
        for(int i = 0; i<n-2; i++){
            for(int j = 0; j<n-2; j++){
                /*We are now inside the answer matrix, lets start filling it*/
                for(int conv_i = 0;  conv_i<3; conv_i++){
                    for(int conv_j = 0; conv_j<3; conv_j++){
                        ans[i][j] = max(ans[i][j], grid[i+conv_i][j+conv_j]);
                    }
                }
            }
        }
        
        return ans;
    }
};
