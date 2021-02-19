int maxProfit(vector<int>& prices) {
        int i,n;
        int max=0,min=INT_MAX;
        n=prices.size();
       for(i=0;i<n;i++){
           if(prices[i] < min){
               min = prices[i];
           }
           else if(prices[i] - min > max){
               max = prices[i] - min;
           }
       }
        return max ;
    }
