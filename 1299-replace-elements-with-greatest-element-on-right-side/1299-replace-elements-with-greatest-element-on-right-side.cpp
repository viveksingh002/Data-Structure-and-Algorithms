class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result;

        for (int i = 0; i < arr.size(); i++) {
            int maxi = INT_MIN;
            for (int j = i + 1; j < arr.size(); j++) {
                maxi = max(maxi, arr[j]);
            }
            if (i == arr.size() - 1) {
                result.push_back(-1);
            } else {
                result.push_back(maxi);
            }
        }
        return result;
    }
};