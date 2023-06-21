#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<long long>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void reverseInGroups(vector<long long>& arr, int n, int k) {
        int i = 0;
        while (i < n) {
            if (i + k <= n) {
                reverseArray(arr, i, i + k - 1);
                i += k;
            } else {
                reverseArray(arr, i, n - 1);
                break;
            }
        }
    }
};


// Code explanation:
// https://www.geeksforgeeks.org/reverse-an-array-in-groups-of-given-size/
// 1. First we are checking wheter i+k is less than n or not. If it is less than n then we are reversing the array from i to i+k-1.
// 2. If i+k is greater than n then we are reversing the array from i to n-1.
