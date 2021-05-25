#include<iostream>
using namespace std;
int main(){
	int n;
	int mx=-199999999;
	cin>>n;
	int arr[n],out[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int j=0;j<n;j++){
		mx=max(mx,arr[j]);
		out[j]=mx;
	}
	
	for(int i=0;i<n;i++)
	cout<<out[i]<<endl;
}
