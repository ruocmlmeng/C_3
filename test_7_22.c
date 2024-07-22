/**
  ******************************************************************************
  * @file           : test_7_22.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/22
  ******************************************************************************
  */
#include<stdio.h>
/*
*   InsertSort: 插入排序-二分插入
*   @a：数组名
*   @n：进行二分查找的范围
*   @x：要插入的数
*   返回值：
*       无返回值
*
*/
// void InsertSort(int a[],int n,int x)
// {
//     int l = 0;
//     int r = n -2;
//     int mid=0;
//     while (l <= r)
//     {
//         mid =  (l + r) / 2;
//         if  (a[mid] > x )
//         {
//             r = mid - 1;
//         }
//         else if( a[mid] < x)
//         {
//             l = mid + 1;
//         }
//     }
//     int i = 0;
//     for(i = n -2  ; i >= l;i--)
//     {
//         a[i+1] = a[i];
//     }
//     a[l] = x;
// }
// int main()
// {
//     int a[10] = {7,4,6,3,2,1,0,5,8,9};
//     int i = 0;
//     int n = sizeof(a) / sizeof(a[0]);
//     for (i = 1; i < n ;i++)
//     {
//         InsertSort(a,i+1,a[i]);
//     }
//     for(i = 0; i < n ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


/*
*   InsertSort: 插入排序-二分插入
*   @a：数组名
*   @n：进行二分查找的范围
*   @x：要插入的数
*   返回值：
*       无返回值
*
*/
// void InsertSort(int a[], int n, int x) {
//   int l = 0;
//   int r = n - 2;
//   int mid;
//   while (l <= r) {
//     mid = l + (r - l) / 2;  // 修正中间值计算
//     if (a[mid] > x) {
//       r = mid - 1;
//     } else {
//       l = mid + 1;
//     }
//   }
//   // l 现在是要插入的位置
//   int i;
//   for (i = n - 1; i >= l; i--) {
//     a[i + 1] = a[i];
//   }
//   a[l] = x;
// }
//
// int main() {
//   int a[10] = {7, 4, 6, 3, 2, 1, 0, 5, 8, 9};
//   int i;
//   int n = sizeof(a) / sizeof(a[0]);
//
//   for (i = 1; i < n; i++) {
//     InsertSort(a, i, a[i]);
//   }
//
//   for (i = 0; i < n; i++) {
//     printf("%d ", a[i]);
//   }
//   return 0;
// }

/*
 * 插入排序-遍历插入
 */
int main()
{
    int a[10] = {7, 4, 6, 3, 2, 1, 0, 5, 8, 9};
    int i = 0;
    int n = sizeof(a) / sizeof(a[0]);
    int j = 0;
    for(i = 1 ;i <n ;i++)
    {
        for(j = 0 ; j<i;j++)
        {
            if(a[j] > a[i])
            {
                break;
            }
        }
        int x = a[i];
        int k = 0;
        for (k = i-1 ; k>=j;k--)
        {
            a[k+1] = a[k];
        }
        a[j] = x;
    }
    for(i = 0 ; i<n ;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}