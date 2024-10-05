/**
  ******************************************************************************
  * @file           : test_7_5.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/5
  ******************************************************************************
  */
/*
 *算法一：
 *m n
 *取值范围法：最大公约数的取值范围[1,m和n中那个小的数]
 *
 */
#include<stdio.h>
// #define min(a,b) (a) < (b) ? a : b
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     printf("请输入两个数:\n");
//     scanf("%d%d",&num1,&num2);
//     int i = 0;
//     for( i = min(num1,num2); i>=1;i--)
//     {
//         if(num1 % i == 0 && num2 %i ==0 )
//         {
//             printf("%d ",i);
//             break;
//         }
//     }
//     return 0;
// }

/*
 *算法二:
 *  欧几里得算法
 *  首先保证m > n
 *  #define max(m,n) (m) > (n) ? (m) : (n)
 */

// int main()
// {
//     int arr[10] = {2,5,4,3,1,6,7,9,8,10};
//     int i = 0;
//     for(i = 0; i < sizeof(arr) / sizeof(arr[0])-1;i++)
//     {
//
//         int j = 0;
//         for(j = 0; j < sizeof(arr) / sizeof(arr[0]) -1-i ;j++)
//         {
//             if(arr[0] >arr[j+1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (i = 0; i < sizeof(arr) /sizeof(arr[0]);i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #define N 10
// int main()
// {
//     int arr[10] = {0};
//     int i = 0;
//     int j = 0;
//     for(i = 0; i< N ;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i = 0; i < N-1;i++)
//     {
//
//         int max_index = 0;
//         int max = arr[0];
//
//         for(j = 0;j < N -i ;j++)
//         {
//             if(arr[j] > arr[max_index])
//             {
//                 // max = arr[j];
//                 max_index = j;
//             }
//             if(max_index != N-1-i)
//             {
//                 // int temp = arr[max_index];
//                 // arr[max_index] = arr[j];
//                 // arr[j] = temp;
//                 int temp = arr[max_index];
//                 arr[max_index] = arr[N-1-i];
//                 arr[N-1-i] = temp;
//             }
//         }
//     }
//     for(i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #define N 10
// int main()
// {
//     int arr[10] = {2,5,4,3,1,6,7,9,8,10};
//     int i = 0;
//     int max = 0;
//     int max_index = 0;
//     for(i = 1; i <= N-1;i++)
//     {
//         max = arr[0];
//         max_index = 0;
//         int j = 0;
//         for(j = 0;j < N - i+1 ;j++) //遍历数组剩余元素,找其中的最大值
//         {
//             if(arr[j] > max)
//             {
//                 max = arr[j];
//                 max_index = j;
//             }
//             //max保存了数组剩余元素中的最大值
//             //max_i保存剩余元素最大值的下标
//             //拿最大值的元素 与剩余部分最后位置 交换
//             if(max_index != j)
//             {
//                 int temp = arr[max_index];
//                 arr[max_index] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// /*
//  *
//  * 遍历实现插入查找
//  */
// #define  N 10
// void Insert(int a[],int n ,int x)
// {
//     //找到插入位置
//     int L = 0;
//     int R = n - 2;
//     int mid;
//     while(L <= R)
//     {
//         mid = (L + R) / 2;
//         if(x>a[mid])
//         {
//             L = mid + 1;
//         }
//         else if(x < a[mid])
//         {
//             R = mid - 1;
//         }
//     }
//     //循环结束,那么此时待插入的位置下标就为L

//     //插入操作
//     int i = 0;
//     for(i = n - 2; i >= L ; i--)
//     {
//         a[i+1] = a[i];
//     }
//     a[L] = x;
// }
// int main()
// {
//     int a[N];
//     int i,j,k;
//     for (i = 0; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(j = 1; j < N ;j++)
//     {
//         Insert(a,j+1,a[j]);
//     }


//     // for(i = 1; i < N;i++)
//     // {
//     //     for(j = 0; j < i;j++)
//     //     {
//     //         if(a[j] > a[i])
//     //         {
//     //             //找到了,下标位置就为j
//     //             break;
//     //         }
//     //     }
//     //     //a.break 中途夭折,此时插入的位置下标一定为j
//     //     //b.没有找到,循环正常结束,此时插入的位置为最后面 =>下标为i
//     //     //插入操作 (先将元素往后面挪,空出待插入元素的位置)不管有没有找到
//     //     int x = a[i];//备份a[i]
//     //     for(k = i -1 ; k>=j ;k--)
//     //     {
//     //         a[k+1] = a[k];
//     //     }
//     //     a[j] = x;
//     // }
//     for (i = 0; i < N ;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }
// /*
//  *
//  * 遍历实现插入查找
//  */
// #define  N 10
// void Insert(int a[],int n ,int x)
// {
//     //找到插入位置
//     int L = 0;
//     int R = n - 2;
//     int mid;
//     while(L <= R)
//     {
//         mid = (L + R) / 2;
//         if(x>a[mid])
//         {
//             L = mid + 1;
//         }
//         else if(x < a[mid])
//         {
//             R = mid - 1;
//         }
//     }
//     //循环结束,那么此时待插入的位置下标就为L

//     //插入操作
//     int i = 0;
//     for(i = n - 2; i >= L ; i--)
//     {
//         a[i+1] = a[i];
//     }
//     a[L] = x;
// }
// int main()
// {
//     int a[N];
//     int i,j,k;
//     for (i = 0; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(j = 1; j < N ;j++)
//     {
//         Insert(a,j+1,a[j]);
//     }


//     // for(i = 1; i < N;i++)
//     // {
//     //     for(j = 0; j < i;j++)
//     //     {
//     //         if(a[j] > a[i])
//     //         {
//     //             //找到了,下标位置就为j
//     //             break;
//     //         }
//     //     }
//     //     //a.break 中途夭折,此时插入的位置下标一定为j
//     //     //b.没有找到,循环正常结束,此时插入的位置为最后面 =>下标为i
//     //     //插入操作 (先将元素往后面挪,空出待插入元素的位置)不管有没有找到
//     //     int x = a[i];//备份a[i]
//     //     for(k = i -1 ; k>=j ;k--)
//     //     {
//     //         a[k+1] = a[k];
//     //     }
//     //     a[j] = x;
//     // }
//     for (i = 0; i < N ;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }
struct Data {
 int year;
 int month;
 int day;
};

struct student {
 int num;
 char name[32];
 struct Data birthday;
 int score;
};

int main() {
 struct student *class = malloc(sizeof(*class) * 5);
 if (class == NULL) {
  printf("Memory allocation failed\n");
  return 1;
 }

 int i;
 for (i = 0; i < 5; i++) {
  scanf("%d %s %d-%d-%d %d", &((class + i)->num), (class + i)->name, &((class + i)->birthday.year),
        &((class + i)->birthday.month), &((class + i)->birthday.day), &((class + i)->score));
 }

 for (i = 0; i < 5; i++) {
  printf("%d %s %d-%d-%d %d\n", (class + i)->num, (class + i)->name, (class + i)->birthday.year,
         (class + i)->birthday.month, (class + i)->birthday.day, (class + i)->score);
 }

 free(class); // Don't forget to free the allocated memory
 return 0;
}