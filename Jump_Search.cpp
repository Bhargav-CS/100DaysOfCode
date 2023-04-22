#include<iostream>
#include<cmath>
using namespace std;

int JumpSearch(int arr[], int n, int key){
   int blocksize = sqrt(n);
   int prev = 0 ;
   int jumpcount = 0;

   while (arr[min(blocksize, n) -1]< key)
   {
    prev = blocksize ;
    blocksize += sqrt(n);
    jumpcount++;
    if (prev>=n)
    {
        return -1;
    }
    
   }
   
    while (arr[prev]<key)
    {
        prev++;
        jumpcount++;
        if (prev==min(blocksize, n))
        {
            return -1;
        }
        
    }
    
    if (arr[prev]==key)
    {
        jumpcount++;
        cout<<"jump count: "<<jumpcount<<endl;
        return prev;
    }
    
return -1;
}

int main(){

    int n;
    cin>>n;
 
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    cout<<JumpSearch(arr,n , key)<<endl;
    return 0;
}