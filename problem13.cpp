// Roman numerals problem - Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> alphabet = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, 
        {'M', 1000},};

        int final_Val = 0;
        int prev_Val = INT_MAX;

        for (char i : s) {
            if (alphabet[i] <= prev_Val) {
                // cout << alphabet[i] << "\n";
                prev_Val = alphabet[i]; 
                final_Val += prev_Val;
            } 

            else {
                final_Val += alphabet[i] - prev_Val*2;
            }
        }

        return final_Val;
    }
};
