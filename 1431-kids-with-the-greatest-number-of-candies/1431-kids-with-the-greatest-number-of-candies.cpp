class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maximum=0;
        for(int i = 0; i < candies.size(); i++){
    maximum = max(maximum, candies[i]);
}
        for(int i = 0;i<candies.size();i++){
            if(extraCandies+candies[i]>=maximum){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
            cout<<result[i];
        }
        return result;
    }
};