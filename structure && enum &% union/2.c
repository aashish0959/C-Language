#include<stdio.h>
#include<string.h>

struct student{
    int emp_id;
    char emp_name[100];
    int emp_age;
    char emp_role[100];
    char emp_city[100];
    int emp_experience;
    char emp_company_name[100];
    
};

int main(){
    struct student s[1000];
    int a;
    printf("Enter the value :-");
    scanf("%d",&a);


    for (int i = 0; i < a; i++)
    {
        printf("Enter the id :-");
        scanf("%d",&s[i].emp_id);

        printf("Enter the name :-");
        scanf("%s",&s[i].emp_name);

        printf("Enter the age :-");
        scanf("%d",&s[i].emp_age);

        printf("Enter the role :-");
        scanf("%s",&s[i].emp_role);


        printf("Enter the city :-");
        scanf("%s",&s[i].emp_city);

        printf("Enter the experience :-");
        scanf("%d",&s[i].emp_experience);

        printf("Enter the company_name :-");
        scanf("%s",&s[i].emp_company_name);

    }


    for (int i=0; i<a; i++)
    {
        printf("id :%d",s[i].emp_id);

        printf("name :%s",s[i].emp_name);

        printf("age :%d",s[i].emp_age);

        printf("role :%s",s[i].emp_role);

        printf("city :%s",s[i].emp_city);

        printf("experience :%d",s[i].emp_experience);

        printf("company_name :%s",s[i].emp_company_name);
    }
}