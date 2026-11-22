class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> hightestaltitude;
        int sum = 0;
        int maxi = INT_MIN;
        hightestaltitude.push_back(0);
        for (int i = 0; i < gain.size(); i++) {
            sum = sum + gain[i];
            hightestaltitude.push_back(sum);
        }
        for (int i = 0; i < hightestaltitude.size(); i++) {
            if (hightestaltitude[i] > maxi) {
                maxi = hightestaltitude[i];
            }
        }
        // int maxi = *max_element(hightestaltitude.begin(), hightestaltitude.end());

        return maxi;
    }
};