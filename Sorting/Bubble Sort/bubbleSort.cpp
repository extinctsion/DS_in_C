#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     //bubble sort


     int n; 
    cout<<"Enter size\n ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements \n ";
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }


    for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-1-i; j++)
    {
        
        {
            if(arr[j+1]<arr[j])
            {
                //swap
                int temp=arr[j+1];arr[j+1]=arr[j];arr[j]=temp;
            }
        }
    }

    cout<<"SORTED array elements \n ";
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }

return 0;
    
 }
