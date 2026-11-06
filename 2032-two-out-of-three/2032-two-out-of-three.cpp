class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

        set<int> st;

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    st.insert(nums1[i]);
                }
            }
        }

        for(int i = 0; i < nums1.size(); i++) {
            for(int k = 0; k < nums3.size(); k++) {
                if(nums1[i] == nums3[k]) {
                    st.insert(nums1[i]);
                }
            }
        }

        for(int j = 0; j < nums2.size(); j++) {
            for(int k = 0; k < nums3.size(); k++) {
                if(nums2[j] == nums3[k]) {
                    st.insert(nums2[j]);
                }
            }
        }

        return vector<int>(st.begin(), st.end());
    }
};