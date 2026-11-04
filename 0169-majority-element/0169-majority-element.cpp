class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int value = 0;
        int increase = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (increase == 0) {
                value = nums[i];
            }

            if (value == nums[i]) {
                increase++;
            } else {
                increase--;
            }
        }
        return value;
    }
};