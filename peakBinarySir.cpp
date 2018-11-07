#include<iostream>
using namespace std;

     int main () {
       int n,i,st=0,md;
       cout<<"Number of element: ";
       cin>>n;
       int en=n-1,array[n];

       cout<<"Enter the element: ";
       for(i=0;i<n;i++){
        cin>>array[i];
       }

        for(i=st;i<en;i++){
           md=(st+en)/2;

     if( array[md]<array[md+1]){
        st=md+1;
     }

   else if (array[md]<array[md-1] && md==0 ){
        en=md-1;
    }

    else {
        cout<<"pik is "<<array[md];
         break;
   }
}
   return 0;

}
