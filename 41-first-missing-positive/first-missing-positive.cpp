class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        long long max = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > max) max = nums[i];
        }
        vector<bool> isPresent(max+1);
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                isPresent[nums[i]] = true;
            }
        }
        for(int i=1; i<=max; i++){
            if(!isPresent[i]) return i;
        }
        return max+1;
    }
};