#include<iostream>
using namespace std;

     int main () {
       int n,i;
       cout<<"Number of element";
       cin>>n;
       int array[n];

       cout<<"Enter the element";
       for(i=0;i<n;i++){
        cin>>array[i];
       }

        int start = 0;
        int end = n - 1;

	        while (start <= end) {
            int mid = (start + end) / 2;
	            if ((mid == 0 || array[mid - 1] <= array[mid]) && (mid == n - 1 || array[mid] >= array[mid + 1])) {
	                cout<<"pik is "<<array[mid];
	              break;
	            } else if (mid > 0 && array[mid - 1] > array[mid]) {
	                end = mid - 1;
	            } else {
	                start = mid + 1;
	            }
	        }
	  return 0;

     }


