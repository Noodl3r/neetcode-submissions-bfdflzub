class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sol = 0, cur = 0;
        for(int val : nums){
            val ? cur++ : cur = 0;
            sol = max(sol, cur);
        }
        return sol;
    }
};