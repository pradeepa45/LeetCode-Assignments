class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int size = strs.size();
        string res = "";
        if(size==0)
            return res;
        else if(size==1)
            res = strs[0];
        else if(size > 1){
            sort(strs.begin(),strs.end());
            int i;
            for(i=0;i<strs[size-1].length();i++){
                cout << i << " " << size;
                if(strs[0] == strs[size-1]){
                    cout << " case 1 " ;
                    res = strs[0];
                }
                else if(strs[0][i]==strs[size-1][i]){
                    cout << " case 2 " ;
                    res = res + strs[0][i];
                    cout << res;
                }
                else if(strs[0][i]!=strs[size-1][i]){
                    cout << " breaking " ;
                    break;
                }
            }
        }
        return res;
    }
};
