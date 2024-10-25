#include <iostream>
using namespace std;

int linsearch(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int a[] = { 10, 45, 30, 5, 67 };
    int x = 45;
    int n = sizeof(a) / sizeof(a[0]);


    int res = linsearch(a, n, x);
    (res == -1)
        ? cout << "Element is not present in aay"
        : cout << "Element is present at index " << res;
    return 0;
}
