#include <bits/stdc++.h>

using namespace std;

int findLargest(int array[], int n)
{
    int largest = array[0];

    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    return largest;
}

int main()
{

    int array[] = {1, 6, 90, 4, 8, 2, 98};
    int n = 7;

    /*
    brute

    merge_sort(array);
    cout << array[n - 1];

    sorting will take O(n log n)

    */

    /*optimal*/

    int largest = findLargest(array, n);

    cout << largest;

    return 0;
}