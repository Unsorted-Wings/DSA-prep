#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int array[], int n)
{
    int index = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] != array[index - 1])
        {
           array[index] = array[i];
           index++;
        }
    }

    return index;
}

int main()
{

    int array[] = {1, 1, 2, 3, 3, 3, 3};
    int n = 7;

    /*
    optimal
    
    TC = O(n)
    */

    

    cout << removeDuplicates(array, n);

    return 0;
}