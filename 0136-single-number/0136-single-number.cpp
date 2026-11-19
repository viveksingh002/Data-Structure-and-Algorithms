class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result;
        for(int i = 0 ; i<nums.size(); i++){
            bool found = false;
             for(int j = 0; j<nums.size() ; j++){
                if(i != j && nums[i]==nums[j]){
                    found = true;
                    break;
                }
             }
             if(found==false){
                result = nums[i];
             }
        }
        return result;
    }
};