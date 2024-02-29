#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("kabila.txt","w+");
    char name[20];
    int donation=0;
    for(int i=0; i<2; i++)
    {
        printf("Please, Enter Your Name:\n");
        scanf("%s",name);
        printf("Enter Amount:\n");
        scanf("%d",&donation);
        fprintf(fp,"%s %d\n",name,donation);
    }
    char b[20];
        int sum=0;
    while(1)
    {
        int code=fscanf(fp,"%s",b);
        if(code==EOF)
        {
            break;
        }
        printf("%s",b);
        code=fscanf(fp,"%s",b);
        if(code==EOF)
        {
            break;
        }
        printf("%s\n",b);
        sum+=atoi(b);
    }
    printf("Total Donation:%d\n",sum);
    return 0;
}
