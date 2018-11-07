#include<iostream>
using namespace std;

int Pow(int n,int p){

    if(p==0)
        return 1;
    else
       return n*Pow(n,p-1);
}




int main(){
 int n,p,i;
 cout<<"Enter the number";
 cin>>n;
 cout<<"Enter the power";
 cin>>p;

 cout<<Pow(n,p);


return 0;
}
