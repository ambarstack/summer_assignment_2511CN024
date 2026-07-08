#include <iostream>
using namespace std;

int main()
{
    int arr[100],n;
    int even=0,odd=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }

    cout<<"Even = "<<even;
    cout<<"\nOdd = "<<odd;
}