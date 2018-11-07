#include<iostream>
#include <fstream>
#include <cstdlib>
#include<string>
using namespace std;

int count(string);
int c,h=0;
int main(){
string str;
ifstream infile;

infile.open ("data.txt");
        while(!infile.eof())
        {
	       getline(infile,str);
	        h++;
	        cout<< str << endl;

        }
            infile.close();

int a[h];
  ifstream inf;
     inf.open ("data.txt");
        while(!inf.eof())
        {
            for(int k=0;k<h;k++){
                inf>>a[k];
            }
        }
              inf.close();


int item,beg,end,n,mid;

	cout<<"\nEnter Item you want to Search= ";
    cin>>item;

beg=1;
end=h;


mid=(beg+end)/2;

while(beg<=end && a[mid]!=item)
{
if(a[mid]<item)
beg=mid+1;
else
end=mid-1;

mid=(beg+end)/2;
}

if(a[mid]==item)
{
cout<<"\nData is Found at Location : "<<mid<<endl;
}
else
{
cout<<"Data is Not Found"<<endl;
}

return 0;

}
