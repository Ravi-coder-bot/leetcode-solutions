class Solution {
    public:
      // Function to sort the array using bubble sort algorithm.
      void bubbleSort(vector<int>& arr) {
          int n = arr.size();
          for(int i=n; i>0;i--){
              for(int j = 0 ; j< i-1;j++){
                  if(arr[j]>arr[j+1]){
                      int temp = arr[j];
                      arr[j] = arr[j+1];
                      arr[j+1] = temp;
                  }
                  
              }
              
          }
      }
  };