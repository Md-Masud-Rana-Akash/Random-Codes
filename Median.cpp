#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"how many number?";
    cin>>n;
    int a[n],i,p,tmp,midean,c,j;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
                if (a[j]>a[j+1]);
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;

        }
    }
  for(i=0;i<n;i++){
      cout<<endl<<a[i]<<endl;
 }


      midean=a[n/2];
      cout<<"median is: "<<a[n/2]<<endl;


return 0;
}
