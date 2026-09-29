#include<stdio.h>
main()
{
    int m1,m2,m3,total;
    printf("Enter the marks of all three subjects:\n");
    scanf("%d %d %d",&m1, &m2, &m3);
    total=m1+m2+m3;
    printf("The total=%d",total);
    if((total>=80)&&(total<=90))
    {
        printf("Excellent class\n");
    }
    else if((total>=70)&&(total<80))
    {
        printf("First class\n");
    }
    else if((total>=60)&&(total<70))
    {
        printf("Second class\n");
    }
    else if((total>=50)&&(total<60))
    {
        printf("Third class\n");
    }
    else
    {
        printf("Fail\n");
    }
}
