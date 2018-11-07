/*sizeof(p) means  the number of
thing occupies in memory here it
 is 20 bcz int is 4byte total
 element in the array is 5 so,4+4+4+4+4=20
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#define SZ 10
using namespace std;

int table[SZ][SZ];
int P[] = {1, 2, 3, 4, 3};

int MCM(int i, int j)
{
    if(i==j) return 0;

    else
    {
        int min = INT_MAX;

        for(int k=i;k<j;k++) // bug was here: for(int k=i;k<=j;k++)
        {
            if(table[i][k]==0)
                table[i][k] = MCM(i,k);
            if(table[k+1][j]==0)
                table[k+1][j] = MCM(k+1,j);
            int sum = table[i][k] + table[k+1][j] + P[i-1]*P[j]*P[k];
            if(sum<min)
                min = sum;
        }
        return min;
    }
}

int main()
{
    int size = sizeof(P)/sizeof(P[0]);
    cout<<size<<endl;
    printf("Minimum number of mutiplications is %d",MCM(1,size-1));
    return 0;
}
