//Uppercase
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string str=" abhishek";
	//convert into uppercase
	for(int i=0;i<str.length();i++){
		if(str[i]>='a'&& str[i]<='z')
		    str[i]-=32;
	}
	cout<<str<<endl;
	//convert to lowercase
	string s1="GEEKSFORGEEKS";
	for(int i=0;i<s1.length();i++){
		if(s1[i]>='A'&& s1[i]<='Z')
		    s1[i]+=32;
	}
	cout<<s1<<endl;
	//using inbuilt function
	string s="Abhishekkumarsingh";
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s<<endl; 
}
