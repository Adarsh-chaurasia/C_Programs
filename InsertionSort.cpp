#include<iostream>

using namespace std;

int main(){
	int i , j ,key,n;
	cin>>n;
	int arr[n];
	for(int k=0;k<n;k++){
		cin>>arr[k];}
		
	for(j=1;j<n;j++){
		key=arr[j];
		
		i=j-1;
		while(i>=0 && arr[i]>key){
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=key;
	}
	for(int k =0;k<n;k++){
		cout<<arr[k];}
}
