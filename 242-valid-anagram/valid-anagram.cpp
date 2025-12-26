class Solution {
public:

    // followup question solution :
    // store character and frequency of characters in both s and t in two maps and then if those two maps have same content return true else false

    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int n = s.size();
        
        unordered_map<char, int> um;

        for(int i=0; i<n; i++){
            um[s[i]]++;
        }

        for(int i=0; i<n; i++){
            um[t[i]]--;
        }

        for(auto &p : um){
            if(p.second != 0) return false;
        }
        return true;
    }
};