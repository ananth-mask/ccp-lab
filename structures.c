#include<stdio.h>
void main()
{
struct student {
    char name[10];
    int rno;
    float marks;
} s1,s2;


        printf("Enter information:\n");
            printf("Enter name: ");
            scanf("%s",s1.name);
            printf("enter rno");
            scanf("%d",&s1.rno);
            printf("enter marks");
            scanf("%f",&s1.marks);
                    printf("Enter information:\n");
            printf("Enter name: ");
            scanf("%s",s2.name);
            printf("enter rno");
            scanf("%d",&s2.rno);
            printf("enter marks");
            scanf("%f",&s2.marks);
if(s1.marks>s2.marks)
printf("s1 scored higher");
else printf("s2 scored higher");
}
            


