#include<iostream>
#include<cstdio>
#include<cstring>
#include<conio.h>
using namespace std;

 int main(){
 char k[2][20],b[2][20],bo[20],wr[20];
 int i,j,p,a,d,v,l,p2,p3,cnt=0,c;
 cout<<"b: ";
 for(j=0;j<2;j++){
    cin.getline(b[j],20);
 }
 cout<<"k: ";
 for(a=0;a<2;a++){
    cin.getline(k[a],20);
 }


 cout<<"book name"<<endl;
    cin.getline(bo,20);

 cout<<"writer name"<<endl;
  cin.getline(wr,20);

    p2=strlen(bo);
            p3=strlen(wr);
        for(v=0;v<2;v++){
            for(j=0;j<p2;j++){
                for(l=0;l<p3;l++){

                        if((strcmp(bo,b[v])==0)&&(strcmp(wr,k[v])==0)) {
                     //   printf("Match Found!");
                        cnt++;
                        break;
               }
              else
                 break;
                    }
                }
            }

            if(cnt!=0)
                cout<<"Yes this book is Available  copy in our Library"<<endl;
            else
                cout<<"sorry";

 return 0;}




