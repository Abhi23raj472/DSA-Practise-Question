#include<iostream>
using namespace std;
int main(){
	int a[10][10],m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Transpose Matrix : "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[j][i]<<" ";;
		}
		cout<<endl;
	}
	return 0;
}
