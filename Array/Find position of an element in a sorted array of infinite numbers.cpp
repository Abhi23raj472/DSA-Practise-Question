#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int low=0,high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int SearchInfinity(int arr[],int n,int key){
    int low=0,high=1;
    while(arr[high]<key){
        low=high;
        high=2*high;
    }
    return BinarySearch(arr,n,key);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans=SearchInfinity(arr,n,key);
    cout<<ans<<endl;
}
