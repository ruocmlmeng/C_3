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
#include<stdio.h>
#define N 10
int main()
{
    int arr[10] = {0};
    int i = 0;
    int j = 0;
    for(i = 0; i< N ;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < N-1;i++)
    {

        int max_index = 0;
        int max = arr[0];

        for(j = 0;j < N -i ;j++)
        {
            if(arr[j] > arr[max_index])
            {
                // max = arr[j];
                max_index = j;
            }
            if(max_index != N-1-i)
            {
                // int temp = arr[max_index];
                // arr[max_index] = arr[j];
                // arr[j] = temp;
                int temp = arr[max_index];
                arr[max_index] = arr[N-1-i];
                arr[N-1-i] = temp;
            }
        }
    }
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
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
