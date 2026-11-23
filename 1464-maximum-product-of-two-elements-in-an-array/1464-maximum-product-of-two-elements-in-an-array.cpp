class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>result;
        for(int i = 0 ; i<nums.size() ; i++){
            for( int j = i+1; j<nums.size(); j++){
                result.push_back((nums[i] - 1) * (nums[j] - 1));
            }
        }
        int maxi = *max_element(result.begin(), result.end());
        return maxi;
    }
};