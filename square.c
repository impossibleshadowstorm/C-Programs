#include<stdio.h>

int main()
{
    int n;
    
    //take input of a number
    printf("\n ENTER N::");
    scanf("%d",&n);
    
    //loop for rows
    for(int i=1;i<=n;i++)
    {
        //loop for columns
        for(int j=1;j<=n;j++)
        printf("$");
        printf("\n");
    }
    return 0;
}
