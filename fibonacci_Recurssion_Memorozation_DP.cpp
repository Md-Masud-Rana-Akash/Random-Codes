#include<iostream>
using namespace std;
int i,F[50];

int Fib(int n){
 if(n<=1){
    return n;
 }
 if(F[n]!=-1){
    return F[n];

 }
 F[n]=Fib(n-1)+Fib(n-2);
 return F[n];

}

int main(){
 int n;

 cout<<"Enter the Number: ";
 cin>>n;
 for(i=0;i<50;i++){
    F[i]=-1;
 }
  cout<< Fib(n);


}
