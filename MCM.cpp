
#include<iostream>
#include<cstdio>
using namespace  std;

int main(){
    int r,c,r1,c1,r2,c2;
cout<<"input r,c,r1,c1,r2,c2";
cin>>r;
cin>>c;
cin>>r1;
cin>>c1,r2,c2;
int A[r][c],B[r2][c2],C[r2][c2];
int rslt=r*c1*c;
int rslt2=r1*c2*c1;
if(rslt<rslt2)
    cout<<rslt;
else
    cout<<rslt2;


return 0;

}
