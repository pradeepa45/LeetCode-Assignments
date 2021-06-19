class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n%2 == 1 && n!=1){
            return false;
        }
        else if(n==0){
            return false;
        }
        else if(n==1){
            return true;
        }
        else {
            if(floor(log2(n))==ceil(log2(n))){
                cout << floor(log2(n)) << " " << n  << " "<< ceil(log2(n));
                return true;
            }
            else
            {return false;}
        }
    }
};
