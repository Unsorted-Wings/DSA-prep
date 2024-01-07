#include <bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int>& arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;

            j--;
        }
    }
}

int main()
{
    vector<int> arr;
    int n;
    cout << "enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}