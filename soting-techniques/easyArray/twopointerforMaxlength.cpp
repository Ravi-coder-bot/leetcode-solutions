#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left = 0;
    int right = 0;
    int n = a.size();
    long long sum = a[0] ;
    int maxLength = 0;
    while(right<n){
        while(left<=right && sum>k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLength = max(maxLength,right-left+1);
        } 
        right++;
        if(right< n) sum+= a[right];
    }
    return maxLength;

    // Write your code here
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