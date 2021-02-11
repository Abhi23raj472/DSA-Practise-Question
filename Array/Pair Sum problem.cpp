
/*  Using Brute Force approac
time complexity :O(n)2
*/



#include<iostream>
using namespace std;
bool pairsum(int arr[],int n,int k){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k){
				cout<<"at index : "<<i<<" and "<<j<<endl;
				return true;
			}
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

