#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter a:"<<endl;
cin>>a;
cout<<"Enter b:"<<endl;
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"Swap:"<<"a:"<<a<<" "<<"b:"<<b;
return 0;
}