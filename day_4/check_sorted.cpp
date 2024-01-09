#include <bits/stdc++.h>

using namespace std;

bool isSorted(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (array[i] < array[i - 1])
        {
           return false;
        }
    }

    return true;
}

int main()
{

    int array[] = {1, 6, 90, 4, 8, 2, 98};
    int n = 7;

    /*
    optimal
    
    TC = O(n)
    */

    

    cout << isSorted(array, n);

    return 0;
}