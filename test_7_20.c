/**
  ******************************************************************************
  * @file           : test_7_20.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/20
  ******************************************************************************
  */
#include <stdint.h>
#include<stdio.h>


/*
 *选择排序
 *
 */
// int main()
// {
//     int a[10] = {2,3,1,5,9,6,4,8,0,10};
//     int i = 0;
//     int n = sizeof(a) /sizeof(a[0]);
//     int j = 0;
//     for(i = 0;i < n -1;i++)
//     {
//         int max = INT32_MIN;
//         int max_index = i;
//         for(j = 0; j < n-i;j++)
//         {
//             if(a[j] > max)
//             {
//                 max = a[j];
//                 max_index = j;
//
//             }
//         }
//         if(max_index != n - i - 1)
//         {
//             int temp = a[max_index];
//             a[max_index] = a[n -i -1];
//             a[n - i -1] = temp;
//         }
//     }
//     for(i = 0; i < n  ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

/**
 *
 * 插入排序-遍历的方式排序
 */
int main()
{
    int a[10] = {2,3,1,5,9,6,4,8,0,10};
    int i = 0;
    int j = 0;
    int n = sizeof(a) /sizeof(a[0]);
    int k = 0;
    for(i = 1 ; i < n-1;i++)
    {
        for(j = 0 ; j < i ;j++)
        {
            if(a[j] > a[i])
            {
                break;
            }
        }
        int x = a[i];
        for (k = i - 1; k >= j; k--)
        {
            a[k+1] = a[k];
        }
        a[j] = x;
    }
    for(i = 0 ; i < n ;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}