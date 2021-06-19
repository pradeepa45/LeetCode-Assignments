class Solution {
public:
    bool lateCheck (string s){
        bool ans = true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                if(s[i+1]=='L' && s[i+2]=='L'){
                    ans = false;
                    break;
                }
            }
            else{
                ans = true;
            }
        }
        return ans;
    }
    int absCheck (string s){
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                cnt ++;
            }
        }
        return cnt;
    }
    bool checkRecord(string s) {
        bool l = lateCheck(s);
        int a = absCheck(s);
        cout << a << " " << l << endl;
        if(a<2 && l){
            return true;
        }
        else{
            return false;
        }
    }
};
