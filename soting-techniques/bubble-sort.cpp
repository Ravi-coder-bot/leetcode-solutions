#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        bool swapped;
        for(int i = n - 1; i > 0; i--) {
            swapped = false;
            for(int j = 0; j < i; j++) {
                if(arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break; // Stop early if no swaps were made
        }
    }
};

// Example Usage
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    Solution obj;
    obj.bubbleSort(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
