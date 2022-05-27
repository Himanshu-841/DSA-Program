#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    char USN[20];
    int Roll_No;
}s[10];

void Read(struct student s[10])
{
    int i=0;
    printf("Enter the inputs\n");
    for(;i<10;i++)
    {
        scanf("%s",&s[i].name);
        scanf("%s",&s[i].USN);
        scanf("%d",&s[i].Roll_No);
    }
}

void Display(struct student s[10])
{
    int i=0;
    printf("Output\n");
    for(;i<10;i++)
    {
        printf("%s\n",s[i].name);
        printf("%s\n",s[i].USN);
        printf("%d\n",s[i].Roll_No);
    }
}
int main()
{

   Read(s);
   Display(s);
}
