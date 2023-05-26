#include <bits/stdc++.h>
using namespace std;
void printPattern1(int n)
{
    // Rectangle Pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    // triangle pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern3(int n)
{
    // triangle pattern in numbers
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printPattern4(int n)
{
    // reverse triangle print
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern5(int n)
{
    // reverse for number 1-n pattern print
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printPattern6(int n)
{
    // half pyrmaid pattern print
    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern7(int n)
{
    // reverse pyarmid pattern print
    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * (n - i) + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern8(int n)
{
    // full rignt angle triangle

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int rows = (i <= n) ? i : 2 * n - i;

        for (int j = 1; j <= rows; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern9(int n)
{
    // 1 01 pattern

    for (int i = 1; i <= n; i++)

    {
        for (int j = 1; j <= i; j++)
        {
            if (((j - i) % 2) != 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        cout << endl;
    }
}
void printPattern10(int n)
{
    // hollow number pattern print

    for (int i = 1; i <= n; i++)

    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        //    printing spaces
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

void printPattern11(int n)
{
    // number print pattern countdown
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }

        cout << endl;
    }
}
void printPattern12(int n)
{
    // hollow number pattern print

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

void printPattern13(int n)
{
    // triangle number pattern print like: 1 121 12321 1234321

    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = 1;
        for (; k <= i; k++)
        {
            cout << k;
        }
        for (int l = k - 2; l >= 1; l--)
        {
            cout << l;
        }

        cout << endl;
    }
}

void printPattern14(int n)
{
    // triangle hollow pattern print
    for (int i = 1; i <= n; i++)
    {

        //    first printing spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (i == 1 || i == n)
            {
                cout << i;
            }
            else
            {
                if (k == 1 || k == 2 * i - 1)
                {
                    cout << i;
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
}

void printPattern15(int n)
{
    // triangle number pattern print like: 1 121 12321 1234321

    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern16(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int rows = (i <= n) ? n - i + 1 : i - n;
        int spaces = (i <= n) ? 2 * i - 2 : 2 * n - 2 * (i - n);

        for (int j = 1; j <= rows; j++)
        {
            cout << "*";
        }

        // priting spaces
        for (int k = 1; k <= spaces; k++)
            cout << " ";

        for (int j = 1; j <= rows; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern17(int n)
{
    //    alphabetical pattern

    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            char result = ch + j - 1;
            cout << result;
        }
        cout << endl;
    }
}
void printPattern18(int n)
{
    //    alphabetical pattern

    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        char ch = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            char result = ch + j - 1;
            cout << result;
        }
        cout << endl;
    }
}
void printPattern19(int n)
{
    //    alphabetical pattern

    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        char ch = 'A' + i - 1;
        ;

        for (int j = 1; j <= i; j++)
        {

            cout << ch;
        }
        cout << endl;
    }
}

void printPattern20(int n)
{
    //    alphabetical pattern

    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        char ch = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        int j = 1;
        for (; j <= i; j++)
        {
            char result = ch + j - 1;
            cout << result;
        }

        for (int l = j - 2; l >= 1; l--)
        {
            char result = ch + l - 1;
            cout << result;
        }

        cout << endl;
    }
}
void printPattern21(int n)
{
    //    alphabetical pattern

    for (int i = 1; i <= n; i++)
    {
        //    first printing spaces
        char ch = 'A';

        for (int j = n - i + 1; j <= n; j++)
        {
            char result = ch + j - 1;
            cout << result;
        }
        cout << endl;
    }
}
void printPattern22(int n)
{
    //   butterfly pattern

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        //    first half
        int cols = (i <= n) ? i : i - (2 * i - 2 * n);
        int spaces = (i <= n) ? 2 * n - 2 * i : 2 * i - 2 * n;

        for (int j = 1; j <= cols; j++)
        {
            cout << "*";
        }
        // printing spaces
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= cols; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void printPattern23(int n)
{
    //   alternate 1212 in the rectangle shape

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {

                cout << "2";
            }
        }
        cout << endl;
    }
}

void printPattern24(int n)
{
    //   alternate 1212 in the rectangle shape
    for (int i = 1; i <= n; i++)
    {

        // first spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // next pattern
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}


void printPattern25(int n){
    // best alphabetical pattern
      char c='A';
     for(int i=1;i<=2*n-1; i++){
    // spaces
    int cols=(i>n ? i-n : n-i);
    int spaces=(i>n ? 2*n-i+(2*n-i-1) : 2*i-1);
    for(int j=1; j<=cols;j++){
      cout<<" ";
    }
    for(int k=1; k<=spaces; k++){
      char res=c+k-1;
      cout<<res;
    }
    cout<<endl;
  }
}

void importantPattern(int n){
    //  https://youtu.be/tNm_NNSB3_w?t=4541
    // youtube like is aobe, if not understood, just taking minimum values from all the sides, and then subtracting the nubmer from it.

    for(int i=0; i<2*n-1; i++){

        for(int j=0; j<2*n-1; j++){
            int top=i, left=j, right=2*n-2-j, down=2*n-2-i;
            cout<<n-min(min(top, down), min(right, left));
        }
        cout<<endl;
    }
}

int main()
{
    // Rectangle Pattern
    int n = 5;
    printPattern1(n);
    cout << endl;
    // Triangle Pattern
    printPattern2(n);
    cout << endl;

    // Triangle Pattern in numbers
    printPattern3(n);
    cout << endl;

    // Reverse Triangle Pattern
    printPattern4(n);
    cout << endl;

    // reverse for number 1-n pattern print
    printPattern5(n);
    cout << endl;

    // pyramid pattern
    printPattern6(n);
    cout << endl;

    // half pyramid pattern print
    printPattern7(n);
    cout << endl;

    // full right angled triangle
    printPattern8(n);
    cout << endl;

    // 1 01 01 pattern
    printPattern9(n);
    cout << endl;

    // print hollow number pattern
    printPattern10(n);
    cout << endl;

    // number countdown print pattern
    printPattern11(n);
    cout << endl;

    // hollow number rectangle pattern
    printPattern12(n);
    cout << endl;

    // triangle number pattern print like: 1 121 12321 1234321
    printPattern13(n);
    cout << endl;

    // triangle hollow pattern print

    printPattern14(n);
    cout << endl;

    printPattern15(n);
    cout << endl;

    //   hollow diamond pattern
    printPattern16(n);
    cout << endl;

    // alphabetical pattern
    printPattern17(n);
    cout << endl;

    // reverse alphabetical pattern
    printPattern18(n);
    cout << endl;

    // continoues pattern alphabet
    printPattern19(n);
    cout << endl;

    // half pyramid alphatet
    printPattern20(n);
    cout << endl;

    printPattern21(n);
    cout << endl;

    // butteryfly pattern
    printPattern22(n);
    cout << endl;

    // 1212 pattern
    printPattern23(n);
    cout << endl;

    // another number pattern
    printPattern24(n);
    cout << endl;


    // alphabet diamond pattern
    printPattern25(n);
    cout<<endl;

    // important pattern
    importantPattern(n);
    cout<<endl;
    return 0;
}