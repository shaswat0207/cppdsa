#include <bits/stdc++.h>
using namespace std;
int maxmaxprof(int price[], int n)
{
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (price[i] > price[i - 1])
            profit += (price[i] - price[i - 1]);
    }
        return profit;
}
int main()
{
    // int arr[] = {1 ,5 ,3 ,8 ,12}, n = 5;
    int arr[5],n;
    cout<<"Enter the of elements in the array"<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int p = maxmaxprof(arr, n);
    cout << p;

    return 0;
}