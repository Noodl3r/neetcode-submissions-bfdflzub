class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;
        for(auto x : nums){
            if(numbers.count(x)){
                return true;
            }
            numbers.insert(x);
        }
        return false;
    }
};