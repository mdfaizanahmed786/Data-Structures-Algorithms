#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int st, int end, int key) {
  while (st <= end) {
    int mid = (st + end) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      st = mid + 1;
    }
  }
  return -1;
}

// Exponential search meaning:
// 1. Find the range where the element is present
// 2. Do binary search in that range

// Just we are doubling the size of the array, and wherever we find element greater than the key, we do binary search in that range.
// Time complexity: O(log(2^m-1)) = O(log(n-i)
// First we are taking logn iterations, for example when we reach index 16, we have done 4 iterations, so we have done logn iterations.
// The length of subarray could be 2^4-2^3 which is 8, so we have to do log(8) iterations, so total time complexity is O(logn+log(2^m-1)) = O(logn)

int exponentialSearch(vector<int> arr, int k) {
  if (arr[0] == k) {
    return 0;
  }
  int size=sizeof(arr)/sizeof(int);

  int i = 1;
  while (i < arr.size() && arr[i] <= k) {
    i = i * 2;
  }
  int ans = binarySearch(arr, i / 2, min(i,  size-1), k);
  return ans;
}

int main() {
  // exponential search
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int key = 4;
  int ans = exponentialSearch(arr, key);
  cout << "Your answer is present at index: " << ans << endl;

  return 0;
}
