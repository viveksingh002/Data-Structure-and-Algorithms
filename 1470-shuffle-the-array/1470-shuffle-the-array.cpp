class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>half;
   vector<int>secondhalf;
   vector<int> result;

for (int i = 0; i < n; i++)
   {
      half.push_back(nums[i]);
   }
   for (int i = n; i < 2*n; i++)
   {
      secondhalf.push_back(nums[i]);
      
   }
   
   for (int i = 0; i < n; i++)
   {

      result.push_back(half[i]);
      result.push_back(secondhalf[i]);
   }
   for (int i = 0; i < 2*n; i++)
   {
      cout<<result[i]<<" ";
   }
return result;
    }
};