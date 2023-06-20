// You are given an infinite length sorted array and you need to find an element in it, without knowing the length of the array.

// You can apply exponential searh here
#include <bits/stdc++.h>
using namespace std;
int findElementInInfiniteSortedArrayBruteForceApproach(vector<int> arr, int key)
{
    // using brute force solution
    if (arr[0] == key)
        return 0;
    int i = 1;
    while (1)
    {
        if (arr[i] > key)
        {
            break;
        }
        if (arr[i] == key)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int binarySearch(vector<int> arr, int st, int end, int key)
{
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}

int findElementUsingExponentialSearch(vector<int> arr, int key)
{
    int i = 0, j = 1;

    while (arr[j] <= key)
    {
        i = j;
        j = j * 2;
    }
    // finding the size of array
    int size = sizeof(arr) / sizeof(int);

    return binarySearch(arr, i, min(j, size - 1), key);
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int key = 3;
    int ans = findElementInInfiniteSortedArrayBruteForceApproach(arr, key);
    cout << "Element at this index is: " << ans << endl;

    return 0;
}

// TC: O(logn)