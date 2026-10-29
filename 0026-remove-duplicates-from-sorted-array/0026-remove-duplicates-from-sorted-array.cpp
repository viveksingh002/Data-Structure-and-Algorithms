class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>result;
        for(int i = 0; i<nums.size(); i++){
                if(i == nums.size() - 1 || nums[i]!=nums[i+1]){
                    result.push_back(nums[i]);
                }
        }
        nums=result;
        
        return result.size();
    }
};