#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int reverse=0;
    int digit;
    while(n>0){
    digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;
    }
    cout<<reverse<<endl;

}
