
#include <stdio.h>

int main()
{
    int n,n1,n2,num,pos;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE NUMBERS BETWEEN WHICH GIVEN NUMBER SHOULD BE INSERTED: ");
    scanf("%d %d ",&n1,&n2);
    printf("\nENTER THE NUMBER TO BE INSERTED: ");
    scanf("%d",&num);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==n1)
        {
            pos = i;
        }
        else continue;
    }
    for(int i=n;i>=pos+2;i--)
    {
        a[i]=a[i-1];
    }
    a[pos+1] = num;
     printf("THE ARRAY AFTER INSERTION IS: ");
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}