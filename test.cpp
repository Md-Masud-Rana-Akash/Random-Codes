#include<iostream>

using namespace std;
int main(){
    int cost[10][10],path[10][10],n,c,v,p,tot=0,x[2];

    cout<<"Enter the number of nodes";
    cin>>n;
    cout<<"Enter the cost matrix"<<endl;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>cost[i][j];

        }
     }
     cout<<"Enter the visiting node"<<endl;
     cin>>v;
    cout<<"Number of path"<<endl;
    cin>>p;

     cout<<"Enter the path matrix"<<"\n";
     for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            cin>>path[i][j];

        }
     }
    int d[10];
    for(int n=1;n<=p;n++){
        for(int m=1;m<=n;m++){
            if(cost[n][m]!=0)
                d[n]=m;
                c++;
        }
    }
    // int z=v[1],;
     for(int n=1;n<=p;n++){
            tot=0;
        for(int m=1;m<n;m++){
            tot=tot+cost[m][d[n]];
            d[n]++;
            x[n]=tot;
        }
     for(int ii=1;ii<=2;ii++){
        if(x[ii]<x[ii+1])
            cout<<x[ii];
        else
            cout<<x[ii+1];
     }

    }
  return 0;
}
