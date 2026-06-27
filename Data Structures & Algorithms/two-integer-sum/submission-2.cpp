class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        unordered_map<int, int> complements;

        for(int i = 0; i < nums.size(); i++){
            if(complements.contains(nums[i])){
                sol = {complements[nums[i]], i};
                return sol;
            }
            complements[target - nums[i] ] = i;
        }
    }
};
