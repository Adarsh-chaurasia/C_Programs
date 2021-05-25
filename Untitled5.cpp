#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Number"<<endl;
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0)
		cout<<"Not a Prime number"<<endl;
		
	}
	cout<<"Prime Number"<<endl;
	return 0;
}
