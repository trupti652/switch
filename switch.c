#include<stdio.h>
#include<stdlib.h>

int main()
{
    int marks=90;
    printf("Enter your name\n");
    scanf("%s,&name");
    printf("Enter your standard\n");
    scanf("%d,&standard");
    printf("Enter your marks\n");
    scanf("%d,marks");

        switch(marks)
    {
    case 90:
        printf("Excellent");
        break;
    case 70:
        printf("very good");
        break;
    case 60:
        printf("good");
        break;
    case 50:
        printf("poor");
        break;
    default:
        printf("no grades unavailable");

    }
}

