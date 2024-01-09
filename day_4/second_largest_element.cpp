#include <bits/stdc++.h>

using namespace std;

int findSlargest(int array[], int n)
{
    int largest = array[0];
    int slargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            slargest = largest;
            largest = array[i];
        }
        else if(array[i] < largest && array[i] > slargest)
        {
            slargest = array[i];
        }
    }

    return slargest;
}

int main()
{

    int array[] = {1, 6, 90, 4, 8, 2, 98};
    int n = 7;

    /*
    brute

    merge_sort(array);
    traversing it once to find second largest

    TC =  O(n log n) + O(n)

    */

    /*
    better

    traversing once to find largest
    traversing second time to find second largest
    
    TC = O(n) + O(n)
    */

    /*
    optimal

    TC = O(n)    
    */

    int slargest = findSlargest(array, n);

    cout << slargest;



    return 0;
}