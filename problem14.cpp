// Longest Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        bool done = false; 

        for (int i = 0; i < strs[0].size(); i++) {
            for (string word : strs) {
                if (word[i] != strs[0][i]) {
                    done = true;
                    break;
                }
            }

            if (done) {
                break;
            }

            prefix += (strs[0][i]);
        }

        return prefix;
            
    }
};
