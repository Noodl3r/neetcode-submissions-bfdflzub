class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() -1;

        while (left <= right){
            int mid = left + (right-left) / 2;
            int val = nums[mid];
            if (val == target)
                return mid;
            if (val > target)
                right = mid - 1;
            
            else
                left = mid + 1; 
        }
    return -1;
    }
};
