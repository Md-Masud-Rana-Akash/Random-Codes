#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"how many number?";
    cin>>n;
    int a[n],i,p,tmp,min=-1,c,j;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if (a[j+1]<a[j]);
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
        }

    }
 for(i=0;i<n;i++){
     cout<<endl<<a[i]<<endl;
 }

return 0;
}
