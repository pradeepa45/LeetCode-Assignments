class Solution {
public:
    bool detectCapitalUse(string word) {
        bool caps = true;
        bool lows = true;
        if(word.length() == 1){
            return true;
        }
        for(int i=1;i<word.length();i++){
            caps = caps*isupper(word[i]);
            lows = lows*(!isupper(word[i]));
        }
        cout << caps << " " << lows << endl;
        if(caps && !lows){
            if(isupper(word[0])){
                return true;
            }
            else{
                return false;
            }
        }
        else if(lows && !caps){
            return true;
        }
        else{
            return false;
        }
    }
};
