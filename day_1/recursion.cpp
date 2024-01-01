#include<iostream>

using namespace std;

void funct(int i, int n)
{
    if(i > n) return;

    cout << i << endl;
    funct(i+1, n);
}

int main()
{
    funct(1, 5);
}