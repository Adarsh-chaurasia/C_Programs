#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0)
		return 0;
		break;}
	return 1;
}

int main(){
	int m,n;
	cout<<"Enter Range "<<endl;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(isPrime(i)){
			cout<<i<<endl;}
	}
		return 0;} 	
		
		
		
		
		
		

