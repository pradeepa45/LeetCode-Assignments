#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int findit(vector<int> arr, int n){
    vector<int>::iterator it;
    int ans = -1;
    it = find(arr.begin(),arr.end(),n);
    if(it == arr.end()){
        cout << "-1";
    }
    else ans = arr[it-arr.begin()];
    
    return ans;
}


int main(){
    vector<int> arr;
    int N; //number of elements in the vector
    int x;
    int n;
    cin >> N;
    while(N--){
        cin >> x;
        arr.push_back(x);
    }
    cin >> n;
    int ans = findit(arr, n);
    cout << ans;
    return 0;
}
