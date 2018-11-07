#include<conio.h>
#include<stdio.h>

void bellmanford(int n,int v);
int cost[10][10];
int dist[20];
int main(){
int i,j,n,v;
  printf("enter the no of vertices");
  scanf("%d",&n);
  printf("Enter the costs of edges in matrix form:-");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&cost[i][j]);
            for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                printf("%d",cost[i][j]);

  printf("Enter the source vertex:");
  scanf("%d",&v);
  bellmanford(n,v);
  for(i=1;i<=n;i++)
  printf("%d-->",dist[i]);
  getch();
  return 0;
}

void bellmanford(int n,int v){
    int i,j,u,k;
    for(i=1;i<=n;i++)
    dist[i]=cost[v][i];
    for(k=2;k<=n-1;k++){
    for(u=1;u<=n;u++){
    if(u==v)
    continue;
    for(i=1;i<=n;i++){
            if(i==v)
        continue;
if(dist[u]>dist[i]+cost[i][u])
dist[u]=dist[i]+cost[i][u];
        }
    }
  }

}
