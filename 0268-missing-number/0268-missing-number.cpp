class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum = 0;

        // Calculate sum from 0 to n
        for (int i = 0; i <= n; i++) {
            sum = sum + i;
        }

        // Subtract all array elements
        for (int i = 0; i < n; i++) {
            sum = sum - nums[i];
        }

        return sum;
    }
};