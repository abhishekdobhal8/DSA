class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> res;
        int i = 0;
        for(i=0; i<n; i++){
            if(digits[i] != 9) break;
        }

        if(i == n) {
            res.push_back(1);
            for(int j=0; j<n; j++){
                res.push_back(0);
            }
            return res;
        }

        for(int j=n-1; j>=0; j--){
            if(digits[j] == 9) digits[j] = 0;
            else {
                digits[j] = digits[j] + 1;
                return digits;
            }
        }
        return {};
    }
};