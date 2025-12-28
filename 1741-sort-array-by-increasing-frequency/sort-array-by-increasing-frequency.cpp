class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> um;

        for(int n : nums){
            um[n]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(um[a] < um[b]) return true;
            else if(um[b] < um[a]) return false;
            return a > b;
        });

        return nums;
    }
};