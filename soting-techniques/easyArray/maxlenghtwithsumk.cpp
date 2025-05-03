#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> arr, int k){
    int n = arr.size();
    map<long long, int> prevSumMap;
    long long sum =0;
    int  maxLength =  0 ;
    for(int i =0  ; i< n ; i++){
        sum += arr[i];
        if(sum == k){
            maxLength = max(maxLength, i+1);
        }
        int rem = sum - k;
        if(prevSumMap.find(rem) != prevSumMap.end()){
            int length = i-prevSumMap[rem];
            maxLength = max(maxLength, length);
        }
        prevSumMap[sum] = i; 
    }
    return maxLength;
}

int main() {
    long long n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxLength = longestSubarrayWithSumK(arr, k);
    cout << maxLength << endl;
    return 0;
}