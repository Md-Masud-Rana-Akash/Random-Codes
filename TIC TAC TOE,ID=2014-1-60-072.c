#include<stdio.h>
#include <stdlib.h>
int main()
{
    int p,i,j, opponentcount,mycount,unassignedcount, cnt=0;
    char a[11]="123456789";
    for(;;)
    {
        if(cnt%2==1)
        {
            system("CLS");
        }
        printf("\n\t\t\t   |   |\n\t\t\t%2c |%2c |%2c \n\t\t\t---|---|---\n\t\t\t%2c |%2c |%2c \n\t\t\t---|---|---\n\t\t\t%2c |%2c |%2c \n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
        if(a[0]==a[1]&&a[1]==a[2]
           ||a[3]==a[4]&&a[4]==a[5]
           ||a[6]==a[7]&&a[7]==a[8]
           ||a[0]==a[3]&&a[3]==a[6]
           ||a[1]==a[4]&&a[4]==a[7]
           ||a[2]==a[5]&&a[5]==a[8]
           ||a[0]==a[4]&&a[4]==a[8]
           ||a[2]==a[4]&&a[4]==a[6])
        {
            printf("\n\n\n\t\t%c WINS !!!CONGRATULATIONS!!! :)\n",a[p-1]);
            break;
        }
        for(i=0;i<=8;i++)
        {
            if(a[i]>='1' && a[i]<='9')
            {
                break;
            }
        }
        if(i==9)
        {
            printf("\n\n\n\t\tMATCH DRAW :");
            break;
        }

        if(cnt%2==0)
        {
            printf("\t\tENTER THE POSITION YOU WANT TO PUT 'O'\n\n");
            scanf("%d",&p);

            if(p>9||p<1||a[p-1]=='O'||a[p-1]=='X')
                printf("\n\t\tWRONG INPUT\n\n");
            else
            {
                a[p-1]='O';
                cnt++;
            }
        }
        else
        {
            printf("COMPUTERS'S TURN (X)\n\n");
            p = -1;
            int checker[8][3]={
            {0,1,2},
            {3,4,5},
            {6,7,8},

            {0,3,6},
            {1,4,7},
            {2,5,8},

            {0,4,8},
            {2,4,6}
            };

            for(i=0;i<8;i++)
            {
                opponentcount = 0;
                mycount = 0;
                unassignedcount = 0;
                for(j=0;j<3;j++)
                {
                    if(a[checker[i][j]] == 'O')
                    {
                        opponentcount++;
                    }
                    else if(a[checker[i][j]] == 'X')
                    {
                        mycount++;
                    }
                    else if(a[checker[i][j]]>='1' && a[checker[i][j]]<='9')
                    {
                        unassignedcount++;
                    }
                }
                if(opponentcount == 2 && unassignedcount==1)
                {
                    for(j=0;j<3;j++)
                    {
                        if(a[checker[i][j]]>='1' && a[checker[i][j]]<='9')
                            p = checker[i][j];
                    }
                }
            }
            if(p!=-1)
            {

                for(i=0;i<8;i++)
                {
                    opponentcount = 0;
                    mycount = 0;
                    unassignedcount = 0;
                    for(j=0;j<3;j++)
                    {

                        if(a[checker[i][j]] == 'O')
                        {
                            opponentcount++;
                        }
                        else if(a[checker[i][j]] == 'X')
                        {
                            mycount++;
                        }
                        else if(a[checker[i][j]]>='1' && a[checker[i][j]]<='9')
                        {
                            unassignedcount++;
                        }
                    }

                    if(mycount == 2 && unassignedcount==1)
                    {
                        for(j=0;j<3;j++)
                        {
                            if(a[checker[i][j]]>='1' && a[checker[i][j]]<='9')
                                p = checker[i][j];
                        }
                    }
                }
            }


            if(a[4]>='1' && a[4]<='9')
            {
                p = 4;
            }
            if(p==-1)
            {
                if(a[i]>='1' && a[i]<='9')
                {
                    p = 4;
                }
                for(i=0;i<8;i++)
                {
                    if(a[i]>='1' && a[i]<='9')
                    {
                        p = i;
                        break;
                    }
                }
            }
            a[p]='X';
            cnt++;
        }
    }
    return 0;
}
