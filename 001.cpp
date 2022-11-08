#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Number of elements in array: \n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Traversing array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
