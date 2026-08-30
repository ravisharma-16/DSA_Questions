// // #include <stdio.h>
// // int main()
// // {
// //     int arr[100], n;
// //     printf("enter the size = ");
// //     scanf("%d", &n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("enter the array = ");
// //         scanf("%d", &arr[i]);
// //     }
// //     printf("original array is = ");
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("%d ", arr[i]);
// //     }
// //     printf("\n");
// //     printf("ascending order is = ");
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         int num = i; 
// //         for (int j = i + 1; j < n; j++)
// //         {
// //             if (arr[num] > arr[j])
// //             {
// //                 num = j;
// //             }
// //         }
// //         int temp = arr[num];
// //         arr[num] = arr[i];
// //         arr[i] = temp;
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("%d ", arr[i]);
// //     }
// // }

// #include<stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *createnode(int d)
// {
//     struct node *temp = (struct node*)malloc((sizeof(struct node)));
//     temp->data = d;
//     temp->next = NULL;
//     return temp;
// }

// struct node *insertionnum(struct node *head,int d,int pos)
// {
//     struct node *temp = createnode(d);
//     struct node *current = head;
//     int c = 1;
//     if(pos == 1)
//     {
//         temp->next = head;
//         return temp;
//     }
//     while(c < pos - 1)
//     {
//         current = current->next;
//         c++;
//     }
//     temp->next = current->next;
//     current->next = temp;
//     return head;

// }
// struct node *headnum(struct node *head,int d)
// {
//     struct node *temp = createnode(d);
//     if(head != NULL)
//     {
//         temp->next = head;
//     }
//     return temp;
// }

// void printnum(struct node *head)
// {
//     struct node *current = head;
//     while(current != NULL)
//     {
//         printf("%d ",current->data);
//         current = current->next;
//     }
    
// }

// struct node *tailnum(struct node *tail,int data)
// {
//    struct node *temp = createnode(data);
//    if(tail != NULL)
//    {
//     tail->next = temp;
//    }
//    return temp;
// }

// int main()
// {
//     struct node *tail = NULL;
//     tail = tailnum(tail,20);
//     struct node *head = tail;
//     tail = tailnum(tail,30);
//     tail = tailnum(tail,40);
//     tail = tailnum(tail,50);
//     head = headnum(head,80);
//     head = insertionnum(head,100,3);
//     printnum(head);

// }
 

#include<stdio.h>
 int main()
 {
    // char ch[10];
    // printf("enter the string : ");
    // gets(ch);
    // printf("%s",ch);

    int *ptr;
    int x = 10;
    ptr = &x;

    printf("value : %d\n",x);
    printf("value : %d\n",*ptr);
    printf("value : %u\n",&x);
    printf("value : %u\n",ptr);
 }