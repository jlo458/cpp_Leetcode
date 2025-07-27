// Valid Parentheses 

class Solution {
public:
    bool isValid(string s) {
        array<char, 3> openBracks = {'(', '{', '['};
        array<char, 3> closeBracks = {')', '}', ']'};

        vector<char> allBracks; 

        for (char i : s) { 
            if (find(openBracks.begin(), openBracks.end(), i) != openBracks.end()) {
                allBracks.push_back(i);
            }

            else if (find(closeBracks.begin(), closeBracks.end(), i) != closeBracks.end())
            {
                if (allBracks.empty()) {
                    return false;
                }

                auto indexOpenIt = find(openBracks.begin(), openBracks.end(), allBracks.back());
                auto indexCloseIt = find(closeBracks.begin(), closeBracks.end(), i);

                if (distance(openBracks.begin(), indexOpenIt) == distance(closeBracks.begin(), indexCloseIt)) {
                    allBracks.pop_back();
                }

                else {
                    return false;
                }
            }
            

        }
        if (allBracks.empty()) {
            return true; 
        } 

        else {
            return false;
        }
        
    }
};

