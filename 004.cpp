#include <iostream>
using namespace std;

int main()
{
    int count,n,num,i;
     cout<<"Number of elements in array: \n";
    cin>>n;
    int a[n];
     cout<<"Enter the elements of the array: \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter number to be searched: ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
        cout<<a[i]<<" is found at "<<i<<endl;
        count=1;
        }
    }
           if(count!=1)
        {
        cout<<"Value not found";
        }
}
