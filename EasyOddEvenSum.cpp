

#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long long int a,b;
	cin>>a>>b;
	
	long long int n=ceil((a+b)/2);
	
	long long int res=pow(n,2);
	
	cout<<res;
	return 0;
}
