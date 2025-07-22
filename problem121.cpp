// Best Time to Buy Stock solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minP = INT_MAX;

        for (int i : prices) {
            if (i < minP) {
                minP = i;
            } 

            maxP = max(maxP, i-minP);
        }

        return maxP;
    }
};
