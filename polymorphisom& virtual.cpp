#include<iostream>

using namespace std;

class one{
  protected:
    int a;
  public:
    virtual void get(int b){
      a=b;
      }
       void show(){
     cout<<"value of 1st class is "<<a<<endl;
      }
};

class two:public one{
    int c;
  public:
      void get(int b){
      c=b;
      }
      void show(){
     cout<<"value of 2nd class is "<<c<<endl;
      }
};

class three:public one{
    int p;
  public:
      void get(int b){
      p=b;
      }
      void show(){
    cout<<"value of 3rd class is "<<p<<endl;
      }
};

int main(){
  one a;
  two a1;
  three b1;
 // one *p1=&a1;
 // one *p2=&b1;
 one *p1;
   p1=&a;
   p1=&a1;
   p1=&b1;
  // p2=&b1;
  p1->get(5);
 // p2->get(10);
  a1.show();
  b1.show();
  a.show();
  return 0;
  }



/*
#include<iostream>

using namespace std;

class one{
  protected:
    */








