#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
 //ofstream akfile("new.txt");
 //akfile<<"Akash your file has created\n";
 //akfile.close();
  char a[30],b[30],k[30],l[30];
  int p,q,c,d,i,j,s=50,v,pr;
  float tot;
 ifstream ak;
 ak.open("new.txt");
 ak.getline(a,30);
 ak.getline(k,30);
 cout<<endl<<endl<<"                          :)WELCOME TO OUR BOOK SHOP(:"<<endl;
 cout<<endl<<endl<<"ENTER THE BooK NAME :";
 cin.getline(b,30);
  cout<<"ENTER The WRITER NAME:";
 cin.getline(l,30);
 p=strlen(b);
 q=strlen(l);
 c=0;
 for(i=0;i<p;i++){
         for(j=0;j<p;j++){

             if(a[i]==b[i]&&k[j]==l[j])
             c++;
    }
 }
            if(c!=0){
              cout<<"Available"<<endl;
              cout<<"BOOK name is "<<b<< " and writer name is "<<l<<endl;
              cout<<"Total "<<s<< " books are in the stall"<<endl;
              cout<<"Per book is 50 tk BDT "<<endl;
              cout<<"Press 1 to buy the book or press 2 to exit"<<endl;
              cin>>pr;
              if(pr==1){
                 cout<<"How much book do you want?"<<endl;
                 cin>>v;
                 tot=v*50;
                 cout<<"Total cost for the"<<v<< " books are "<<tot<<"tk BDT"<<endl;
                s=s-v;
                 cout<<"Now "<<s<<" books are available"<<endl;
                 cout<<"Thanks for buying from us,have a nice day sir"<<endl;
              }
              else
                cout<<"Thank you for your inquiry"<<endl;

            }
            else
                cout<<"SooRy not available"<<endl;
    ak.close();

 return 0;
}
