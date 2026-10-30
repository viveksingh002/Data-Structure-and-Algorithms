class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long large = LLONG_MIN;
        long long secondlarge = LLONG_MIN;
        long long thirdlarge = LLONG_MIN;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == large || nums[i] == secondlarge || nums[i] == thirdlarge)
                continue;

            if(nums[i] > large) {
                thirdlarge = secondlarge;
                secondlarge = large;
                large = nums[i];
            }
            else if(nums[i] > secondlarge) {
                thirdlarge = secondlarge;
                secondlarge = nums[i];
            }
            else if(nums[i] > thirdlarge) {
                thirdlarge = nums[i];
            }
        }

        if(thirdlarge == LLONG_MIN)
            return large;

        return thirdlarge;
    }
};