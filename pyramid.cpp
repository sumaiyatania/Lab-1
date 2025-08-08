#include<iostream>
using namespace std;
int main(){
int n,p=1;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int m=0;m<p;m++){
        cout<<"*";
    }
    p=p+2;
    cout<<endl;
}
return 0;
}