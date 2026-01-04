class Solution {
public:

    int sumDiv(int n){
        int totalDiv = 0;
        int sum = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i == n/i){
                    totalDiv++;
                    sum += i;
                } else {
                    totalDiv += 2;
                    sum += i;
                    sum += n / i;
                }
            }
        }
        if(totalDiv == 4) return sum;
        return 0;
    }

    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int num : nums){
            sum += sumDiv(num);
        }
        
        return sum;
    }
};