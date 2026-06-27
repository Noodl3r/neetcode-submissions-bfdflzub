class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int sol  = r; 

        while (l <= r){
            int test = (l + r )/2;
            long long totalTime = 0;
            for (int p : piles){
                totalTime += ceil(static_cast<double>(p) / test);
            }
            if (totalTime <= h){
                sol = test;
                r = test -1;
            }
            else {
                l = test + 1;
            }
        }
        return sol; 
    }
};
