class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> bank; 
       bank.reserve(nums.size());
       for(int i = 0 ; i < nums.size(); i++){
        int val = nums[i]; 
        int complement = target - val;
        if (bank.find(complement)!= bank.end()){
            return {bank[complement], i};
        }
        bank[val] = i;
    }
       return {};
    }
};
