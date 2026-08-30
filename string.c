// #include <stdio.h>
// #include <string.h>
// int main()
// {
    // char arr[20];
    // int size;
    // printf("enter the string -> ");
    // scanf("%s",arr);
    // printf("%s",arr);



    // printf("enter the string -> ");
    // scanf("%[^\n]s",arr);
    // printf("%s",arr);



    //      char arr[20];
    //     printf("enter the string -> ");
    //    gets(arr);
    //     puts(arr);


   
//     printf("enter the size -> ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++)
//     {
//         fflush(stdin);
//         printf("enter the string -> ");
//         scanf("%c", &arr[i]);
//     }
//     arr[size] = '\0';
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c", arr[i]);
//     }
// }



// #include<stdio.h>
// int main()
// {
//     char arr[50];
//     printf("enter the string = ");
//     gets(arr);
//     printf("%s",arr);
// }

//           find the lenght of array
// #include<stdio.h>
// int main()
// {
//     int i,lenght;
//     char arr[50];
//     printf("enter the string = ");
//     gets(arr);
//     for ( i = 0; arr[i]!='\0'; i++)
//     {
//         lenght++;
//     }

//     printf("%d",lenght);
// }

//     printf the space string
// #include<stdio.h>
// int main()
// {
//     char arr[50];
//     printf("enter the string = ");
//     gets(arr);
//      for ( int i = 0; arr[i]!='\0'; i++)
//     {
//     printf(" %c ",arr[i]);
//     }
// }

//         reverse string
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int lenght;
//     char arr[50];
//     printf("enter the string = ");
//     gets(arr);
//     lenght = strlen(arr);
//      for ( int i = lenght -1; i >= 0; i--)
//     {
//     printf("%c ",arr[i]);
//     }
// }

//       count the total number of word in string
//  #include<stdio.h>
// int main()
// {
//     int words = 0;
//     char arr[50];
//     printf("enter the string = ");
//     gets(arr);
//      for ( int i = 0; arr[i]!='\0'; i++)
//     {
//         if (arr[i] == ' '  || arr[i] == '\n' || arr[i] == '\t'||arr[i]=='\0')
//         {
//             words++;
//         }

//     }
//     printf("%d",words);
// }

   // compare string
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int check;
//     char arr[50],arr2[50];
//     printf("enter the string = ");
//     gets(arr);
//      printf("enter the 2 string = ");
//     gets(arr2);
//      for ( int i = 0; arr[i] != '\0' || arr2[i]!='\0'; i++)
//     {
//     if (arr[i] == arr2[i])
//     {
//         check = 1;
//     }
//     else
//     {
//         check = 2;
//     }
//     }
//     if(check == 1)
//     {
//         printf("both same");
//     }
//     else
//     {
//        printf("both not same");
//     }

//  }

//      total number of alphabets , digits and special character

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int alp = 0,dig = 0,spe = 0;
//     char arr[50];
//     printf("enter the string = ");
//     gets(arr);
//      for ( int i = 0; arr[i] != '\0'; i++)
//     {
//     if (arr[i] >= 'a'&& arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
//     {
//         alp++;
//     }
//     else if(arr[i] >= '1' && arr[i]  <= '9')
//     {
//         dig++;
//     }
//     else
//     {
//        spe++;
//     }

// }
// printf("alp  =  %d\n",alp);
// printf("dig  =  %d\n",dig);
// printf("spe  =  %d",spe);

// }

//           copy one string into another string
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  int i;
//  char arr[50],arr2[50];
//  printf("enter the string = ");
//  gets(arr);
//  for ( i = 0; arr[i]!= '\0'; i++)
//  {
//     arr2[i] = arr[i];
//  }
//  arr2[i] = '\0';
//    printf("%s ",arr2);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  int i;
//  char arr[50],arr2[50];
//  printf("enter the string = ");
//  gets(arr);
//  strcpy(arr2,arr);
//    printf("%s ",arr2);
// }

//           count vowel and consonant
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int vow = 0,con = 0;
//     char arr[50];
//     printf("enter the string = ");
//     gets(arr);
//      for ( int i = 0; arr[i] != '\0'; i++)
//     {
//     if (arr[i] =='a'|| arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' ||  arr[i] == 'u'  && arr[i] =='A'|| arr[i] == 'E' || arr[i] == 'I' && arr[i] == 'O' ||  arr[i] == 'U')
//     {
//         vow++;
//     }
//     else if(arr[i] >= 'a' && arr[i]<='z'|| arr[i]>='A'&& arr[i]<='Z')
//     {
//        con++;
//     }

