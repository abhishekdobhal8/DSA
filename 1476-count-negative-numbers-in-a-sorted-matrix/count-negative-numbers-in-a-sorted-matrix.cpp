class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for(int i=0; i<m; i++){
            int neg = -1;
            int low = 0;
            int high = n - 1;

            while(low <= high){
                int mid = low + (high - low) / 2;
                if(grid[i][mid] < 0){
                    neg = mid;
                    high = mid - 1;
                } else low = mid + 1;
            }

            if(neg != -1){
                count += (m - i) * (n - neg);
                n = neg;
            }
        }

        return count;
    }
};