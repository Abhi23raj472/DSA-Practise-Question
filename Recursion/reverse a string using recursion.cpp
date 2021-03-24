#include<iostream>
using namespace std;
void Reverse(string s){
	if(s.length()==0){
		return;
	}
	string ros=s.substr(1);
	Reverse(ros);
	cout<<s[0];
}



int main(){
	Reverse("Binod");
	return 0;
}
