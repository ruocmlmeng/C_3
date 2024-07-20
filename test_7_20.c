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
// int main()
// {
//     int a[10] = {2,3,1,5,9,6,4,8,0,10};
//     int i = 0;
//     int j = 0;
//     int n = sizeof(a) /sizeof(a[0]);
//     int k = 0;
//     for(i = 1 ; i < n-1;i++)
//     {
//         for(j = 0 ; j < i ;j++)
//         {
//             if(a[j] > a[i])
//             {
//                 break;
//             }
//         }
//         int x = a[i];
//         for (k = i - 1; k >= j; k--)
//         {
//             a[k+1] = a[k];
//         }
//         a[j] = x;
//     }
//     for(i = 0 ; i < n ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

/*
 * 插入排序-二分插入排序
 *
 */
/*
 *    Insert: 二分插入排序
 *    @a：数组名
 *    @n：数组的大小
 *    @x：待插入排序的整数
 *    返回值：
 *         无返回值
 */
void Insert(int a[],int n,int x )
{
    int l = 0;
    int r = n -2;
    int mid = 0;
    while (l <= r)
    {
       mid = (l + r) / 2;
       if(x > a[mid])
       {
            l = mid + 1;
       }
       else if( x < a[mid])
       {
            r = mid - 1;
       }
    }
    int k = 0;
    for(k = n - 2; k >= l; k--)
    {
        a[k+1] = a[k];
    }
    a[l] = x;
}
int main()
{
    int a[10] = {2,3,1,5,9,6,4,8,0,10};
    int i = 0;
    int n = sizeof(a)/ sizeof(a[0]);
    for(i = 1; i < n ;i++)
    {
       Insert(a,i+1,a[i]);
    }
    for( i = 0 ; i < n ;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}