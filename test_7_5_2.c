/**
  ******************************************************************************
  * @file           : test_7_5_2.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/5
  ******************************************************************************
  */

/*
 *
 * 选择排序
 */
#include<stdio.h>

#include<stdint.h>
#define N 10
// int main()
// {
//     int a[N] = {0};
//     printf("请输入十个正整数:\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0;i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i = 0; i < N - 1; i++)
//     {
//
//         int max_index ;
//         int max = INT32_MIN;
//         for(j = 0; j < N - i;j++)
//         {
//             if(a[j] > max)
//             {
//                 max = a[j];
//                 max_index  = j;
//             }
//         }
//         if( max_index != N - 1 -i)
//         {
//             int temp = a[max_index];
//             a[max_index] = a[N - 1 -i];
//             a[N -1 - i] = temp;
//         }
//     }
//     for(i = 0;i < N ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//   return 0;
// }

/*
 *
 *二分法查找数组中的某个数(必须是有序的升序)
 */
// int main()
// {
//     int a[N] = {0};
//     printf("请输入十个正整数:\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0;i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int left = 0;
//     int right = N - 1;
//     int x = 0;
//     printf("请输入你要查找的数:\n");
//     scanf("%d",&x);
//     while (left <= right)
//     {
//         int mid = (left+right) / 2;
//         if(a[mid] > x)
//         {
//             right = mid - 1;
//         }
//         else if(a[mid] < x)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             printf("找到了该数!\n");
//             break;
//         }
//     }
//     if(left>right)
//     {
//         printf("没有找到!\n");
//     }
//
//     return 0;
// }

/*
 *
 *插入排序--遍历的方式
 *
 */
// int main()
// {
//     int a[N] = {0};
//     printf("请输入十个正整数:\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0;i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i = 1 ; i <= N - 1;i++)
//     {
//         for(j = 0; j < i; i++)
//         {
//             if(a[i] > a[j])
//             {
//                 break; // 如果找到了,下标位置就是i,如果没找到的话下标就是i
//             }
//                         //a.break中途找到了,此时插入的下标的位置就是i
//                         //b.如果没有找到,循环正常结束,此时插入的位置是最后面,下标为j
//             int x = a[i];
//             int k = 0;
//             for (k = i -1; k >= j ; k--)
//             {
//                 a[k+1] = a[k];
//             }
//             a[j] = x;
//         }
//     }
//     for(i = 0;i < N ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
/*
 *
 *插入排序--二分查找的方式
 *
 */
/*
 *定义一个Insert函数
 * @a：数组名
 * @n：数组的元素个数
 * @x：要插入的数据
 */
void Insert(int a[],int n,int x)
{
  int i = 0;
  int l = 0;
  int r = n - 2;//因为给数组赋值多少个元素的时候，会多预留一个空间，那么最右边的下边就需要多减一
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if(a[mid] > x)
    {
     r = mid - 1;
    }
   else if( a[mid] < x)
   {
     l = mid + 1;
   }
  }
  //找到了要插入的位置的坐标就是 l ，那么就像进行插入操作
  for(i = n - 2 ; i>=l ; i--)
  {
    a[i+1] = a[i];
  }
  a[l] = x;
}
int main()
{
 int a[N] = {0};
 printf("请输入十个正整数:\n");
 int i = 0;
 int j = 0;
 for(i = 0;i < N ;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i = 1; i < N ;i++)
 {
   Insert(a,i + 1,a[i]);
 }
 for(i = 0;i < N ;i++)
 {
  printf("%d ",a[i]);
 }
 return 0;
}
