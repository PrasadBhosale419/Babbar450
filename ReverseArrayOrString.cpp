#include <iostream>
using namespace std;
void swap(int *arr, int b , int e)
{
    int temp = 0;
    temp= arr[b];
    arr[b]=arr[e];
    arr[e]=temp;
}

void reverse(int *arr, int b, int e)
{
    if(b>=e)
    {
        return;    
    }
    else
    {
        swap(arr,b,e);
        b=b+1;
        e=e-1;
        reverse(arr,b,e);
    }
}

int main()
{
     int arr[5] = {4, 3, 26, 7, 5};
    int b=0;
    int e=4;
    reverse(arr,b,e);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
