// Power of Two - this solution can be used for power of 3/4 also

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1) return false;
        
        long long val = n;
        long long check = 1;
        while (val > check) {
            check = check * 2;
            //cout << check << "\n";
        }

        if (check == val) {
            return true;
        } 
        else {
            return false;
        }
    }
};
