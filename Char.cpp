#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char array[n+1];
	cin>>array;
	bool check=1;
	
	for(int i=0;i<n;i++){
		if(array[i]!=array[n-1-i]){
			check=0;
			break;
		}
	}
	if(check==1)
	cout<<"Word is Palindrome"<<endl;
	else
	cout<<"Word is not a Palindrome"<<endl;
	
	cout<<array;
}
