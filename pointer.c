// #include<stdio.h>
// int main()
// {
//     int x =1,*ptr;
//     ptr = &x;
//     printf("number are = %d\n",x);
//     printf("number are = %d\n",*ptr);
//     printf("address are = %u\n",&x);
//     printf("address are = %u\n",&ptr);
// }

//               ADD TWO POINTER


// #include<stdio.h>
// int main()
// {
//     int x,y,*ptr,*ptr2,sum;
//     printf("enter the number = ");
//     scanf("%d",&x);
//     printf("enter the number = ");
//     scanf("%d",&y);
//     ptr = &x;
//     ptr2 = &y;
//      sum = *ptr + *ptr2;
//      printf("sum of two pointer are = %d",sum);   
// }


//          sum of two pointer with the help of function

// #include<stdio.h>
//     int sumof(int *ptr,int *ptr2)
//     {
//         int sum;
//         sum = *ptr + *ptr2;
//         return sum;
//     }

//     int main()
//     {
//     int x,y,sum;
//     printf("enter the number = ");
//     scanf("%d",&x);
//     printf("enter the number = ");
//     scanf("%d",&y);
//     //sum = sumof(&x,&y);
//     printf("sum of two pointer are = %d",sumof(&x,&y));
//     } 

           //  find the maximum number of between 2 number

// #include<stdio.h>
//     int main()
//     {
//     int x,y,*ptr,*ptr2;
//     printf("enter the number = ");
//     scanf("%d",&x);
//     printf("enter the number = ");
//     scanf("%d",&y);
//     ptr = &x;
//     ptr2 = &y;
//     if(*ptr > *ptr2)
//     {
//     printf("maximum number are = %d",*ptr);
//     }
//     else
//     {
//         printf("maximum number are = %d",*ptr2);
//     }
//     }   

  //           array printing with the help of pointer
  

//   #include<stdio.h>
//   int main()
//   {
//     int i,size,arr[100],*ptr;
//     printf("enter the size = ");
//     scanf("%d",&size);
//     for(i=0;i<size;i++)
//     {
//         printf(" %d element number are = ",i);
//         scanf("%d",&arr[i]);
//     }
//     ptr = &arr[0];
//     for(i=0;i<size;i++)
//     {
//         printf("element number are = %d\n",*(ptr+i));
//     }
//   }

  //             ...................


//   #include<stdio.h>
//   int main()
//   {
//     int i,size,arr[100],*ptr;
//     printf("enter the size = ");
//     scanf("%d",&size);
//     ptr = arr;
//     for(i=0;i<size;i++)
//     {
//         printf(" %d element number are = ",i);
//         scanf("%d",ptr+i);
//     }
//    for(i=0;i<size;i++)
//     {
//         printf("element number are = %d\n",*(ptr+i));
//     }
//   }

          //find the maximum and minimum number of array
  // #include<stdio.h>
  // int main()
  // {
  //   int i,size,arr[100],*ptr,max,min;
  //   printf("enter the size = ");
  //   scanf("%d",&size);
  //   for(i=0;i<size;i++)
  //   {
  //       printf(" %d element number are = ",i);
  //       scanf("%d",&arr[i]);
  //   }
  //   ptr = &arr[0];
  //   max = arr[0];
  //   min = arr[0]; 
  //  for(i=0;i<size;i++)
  //   {
  //     if(max < *(ptr+i))
  //     {
  //       max = *(ptr+i);
  //     }
  //       if (min > *(ptr+i))
  //     {
  //        min = *(ptr+i);
  //     }
  //     }
  //   printf("maximum number are = %d\n",max);
  //   printf("minimum number are = %d\n",min);
  // } 

          // find the lenght of string
  // #include<stdio.h>
  // int main()
  // {
  //   int i,lenght = 0;
  //   char arr[100],*ptr;
  //   printf("enter the string = ");
  //   gets(arr);
  //   ptr = arr;
  //  for(i=0;*ptr!='\0';i++)
  //   {
  //     lenght++;
  //     ptr++;
  //   }
  //   printf("lenght are = %d\n",lenght);
  //    } 

        //swaping three number
//  #include<stdio.h>
//   void swap(int *ptr,int *ptr2,int *ptr3)
//   {
//          int temp ;
//          temp = *ptr;
//          *ptr = *ptr2;
//          *ptr2 = *ptr3;
//          *ptr3 = temp;
//   }
//   int main()
//   {
//     int a,b,c;
//     printf("enter the number a = ");
//     scanf("%d",&a);
//     printf("enter the number b = ");
//     scanf("%d",&b);
//     printf("enter the number c = ");
//     scanf("%d",&c);
//     swap(&a,&b,&c);
//     printf("swapping are number = %d  %d  %d  ",a,b,c);
//      } 


