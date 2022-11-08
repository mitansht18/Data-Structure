#include <iostream>
using namespace std;

int main()
{
    int n,num,i;
     cout<<"Number of elements in array: \n";
    cin>>n;
    int a[n];
     cout<<"Enter the elements of the array: \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter index at which number should be inserted: ";
    cin>>num;
    n=n+1;
    for(i=n-2;i>=num;i--)
    {
        a[i+1]=a[i];
    }
    cout<<"Enter number which should be inserted: ";
    cin>>a[num];
    cout<<"New array after insertion of the element is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
