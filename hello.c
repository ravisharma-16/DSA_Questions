//  #include<stdio.h>
//  int main(){
//  int age;
//  printf("enter age = ");
//  scanf("%d",&age);
//  printf("age is : %d\n",age);
//  int sum = age++;
//  printf("age is : %d\n",sum);
//  printf("age is : %d\n",age);
//  return 0;
//  }

#include <stdio.h>
int main()
{
    char arr[20];
    int word = 0, line = 1, character = 0;
    printf("enter the charater = ");
    scanf("%[^\n]s", &arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
        {
            word++;
        }
        if (arr[i] == '\n')
        {
            line++;
        }
        if (arr[i] == ' ' || arr[i + 1] == '\0')
        {
            character++;
        }
    }
    printf("word of the character = %d\n", word);
    printf("character of the character = %d\n", character);
    printf("line of the character = %d\n", line);
}