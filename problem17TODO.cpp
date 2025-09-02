// Letter combinations


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits == "") return vector<string> {};


        vector<string> groups_letters;
        
        vector<string> lets_in_nums = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",};
        for (auto let : digits) {
            //cout << let << "\n";

            int val = (let - '0') - 2;
            groups_letters.push_back(lets_in_nums[val]);
        }  

        vector<string> results;
        //cout << "boom"; 
        perms("", groups_letters, results);

        return results;


            
        
        
    }

private: 
    void perms(string prev_letters, vector<string> group_letters_left, vector<string> &results) {
        if (group_letters_left.empty()) {
            results.push_back(prev_letters);
            return;
        }

        for (auto let : group_letters_left[0]) {
            string next = prev_letters + let;
            if (group_letters_left.size() != 1) perms(next, vector<string>(group_letters_left.begin() + 1, group_letters_left.end()), results);

            else perms(next, {}, results);

        }

        return;
        
    }
};
