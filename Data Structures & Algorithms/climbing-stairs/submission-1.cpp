class Solution {
    private:
    int solveWithCache(int n, std::vector<int>& memo){
        if (n <= 0){
            return 0;
        };
        if (n == 1){
            return 1;
        }
        if (n== 2){
            return 2;
        }
        if (memo[n] != -1) 
        return memo[n];

        memo[n] = solveWithCache(n-1, memo) + solveWithCache(n-2,memo);
        return memo[n];
    }
public:
    int climbStairs(int n) {
        std::vector<int> memo(n+1, -1);

        return solveWithCache(n, memo);
    }
};
