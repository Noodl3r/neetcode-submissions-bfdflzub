class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        vector<int> v(2 * length);
        for(int i = 0; i < length; i++){
            v[i] = nums[i];
            v[i +length] = nums[i];
        }
    return v;
    }
};