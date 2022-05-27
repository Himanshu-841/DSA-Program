
#include <stdio.h>
#include <stdlib.h>
typedef struct Book
 {
  int ISBN;
  char Title[20];
  char Author[20];
}P;
void Sort(P *ptr,int N)
{
    printf("\nSorted Book Details based on ISBN number\n");
    int i,j;
    P temp;
    for(i=0;i<(N-1);i++)
    {
       for(j=0;j<(N-i-1);j++)
       {
           if((ptr+j)->ISBN>(ptr+j+1)->ISBN)
           {
               temp = *(ptr+j);
               *(ptr+j)=*(ptr+j+1);
               *(ptr+j+1)=temp;
           }
       }
    }
       for (int i = 0,a=1; i < N; ++i,a++)
 {
    printf("\nBook-%d",a);
    printf("\n%d\n%s\n%s\n",(ptr + i)->ISBN,(ptr + i)->Title,(ptr + i)->Author);
    }


}
void Search(P *ptr,int N)
{
    int s,flag=0;
    printf("\nEnter ISBN number of book to be searched\n");
    scanf("%d",&s);
    for (int i = 0; i < N; ++i)
    {
        if((ptr+i)->ISBN==s)
        { flag++;
            printf("\n%d\n%s\n%s\n",(ptr + i)->ISBN,(ptr + i)->Title,(ptr + i)->Author);
        }
    }
    if(flag==0)
    {
        printf("ISBN number not valid\n");
    }

    free(ptr);
}



void Display(P *ptr,int N)
{
    printf("\n%d\n",&ptr);
    printf("Book Details are\n");
   for (int i = 0,a=1; i < N; ++i,a++)
 {
    printf("\nBook-%d:",a);
    printf("\n%d\n%s\n%s\n",(ptr + i)->ISBN,(ptr + i)->Title,(ptr + i)->Author);
    //printf("\n%d\n%d\n%d\n",&(ptr + i)->ISBN,&(ptr + i)->Title,&(ptr + i)->Author);
 }
 printf("\n");
   // Sort(ptr,N);
    //Search(ptr,N);

}

void Read(P *ptr,int N)
  {
      int a=1;
    ptr = (P *)malloc(N * sizeof(P));
    printf("\nEnter the Book details\n1.ISBN number\n2.Title\n3.Author\n");
  for (int i = 0; i < N; ++i)
 {
    printf("Book-%d\n",a);
    scanf("%d\n%s\n%s",&(ptr + i)->ISBN,(ptr + i)->Title,(ptr + i)->Author);
    a++;
  }
  Display(ptr,N);


  }

int main()
 {

  int N;
  printf("Enter the number of Books: ");
  scanf("%d",&N);
  P B[N];
  Read(B,N);
 }

