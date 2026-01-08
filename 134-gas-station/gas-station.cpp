class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0;
        int gn = gas.size();
        for(int n : gas) sum += n;
        for(int n : cost) sum -= n;

        if(sum < 0) return -1;
        int start = 0;
        int vgas = 0;
        for(int i=0; i < gn; i++){
            vgas += gas[i];
            vgas -= cost[i];

            if(vgas < 0){
                start = i + 1;
                vgas = 0;
            }
        }

        return start;

    }
};