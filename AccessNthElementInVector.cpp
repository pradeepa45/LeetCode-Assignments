#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int findit(vector<int> arr, int n){
    int ans = -1;
    if(n>arr.size())
        return ans;
    else 
        ans = arr[n];
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
