class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int cap = nums.size()/2;
        for(int x : nums){
            m[x]++; 
            if (m[x] > cap){
                return x; 
            }
        }
        return 0;
    }
};