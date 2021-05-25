#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int k)
{
	int f=0;
int l=n;

while(f<=l){
	int mid=(f+l)/2;
	if(arr[mid]==k)
	return mid;
	else if(arr[mid]>k){
		l=mid-1;
	}
	else
	f=mid+1;
	
	}
}

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

int result=binarySearch(arr,n,x);
cout<<result;
}