// }
// printf("vowel  =  %d\n",vow);
// printf("consonant  =  %d\n",con);
// }

//         find the maximum number of character in string
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int count = 0,i,j;
//     char arr[50],max;
//     printf("enter the string = ");
//     gets(arr);
//     for ( i = 0; arr[i]!='\0'; i++)
//     {
//         for(j=i+1;arr[j]!='\0';j++)                         //   galat hai
//         {
//         if(arr[i] == arr[j])
//         {
//             count++;
//             max = arr[i];
//         }
//         }
//     }

// printf("maximum number are character is %c number of frequency are =  %d\n",max,count);
// }

//                  array in ascending order
// #include<stdio.h>
// int main()
// {
//     char arr[50];
//     int i;
//     printf("enter the string = ");
//     gets(arr);
//     for ( i = 0; arr[i]!='\0'; i++)
//     {
//         for(int j=i+1;arr[j]!='\0';j++)
//         {
//         if(arr[i] > arr[j])
//         {
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//         }
//     }
//     printf("%s",arr);
// }

//                     substring from a giving string
// #include<stdio.h>
// int main()
// {
//     char arr[50],arr2[50];
//     int pos,i,lenght;
//     printf("enter the string -> ");
//     gets(arr);
//     printf("enter the pos -> ");
//     scanf("%d",&pos);
//     printf("enter the lenght -> ");
//     scanf("%d",&lenght);
//      for(i=0;i<lenght;i++)
//      {
//         arr2[i] = arr[pos + i - 1];
//      }
//      arr2[i] = '\0';
//      printf("sub string -> %s",arr2);
// }

//              substring is present in a string
// #include<stdio.h>
// int main()
// {
//     char arr[50],arr2[50];
//     int j,i,x;
//     printf("enter the string -> ");
//     gets(arr);
//     printf("enter the string -> ");
//     gets(arr2);
//      for(i=0;arr[i] != '\0';i++)
//      {
//        for(j =0;arr2[j] != '\0';j++)
//        {
//         if(arr[i] == arr2[j])
//         {
//             x = 1;
//         }
//         else
//         {
//           x = 2;
//         }
//        }
//      }
//      if(x == 1)
//      {
//      printf(" exist ");
//      }
//      else
//      {
//          printf(" not exist ");
//      }
// }

//     lower case
// #include<stdio.h>
// #include<string.h>
// void lowercase(char arr[])
// {
//     for(int i=0;arr[i] != '\0';i++)
//      {
//         arr[i] += 32;
//      }
//      printf("lower case -> %s",arr);
// }
// void uppercase(char arr[])
// {
//     for(int i=0;arr[i] != '\0';i++)
//      {
//         arr[i] -= 32;
//      }
//      printf("upper case -> %s",arr);
// }
// int main()
// {
//     int i,x;
//     char arr[50];
//     printf("enter the string -> ");
//      gets(arr);
//      for(i=0;arr[i] != '\0';i++)
//      {
//         if(arr[i] >= 'a'&& arr[i] <= 'z')
//         {
//             x = 1;
//         }
//         else if(arr[i] >= 'A'&& arr[i] <= 'Z')
//         {
//             x = 2;
//         }
//      }
//      if(x == 1)
//      {
//         uppercase(arr);
//      }
//      else
//      {
//        lowercase(arr);
//      }
// }

//   removing the number or operater
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i,j,times = 0;
//     char arr[50],arr2[50];
//     printf("enter the string -> ");
//     gets(arr);
//     for ( i = 0; arr[i] !='\0'; i++)
//     {
//         if(arr[i] >= '1'&& arr[i]<='9')
//         {
//         for(j=i;arr[j] != '\0';j++)
//         {
//             arr[j] = arr[j+1];
//         }
//         }

//     }
//     arr[j] ='\0';
//     printf("removing -> %s",arr);
// }

//          find the frequency of character
// #include<stdio.h>
// int main()
// {

//     int i,times = 0;
//     char arr[50],find;
//     printf("enter the string -> ");
//     gets(arr);
//     printf("enter the find element -> ");
//     scanf("%c",&find);
//     for(i=0;arr[i]!= '\0';i++)
//     {
//         if(arr[i] == find)
//         {
//             times++;
//         }
//     }
//    printf("frequency of -> %d",times);
// }

