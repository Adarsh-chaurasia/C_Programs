#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for (int i =0;i<n;i++)
cin>>arr[i];
int x;
cout<<"Enter Searched Value";
cin>>x;
for(int j=0;j<n;j++){
	if(x==arr[j]){
	cout<<"element is found at "<<j+1<<endl;
	break;}
	else
	cout<<"Elemen is not found"<<endl;
}
	
}
