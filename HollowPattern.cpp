#include<iostream>

using namespace std;
int main(){
	int n,j;
	cin>>n>>j;
	for (int i=1;i<=n;i++){
		for (int k=1;k<=j;k++){
			if (i==1||i==n||k==1||k==j)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;}
