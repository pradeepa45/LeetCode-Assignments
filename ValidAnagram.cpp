class Solution {
public:
    string sorts(string s){
        sort(s.begin(),s.end());
        return s;
    }
    bool isAnagram(string s, string t) {
        if(sorts(s)==sorts(t))
            return true;
        else return false;
    }
};