//           factorial of array using pointer
// #include<stdio.h>
// int fact(int arr[],int size)
// {
//   int i,*ptr,fact = 1;
//   ptr = arr;
//   for(i=0;i<size;i++)
// {
//    fact *= *(ptr);
//    ptr++; 
// }
// return fact;
// }
// int main()
// {
//   int i,size,arr[100];
//   printf("enter the size = ");
//   scanf("%d",&size);
// for(i=0;i<size;i++)
// {
//   printf("%d index = ",i);
//   scanf("%d",&arr[i]);
// }
// printf("factorial of = ");
// printf("%d",fact(arr,size));
// }

//        find the vowel and constant
// #include<stdio.h>
// int check(char arr[])
// {
//      char *ptr;
//      int i,vowel=0,constant=0;
//      ptr = arr;
// for(i=0;*ptr!='\0';i++)
// {
//   if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
//   {
//     vowel++;
//   }
//   else{
//     constant++;
//   }
//   ptr++;
// }
// printf("vowel of = %d\n",vowel);
// printf("constant of = %d",constant);
// }
// int main()
// {
//   char arr[100];
//   printf("enter the string = ");
//   gets(arr);
//   check(arr);
// }

//          array shorting using pointer ascending
// #include<stdio.h>
// int main()
// {
//   int arr[100],i,size,*ptr;
//   printf("enter the size = ");
//   scanf("%d",&size);
//   ptr = arr;
//   for(i=0;i<size;i++)
// {
//   printf("%d index = ",i);
//   scanf("%d",ptr+i);
// }
// printf("original array = ");
// for(i=0;i<size;i++)
// {
//   printf(" %d ",*(ptr+i));
// }
// printf("\n");
// for(i=0;i<size;i++)
// {
//   for(int j=i+1;j<size ;j++)
//   {
//   if(*(ptr+i) > *(ptr+j))
//   {
//     int temp = *(ptr+i);
//     *(ptr+i) = *(ptr+j);
//     *(ptr+j) = temp;
//   }
//  }
// }
// for(i=0;i<size;i++)
// {
// printf("%d\t",*ptr);
// ptr++;
// }
// }

//         array shorting using pointer descinding
// #include<stdio.h>
// int main()
// {
//   int arr[100],i,size,*ptr;
//   printf("enter the size = ");
//   scanf("%d",&size);
//   ptr = arr;
//   for(i=0;i<size;i++)
// {
//   printf("%d index = ",i);
//   scanf("%d",ptr+i);
// }
// printf("original array = ");
// for(i=0;i<size;i++)
// {
//   printf(" %d ",*(ptr+i));
// }
// printf("\n");
// for(i=0;i<size;i++)
// {
//   for(int j=i+1;j<size ;j++)
//   {
//   if(*(ptr+i) < *(ptr+j))
//   {
//     int temp = *(ptr+i);
//     *(ptr+i) = *(ptr+j);
//     *(ptr+j) = temp;
//   }
//  }
// }
// for(i=0;i<size;i++)
// {
// printf("%d\t",*ptr);
// ptr++;
// }
// } 

//              sum of array using pointer
// #include<stdio.h>
// int sum(int arr[],int size)
// {
//   int i,*ptr,sum = 0;
//   ptr = arr;
//   for(i=0;i<size;i++)
// {
//    sum += *(ptr);
//    ptr++; 
// }
// return sum;
// }
// int main()
// {
//   int i,size,arr[100];
//   printf("enter the size = ");
//   scanf("%d",&size);
// for(i=0;i<size;i++)
// {
//   printf("%d index = ",i);
//   scanf("%d",&arr[i]);
// }
// printf("sum of = ");
// printf("%d",sum(arr,size));
// }

//                   reverse of array using pointer
// #include<stdio.h>
// int reverse(int arr[],int size)
// {
//   int i,*ptr;
//   ptr = &arr[size-1];
//   for(i=0;i<size;i++)
// {
//    printf(" %d ",*ptr);
//    ptr--; 
// }
// }
// int main()
// {
//   int i,size,arr[100];
//   printf("enter the size = ");
//   scanf("%d",&size);
// for(i=0;i<size;i++)
// {
//   printf("%d index = ",i);
//   scanf("%d",&arr[i]);
// }
// printf("reverse of =");
// reverse(arr,size);
// }


// #include<stdio.h>
// int main()
// {
//   int i,size,arr[100],*ptr;
//   printf("enter the size = ");
//   scanf("%d",&size);
//   ptr = arr;
// for(i=0;i<size;i++)
// {
//   printf("%d index = ",i);
//   scanf("%d",ptr+i);
// }
// printf("original array = ");
// for(i=0;i<size;i++)
// {
//   printf(" %d ",*(ptr+i));
// }
// printf("\n");
// printf("reverse order = ");
// for(i = size-1;i>=0;i--)
// {
//   printf(" %d ",*(ptr+i));
// }

//}


//      string reverse using pointer
// #include<stdio.h>
// int main()
// {
//   int i,l=0;
//   char arr[100],*ptr;
//   printf("enter the string = ");
//   gets(arr);
//   for(i=0;arr[i]!='\0';i++)
//   {
//     l++;
//   }
//   ptr = arr;
//   for(i=l-1;i>=0;i--)
//   {
//     printf("%c",ptr[i]);
//   }
// }



