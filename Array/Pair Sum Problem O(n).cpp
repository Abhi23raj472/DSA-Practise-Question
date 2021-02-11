#include<iostream>
using namespace std;
bool pairsum(int arr[],int n,int k){
	int low=0;
	int high=n-1;
	while(low<high){
		if(arr[low]+arr[high]==k){
			cout<<" at index "<<low<<" and "<<high<<endl;
			return true;
		}
		else if(arr[low]+arr[high]>k){
			high--;
		}
		else{
			low++;
		}
	}
	return false;
}

int main(){
	int n;
	cout<<" Enter number of array :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cout<<"Enter Key :";
	cin>>k;
	cout<<pairsum(arr,n,k);
}
