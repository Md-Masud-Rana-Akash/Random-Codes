#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"how many number ? \n";
    cin>>n;
    int a[n],i,c=0;


    for(int p=0;p<n;p++)
        cin>>a[p];

    for(i=0;i<n;i++){
     if(i!=0 && i!=(n-1)){
        if(a[i]>=a[i-1]&&a[i]>=a[i+1]){
          cout<<a[i]<<"is a peak number\n";
            c++;
        }
      }
    }
    cout<<"total peak number is: "<<c;
  return 0;
}


