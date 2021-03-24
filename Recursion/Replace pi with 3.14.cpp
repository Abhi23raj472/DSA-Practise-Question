#include<iostream>
using namespace std;
void Replacepi(string s){
	if(s.length()==0){
		return;
	}
	if(s[0]=='p'&& s[1]=='i'){
		cout<<"3.14"<<" ";
		Replacepi(s.substr(2));
	}
	else{
		cout<<s[0];
		Replacepi(s.substr(1));
	}
}


int main(){
	Replacepi("pipppiiiipipi");
	return 0;
}
