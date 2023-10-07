#include<iostream>
using namespace std;

int swapp(int &a, int &b)
{
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
}
void bubblesort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int flag=0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
                { swapp(arr[i],arr[j]) ;
                flag=1; }
        }
        if(flag==0) break;
    }
}
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values :";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    bubblesort(arr,n);

        cout<<"\nArray after sorting :";
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
}

