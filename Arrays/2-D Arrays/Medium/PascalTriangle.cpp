#include <bits/stdc++.h>
using namespace std;
int findNCR(int n, int r)
{
    // For example: if 5C3 given, then: 5*4*3/1*2*3 or we can also do this way...
    // 5/1 * 4/2 * 3/3

    int ans = 1;
    for (int i = 1; i <= r; i++)
    {
        ans = ans * (n - i + 1);
        ans = ans / i;
    }

    return ans;
}

int printVariant1(int n, int r)
{
    // Formula : r-1Cc-1
    // TC: O(r)
    int ans = findNCR(n, r);
    return ans;
}

void printVariant2(int row)
{
    // Here row is given
    int ans = 1;
    cout<<ans<<" ";
    for (int i = 1; i < row; i++)
    {
        // instead of invoking function everytime we can do something better than that.
        //  cout << findNCR(row - 1, i - 1) << " ";

        // For instance if row is 6, the series will be: 1 5/1 5*4/1*2 5*4*3/1*2*3 5*4*3*2/1*2*3*4 5*4*3*2*1/1*2*3*4*5
        ans = ans * (row - i);
        ans = ans / i;
        cout << ans << " ";
    }
}

void printVariant3(int row){
     for(int i=0; i<row; i++){
        
     }
}


int main()
{

    // Printing pascal may have 3 follow up questions:
    // 1. Print the nth row of pascal triangle
    // 2. Print the ith row and jth column of pascal triangle
    // 3. Print the pascal triangle

    // Variant 1
    int i, j;
    cout << "Enter row" << endl;
    cin >> i;

    cout << "Enter column" << endl;
    cin >> j;

    //    TC: O(r)
    cout << printVariant1(i - 1, j - 1) << endl;

    printVariant2(5);

    return 0;
}