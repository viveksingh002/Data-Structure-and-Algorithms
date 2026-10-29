class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<bool> seen(n + 1, false);
        vector<int> result;

        for(int i = 0; i < n; i++) {
            seen[nums[i]] = true;
        }

        for(int i = 1; i <= n; i++) {
            if(seen[i] == false) {
                result.push_back(i);
            }
        }

        return result;
    }
};