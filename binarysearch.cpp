// Binary Serach Algorithm
// Time complexity :- 
//  Best case(when data is at mid)= O(1)
//   worst case(When data is not present)=O(logn)


#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int data){
    
    int l=0;
    int r=n-1;
    int mid;
    mid=(l+r)/2;
   while(l<r){ 
    if(data==a[mid]){
        return mid;
    }
    else if(data>a[mid]){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
    
    
   }
   return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter data to be searched:";
    cin>>k;
    int res=binarysearch(arr,n,k);
    if(res==-1){
        cout<<"Data not found"<<endl;
    }
    else{
        cout<<"Data is at position :"<<res+1<<endl;
    }
    
    return 0;
}