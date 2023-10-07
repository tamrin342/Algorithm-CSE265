#include <bits/stdc++.h>
using namespace std;
void swapp(int &a, int &b)
{
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
}
int main()
{
    int i,j, n,index,x,y ;
    cout << "Enter the size : " ;
    cin >> n ;
    int arr[n] ;
    cout << "Enter the values : ";
    for(i=0; i<n; i++)
        cin >> arr[i] ;
    cout << "Enter the index number : " ;

    cin>>index;
    if(index==0) sort(arr,arr+n);
    else
    {
        for(i=index; x!=index-1; i++)
        {
            x=i%n;

            for(j= x+1; j>-1; j++)
            {
                y=j%n;

                if(y==index) break;

                if(arr[x]>=arr[y])
                    swapp(arr[x],arr[y]);
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
