class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int strL = strs[0].size();
        int n = strs.size();
        vector<bool> inOrder(strL);
        int res = 0;

        for(int i=0; i<strL; i++){
            bool deleted = false;
            for(int j=1; j<n; j++){
                if(strs[j-1][i] > strs[j][i] && !inOrder[j-1]){
                    deleted = true;
                    res++;
                    break;
                }
            }
            if(!deleted){
                for(int k = 1; k < n; k++){
                    if(!inOrder[k-1]){
                        inOrder[k-1] = strs[k-1][i] < strs[k][i];
                    }
                }
            }
        }
        return res;
    }
};