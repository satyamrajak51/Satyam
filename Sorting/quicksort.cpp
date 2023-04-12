#include<iostream>
using namespace std;

int partition(int arr[],int l,int r)
{

            int i=l-1;
            
            int pi=arr[r];

       
          for(int j=0;j<r;j++)
          {
            if(arr[j]<pi)
            {
                i++;
                swap(arr[i],arr[j]);

            }
          
          }    

          swap(arr[i+1],arr[r]);   

        return i+1;
}


void quicksort(int arr[],int l,int r)
{

         if(l>=r){
            return;
         }
        
            int pi=partition(arr,l,r);
            quicksort(arr,l,pi-1);
            quicksort(arr,pi+1,r);
        
}


int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    

    quicksort(arr,0,n-1);

    cout<<"After Quick Sort : "<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}