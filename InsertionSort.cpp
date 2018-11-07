#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"how many number?";
    cin>>n;
    int a[n],i,value,j;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
       value=a[i];
       j=i-1;
       while((value<a[j])&&(j>=0)){
        a[j+1]=a[j];
        j=j-1;
        }
       a[j+1]=value;

       }
for(i=0;i<n;i++){
    cout<<endl<<a[i]<<endl;
 }

return 0;
}
