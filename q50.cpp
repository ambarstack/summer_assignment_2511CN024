#include <iostream>
using namespace std;

int main()
{
    int arr[100],n,sum=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"Sum = "<<sum;
    cout<<"\nAverage = "<<(float)sum/n;
}