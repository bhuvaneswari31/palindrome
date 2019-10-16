#include<stdio.h>
main()
{
    int no, digit = 0, temp;
    printf("Enter an Integer to check for Palindrome : ");
    scanf("%d",&no);
    temp = no;
    while( temp != 0 )
    {
        digit = digit * 10;
        digit = digit + temp%10;
        temp = temp/10;
    }
    if ( no == digit )
        printf("\n %d is a Palindrome Number :)\n", no);
    else
        printf("\n %d is Not a Palindrome Number :(", no);
}