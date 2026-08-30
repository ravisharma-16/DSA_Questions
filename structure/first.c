// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[20];
//     int age;
//     char section;
//     int number[10];
// };
// int main()
// {
//     struct student s1;
//     printf("input of structure ->\n");

//     printf("enter the student name -> ");
//     gets(s1.name);
//     s1.age = 15;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter the number -> ");
//         scanf("%d", &s1.number[i]);
//     }
//     s1.section = 'A';

//     printf("display of structure ->\n");

//     printf("name -> %s\n", s1.name);
//     printf("age -> %d\n", s1.age);
//     printf("section -> %c\n", s1.section);
//     printf("phone number -> ");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", s1.number[i]);
//     }
// }

// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[20];
//     int age;
//     char section;
//     int number[10];
// };
// int main()
// {
//     struct student s1;
//     char arr[20];
//     printf("input of structure ->\n");

//     printf("enter the student name -> ");
//     fgets(arr, sizeof(arr), stdin);
//     strcpy(s1.name, arr);

//     printf("enter the age -> ");
//     scanf("%d", &s1.age);

//     printf("Enter the section -> ");
//     scanf(" %c", &s1.section);

//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter the number -> ");
//         scanf("%d", &s1.number[i]);
//     }

//     printf("display of structure ->\n");

//     printf("name -> %s\n", s1.name);
//     printf("age -> %d\n", s1.age);
//     printf("section -> %c\n", s1.section);
//     printf("phone number -> ");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", s1.number[i]);
//     }
//     return 0;
// }

//               COPY STRUCTURE

// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[20];
//     int age;
//     char section;
//     int number[10];
// };

// int main()
// {
//     struct student s1,s2;
//     char arr[20];

//     printf("Input of structure ->\n");

//     // Using fgets for safe string input
//     printf("Enter the student name -> ");
//     fgets(arr, sizeof(arr), stdin);
//     arr[strcspn(arr, "\n")] = 0; // Remove newline character from input
//     strcpy(s1.name, arr);

//     printf("Enter the age -> ");
//     scanf("%d", &s1.age);

//     // Fix the issue of reading a newline left by scanf by using " %c"
//     printf("Enter the section -> ");
//     scanf(" %c", &s1.section);

//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the number -> ");
//         scanf("%d", &s1.number[i]);
//     }

//      s2 = s1;

//     printf("Display of structure ->\n");

//     printf("Name -> %s\n", s2.name);
//     printf("Age -> %d\n", s2.age);
//     printf("Section -> %c\n", s2.section);
//     printf("Phone numbers -> ");

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", s2.number[i]);
//     }
//     printf("\n"); // Add newline after phone numbers

//     return 0;
// }

//      2 STUDENT INPUT

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    char last[100];
    int age;
    char section;
    int number[10];
};

int main()
{
    struct student s1[4];

    printf("Input of structure ->\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the student name -> ");
       scanf("%s",&s1[i].name);
       printf("Enter the student last name -> ");
       scanf("%s",&s1[i].last);

        printf("Enter the age -> ");
        scanf("%d", &s1[i].age);

        printf("Enter the section -> ");
        scanf(" %c", &s1[i].section);

        for (int k = 0; k < 10; k++)
        {
            printf("Enter the number -> ");
            scanf("%d", &s1[i].number[k]);
        }
    }

    printf("Display of structure ->\n");
    printf("\n");
    for (int i = 0; i < 4 ; i++)
    {
        printf("Name -> %s %s\n", s1[i].name,s1[i].last);
        printf("Age -> %d\n", s1[i].age);
        printf("Section -> %c\n", s1[i].section);
       printf("Phone numbers -> ");

        for (int k = 0; k < 10; k++)
        {
            printf("%d ", s1[i].number[k]);
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}

//    POINTER STRUCTER
// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[100];
//     char last[100];
//     int age;
//     char section;
//     int number[10];
// };

// int main()
// {
//     struct student s1;
//     printf("Input of structure ->\n");

//     printf("Enter the student name -> ");
//     scanf("%s", &s1.name);
//     printf("Enter the student last name -> ");
//     scanf("%s", &s1.last);
//     printf("Enter the age -> ");
//     scanf("%d", &s1.age);

//     printf("Enter the section -> ");
//     scanf(" %c", &s1.section);

//     // for (int k = 0; k < 10; k++)
//     // {
//     //     printf("Enter the number -> ");
//     //     scanf("%d", &s1.number[k]);
//     // }
//      struct student *s2;
//      s2 = &s1;
//     printf("Display of structure ->\n");
//     printf("\n");
//     printf("Name -> %s %s\n", s1.name, s1.last);
//     printf("Age -> %d\n", (*s2).age);
//     printf("Section -> %c\n", s1.section);
//     printf("Phone numbers -> ");

//     // for (int k = 0; k < 10; k++)
//     // {
//     //     printf("%d ", s1.number[k]);
//     // }
//     printf("\n");
//     printf("\n");
//     return 0;
// }
