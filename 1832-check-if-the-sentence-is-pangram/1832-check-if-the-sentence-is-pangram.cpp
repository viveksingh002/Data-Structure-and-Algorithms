class Solution {
public:
    bool checkIfPangram(string sentence) {
        string Character = "abcdefghijklmnopqrstuvwxyz";
        for(int i = 0; i<Character.length(); i++){
             bool found = false;
            for(int j = 0 ; j < sentence.length(); j++){
                if(sentence[j] == Character[i]){
                found= true;
                // break;
            }
            }
             if(found == false) {
                return false;
            }
        }
        return true;
    }
};