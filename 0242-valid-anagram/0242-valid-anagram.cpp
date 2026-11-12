
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()); //first be sort the string
        sort(t.begin(), t.end());

        return s == t; //check the both string are equal or not 
    }
};
