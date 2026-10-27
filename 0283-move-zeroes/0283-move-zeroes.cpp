class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> newArr;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]!=0){
                newArr.push_back(nums[i]);
            }
        }
        for(int i = newArr.size(); i < nums.size(); i++) {
            newArr.push_back(0);
        }
         for(int i = 0; i < newArr.size(); i++) {
            nums[i] = newArr[i];
        }
        return;
    }
};