//       combine two string
// #include<stdio.h>
// int main()
// {
//      int i,k = 0;
//      char arr[50],arr2[50],arr3[200];
//       printf("enter the string -> ");
//      gets(arr);
//      printf("enter the string -> ");
//      gets(arr2);
//      for(i=0;arr[i]!='\0';i++)
//      {
//          arr3[k] = arr[i];
//          k++;
//      }
//       for(i=0;arr2[i]!='\0';i++)
//      {
//          arr3[k] = arr2[i];
//          k++;
//      }
//      arr3[k] = '\0';
//      puts(arr3);
// }

//     find the max and min
// #include<stdio.h>
// int main()
// {
//      int i;
//      char arr[50],max,min;
//       printf("enter the string -> ");
//      gets(arr);
//      max = arr[0];
//      min = arr[0];
//      for ( i = 0; arr[i] !='\0'; i++)
//      {
//         if(max<arr[i])
//         {
//             max = arr[i];
//         }
//         else if (min> arr[i])
//         {
//             min = arr[i];
//         }
//      }
//      printf("maximum character are -> %c\n",max);
//      printf("mimimum character are -> %c\n",min);

// }

//  replace the space

// #include<stdio.h>
// int main()
// {
//     char arr[50];
//      printf("enter the string -> ");
//      gets(arr);
//      for (int  i = 0; arr[i] != '\0'; i++)
//      {
//         if(arr[i] == ' ')
//         {
//             arr[i] = '*';
//         }
//      }
//      printf("%s",arr);

// }

//      delete the space
// #include<stdio.h>
// int main()
// {
//     char arr[50];
//      printf("enter the string -> ");
//      gets(arr);
//      for (int  i = 0; arr[i] != '\0'; i++)
//      {
//         if(arr[i] == ' ')
//         {
//             for(int j = i;arr[j] != '\0';j++)
//             {
//             arr[j] = arr[j+1];
//             }
//         }
//      }
//      printf("%s",arr);

// }

//   check the character or digit or not
//  #include<stdio.h>
// int main()
// {
//     char check;
//      printf("enter the character -> ");
//      scanf("%c",&check);
//         if(check >= 'a' && check <= 'z'  ||  check >= 'A' && check <= 'Z')
//         {
//             printf("this is a character -> %c",check);
//         }
//         else
//         {
//             printf("this is a digit");
//         }
//      }

//  spaliting string
// #include<stdio.h>
// int main()
// {
//     char arr[50];
//      printf("enter the character -> ");
//      gets(arr);
//          for (int  i = 0; arr[i] != '\0'; i++)
//      {
//         if(arr[i] == ' '|| arr[i] == '\0')
//         {
//             arr[i] = '\n';
//         }
//      }
//          printf("%s",arr);
//      }

//   check reperting character
// #include<stdio.h>
// int main()
// {
//     char arr[50],check;
//      printf("enter the character -> ");
//      gets(arr);
//          for (int  i = 0; arr[i] != '\0'; i++)
//      {
//         for (int j = i+1; arr[j] != '\0'; j++)
//         {
//         if(arr[i] == arr[j])
//         {
//             check = arr[i];
//         }
//      }
//      }
//          printf("%c",check);
//      }

//   check how many times
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[50], check;
//     int arr2[50], count = 0, k = 0, n;
//     printf("enter the character -> ");
//     gets(arr);
//     n = strlen(arr);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         printf("%c\t%d\n", arr[i],count);
//         count = 0;
//     }
// }

//      conver vowels upto upper case
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[50];
//     int n;
//     printf("enter the string -> ");
//     gets(arr);
//     n = strlen(arr);
//     for (int i = 0; i < n; i++)
//     {
//        if(arr[i] =='a'|| arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' ||  arr[i] == 'u'  && arr[i] =='A'|| arr[i] == 'E' || arr[i] == 'I' && arr[i] == 'O' ||  arr[i] == 'U')
//             {
//                 arr[i] -= 32;
//             }
//     }
//     puts(arr);
// }

//      check not reperting character
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[50];
//     int n, count = 0;
//     printf("enter the string -> ");
//     gets(arr);
//     n = strlen(arr);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//     }
//     int check = n - count;
//     printf("not reperting character number -> %d",check);
// }

