#include<iostream>
using namespace std;
int Reverse(int n){
	int r,res;
	while(n!=0){
		r=n%10;
  		res=res*10+r;
		 n/=10;
	}
	return res;}
int main(){
int n;
cin>>n;
cout<<Reverse(n);
return 0;
}
