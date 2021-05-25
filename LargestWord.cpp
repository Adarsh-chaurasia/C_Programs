#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char array[n+1];
	cin.getline(array,n);
	cin.ignore();
	int i=0;
	int max=0,curr=0;
	int st=0,maxst=0;
	while(1){
		if(array[i]==' '|| array[i]=='\0'){
			if (curr>max){
			
			max=curr;
			maxst=st;}
		curr=0;
		st=i+1; }
		
		else
		curr++;
		
		
		if(array[i]=='\0')
		break;
	
	i++;
	}
	for(int k=0;k<max;k++)
	cout<<array[k+maxst];
}
