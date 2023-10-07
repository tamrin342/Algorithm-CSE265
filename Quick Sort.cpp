#include<iostream>
using namespace std;
void quicksort(int number[25],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(number[i]<=number[pivot]&&i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j)
            {
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
}
int main()
{
    int i, n, number[25];
    cout<<"How many elements are you going to enter?: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
        cin>>number[i];
    quicksort(number,0,n-1);
    cout<<"Order of Sorted elements: ";
    for(i=0; i<n; i++)
        cout<<number[i]<<" ";
    return 0;
}
