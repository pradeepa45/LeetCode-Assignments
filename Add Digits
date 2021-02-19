int addDigits(int num) {
        int sum=0,newv;
        while(num!=0){
            sum = sum + (num%10);
            num =num/10;
        }
        int ans = sum;
        if(sum>9){
            newv = sum;
            ans = addDigits(newv);
        }
        return ans;
    }
