class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> previousNumbers;

        for(int i = 0; i < nums.size(); i++) {

            if(previousNumbers.find(nums[i]) != previousNumbers.end()) {
                return true;
            }

            previousNumbers.insert(nums[i]);
        }

        return false;
    }
};