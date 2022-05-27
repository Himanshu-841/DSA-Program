#include<stdio.h>
typedef struct player
{
    char team_name[15];
    char player_name[15];
    int ODI_Rank;
}P;


void main()
{

    int i,j,n,t;
    printf("Enter the no of cricket players\n");
    scanf("%d",&n);
    P A[n];
    //Read(A,n);
    printf("Enter player info as team_name , Player name , ODI rank\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d",A[i].team_name,A[i].player_name,&A[i].ODI_Rank);
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(A[j].ODI_Rank>A[j+1].ODI_Rank)
            {
                t=A[j].ODI_Rank;
                A[j].ODI_Rank=A[j+1].ODI_Rank;
                A[j+1].ODI_Rank=t;
            }
        }
    }

    printf("\nCricketer info in terms of ODI_Rank scored from lowest to highest\n");
    printf("\nteam_name\t\tWICKETS\t\t\tODI_Rank\n");

    for(i=0;i<n;i++)
    {
        printf("%s\t\t\t%s\t\t\t%d\n",A[i].team_name,A[i].player_name,&A[i].ODI_Rank);
    }
}
