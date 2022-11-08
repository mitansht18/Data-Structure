#include <iostream>
using namespace std;

int main()
{
    int t,n,num,i;
     cout<<"Number of elements in array: \n";
    cin>>n;
    int a[n];
     cout<<"Enter the elements of the array: \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter number to be deleted: ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
        t=i;
        }
    }
    for(i=t;i<n;i++)
    {
    a[i]=a[i+1];
    }
    n=n-1;
      cout<<"New array after deletion of the element is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
