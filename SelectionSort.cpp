#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"how many number?";
    cin>>n;
    int a[n],i,tmp,min,j;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
             if(a[j]<a[min])
             min=j;
        }
        tmp=a[i];
        a[i]=a[min];
        a[min]=tmp;

    }
    for(i=0;i<n;i++){
    cout<<endl<<a[i]<<endl;
 }


      return 0;
}


