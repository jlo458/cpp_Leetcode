// Reordered power of 2 
// Definitely faster ways of doing it, but this was my first solution 

class Solution {
public:
    
    
    bool reorderedPowerOf2(int n) {
        //int n = 4210;  // don't need

        // char po2Nums[4] = {'2','4','8','6'};

        string strN = to_string(n);
        bool ans = false;

        permute("", strN, ans);

        return ans;
    }

    bool po2_Checker(string strN) {
        if (strN[0] == '0') return false;

        long long val = stoll(strN);

        return (val > 0) && ((val & (val-1)) == 0);
            
        
    }

    void permute(string start, string rest, bool &ans) {
        if (rest == "") {
            bool po2_check = po2_Checker(start); 
            if (po2_check) ans = true; 
            return;
        } 
        else {
            for(int i=0; i<rest.length(); i++) {
                if (ans == true) return;
                string next = start + rest[i];
                string remaining = rest.substr(0, i) + rest.substr(i+1);
                permute(next, remaining, ans);
            }

        }
    } 
};
