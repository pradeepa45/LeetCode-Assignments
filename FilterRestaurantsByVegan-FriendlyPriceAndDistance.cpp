class Solution {
public:
    static bool sortcol(const vector<int> v1,const vector<int> v2){
        if(v1[1]==v2[1]){
            return v2[0] < v1[0];
        }
        return v2[1] < v1[1];
    }
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        sort(restaurants.begin(),restaurants.end(),sortcol);
        vector<int> finalans;
        int n=restaurants.size();
        int i;
        for(i=0;i<n;i++){
            if(veganFriendly==1){
                if(restaurants[i][2]==veganFriendly && restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance){
                   finalans.push_back(restaurants[i][0]);             
            }
            }
            else {
                if(restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance){
                   finalans.push_back(restaurants[i][0]);             
            }
            }
            
        }
        return finalans;
    }
};
