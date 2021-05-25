#include<iostream>
#include<string.h>
using namespace std;
void sortString(string &s1,string &s2){
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
int res=strcmp(s1,s2);

if(res==0)
cout<<"False"<<endl;
else
cout<<"True"<<endl;

}

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    sortString(s1,s2);
    return 0;

}
