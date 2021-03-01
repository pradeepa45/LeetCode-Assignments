char findTheDifference(string s, string t) {
        char ans=0;
        int i;
        for(i=0;i<s.length();i++){
            ans = ans ^ s[i];
            cout << ans << " ";
        }
        cout << endl;
        for(i=0;i<t.length();i++){
            ans = ans ^ t[i];
            cout << ans << " ";
        }
        cout << endl;
        return ans;
    }
