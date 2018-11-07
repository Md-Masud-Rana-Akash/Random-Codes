#include<iostream>
using namespace std;
class time{
      int hour;
      int mint;
   public:
      void gettime(int h,int m);
      void puttime();
      void sum(time,time);
};
void time::gettime(int h,int m){
        hour=h;
        mint=m;
        }
void  time::puttime(){
        cout<<"hour is "<<hour<<" and minute is "<<mint<<"\n";
}
void time::sum(time T1,time T2){
        mint=T1.mint+T2.mint;
        hour=T1.hour+T2.hour;
}

int main(){
time t1,t2,t3;
t1.gettime(5,25);
t2.gettime(9,33);
t3.sum(t1,t2);
cout<<"T1=";t1.puttime();
cout<<"T2=";t2.puttime();
cout<<"T3=";t3.puttime();
return 0;
}
