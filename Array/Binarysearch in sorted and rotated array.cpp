#include<iostream>
using namespace std;

int BinarySearch(int arr[],int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[low]<=arr[mid]){
        if(key>arr[low] && key<=arr[mid]){
            return BinarySearch(arr,low,mid-1,key);
        }
        return BinarySearch(arr,mid+1,high,key);
    }
    if (key >= arr[mid] && key <= arr[high]){
        return BinarySearch(arr, mid + 1, high, key);
    }
    return BinarySearch(arr, low, mid - 1, key);
}
int main(){
    int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=6;
    int ans=BinarySearch(arr,0,n-1,key);
    if(ans!=-1){
        cout<<"Element found at index "<<ans<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
