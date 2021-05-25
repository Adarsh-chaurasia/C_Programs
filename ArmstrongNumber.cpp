#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int result=0;
	int copy=n;
	int lastdigit=0;
	while(n!=0){
		lastdigit=n%10;
		result=result+pow(lastdigit,3);
	n/=10;
	}
	if (copy==result){
		cout<<"Armstrong Number"<<endl;
	}
	else
	cout<<"Not";
	return 0;
}
