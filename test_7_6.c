/**
  ******************************************************************************
  * @file           : test_7_6.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/6
  ******************************************************************************
  */
#include<stdio.h>

#include <stdint.h>

/*
 *
 *选择排序
 *
 */
// #define N 10
// int main()
// {
//   int a[N];
//   printf("请输入十个数：\n");
//   int i = 0;
//   for(i = 0 ; i < N ;i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   for(i = 0; i < N -1; i ++)
//   {
//     int j = 0;
//     int max_index = 0;
//     int max = INT32_MIN;
//     for (j = 0; j < N - i;j++)
//     {
//       if(a[j] > max)
//       {
//         max = a[j];
//         max_index = j;
//       }
//     }
//     if(max_index != N - 1 - i)
//     {
//       int temp = a[max_index];
//       a[max_index] = a[N - 1 - i];
//       a[N - 1 - i] = temp;
//     }
//   }
//   for(i = 0 ; i < N ;i++)
//   {
//     printf("%d",a[i]);
//   }
//   return 0;
// }

/*
 *
 *插入排序-以遍历的方式
 *
 */
// #define N 10
// int main()
// {
//     int a[N];
//     printf("请输入十个数：\n");
//     int i = 0;
//     for(i = 0 ; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int x = 0;//以用来备份待插入的值
//     for(i = 1; i < N ; i++)
//     {
//         int j = 0;
//         for(j = 0 ; j < i ;j++)
//         {
//             if(a[j] > a[i])
//             {
//                 //找到了，下标位置就是j
//                 break;
//             }
//         }
//         x = a[i];
//         int k = 0;
//         for(k = i - 1; k >= j;k--)
//         {
//             a[k+1] = a[k];
//         }
//         a[j] = x;
//     }
//     for(i = 0 ; i < N ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
/*
 *
 *二分查找
 *
 */
// #define N 10
// int main()
// {
//     int a[N];
//     printf("请输入十个数：\n");
//     int i = 0;
//     for(i = 0 ; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("请输入x:\n");
//     int x = 0;
//     scanf("%d",&x);
//     int l = 0;
//     int r = N - 1;
//     while(l <= r)
//     {
//         int mid = (r + r) / 2;
//         if(a[mid] > x)
//         {
//             r = mid - 1;
//         }
//         else if(a[mid] < x)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             break;
//         }
//     }
//     if(l <= r)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//
//     return 0;
// }
/*
 *
 *插入排序-以二分查找的形式
 *
 */
/*
 * 定义一个Insert函数
 * @a：数组名
 * @n：数组元素的个数
 * @x：要二分查找插入的数
 */
// void Insert(int a[],int n,int x)
// {
//   int l = 0;
//   int r = n - 2;
//   while (l <=r)
//   {
//    int mid = (l + r ) / 2;
//    if(a[mid] > x)
//    {
//     r = mid - 1;
//    }
//    else if(a[mid] < x)
//    {
//     l = mid + 1;
//    }
//   }
//   //找到了之后就进行插入操作
//   int k = 0;
//   for(k = n - 2 ; k >=l;k--)
//   {
//    a[k+1] = a[k];
//   }
//   a[l] = x;
// }
// #define N 10
// int main()
// {
//  int a[N];
//  printf("请输入十个数：\n");
//  int i = 0;
//  for(i = 0 ; i < N ;i++)
//  {
//   scanf("%d",&a[i]);
//  }
//  for (i = 1; i < N ;i++)
//  {
//    Insert(a,i+1,a[i]);
//  }
//  for(i = 0 ; i < N ;i++)
//  {
//   printf("%d ",a[i]);
//  }
//  return 0;
// }
/*
 *
 *
  6.(选做) 数组部分和的问题
  假设有一个数组a[N] N<=20
  能不能从数组a中任选M个元素(M<=N),使得其和为K.
  M,k都是由用户输入
 *
 */

// int main() {
//  int N, M, K;
//  printf("请输入数组长度N (N<=20): ");
//  scanf("%d", &N);
//  int a[N];
//  printf("请输入数组元素: ");
//  for (int i = 0; i < N; i++) {
//   scanf("%d", &a[i]);
//  }
//  printf("请输入子集元素个数M (M<=N): ");
//  scanf("%d", &M);
//  printf("请输入目标和K: ");
//  scanf("%d", &K);
//
//  int totalSubsets = 1 << N;  // 2^N个子集
//  for (int i = 0; i < totalSubsets; i++) {//循环每个子集
//   int sum = 0;
//   int count = 0;
//   for (int j = 0; j < N; j++) {
//    if (i & (1 << j)) {  // 判断第j位是否为1
//     sum += a[j];
//     count++;
//    }
//   }
//   if (count == M && sum == K) {
//    printf("存在一个子集和为 %d\n", K);
//    return 0;
//   }
//  }
//
//  printf("不存在满足条件的子集\n");
//  return 0;
// }

/**
 *
 * 设计一个函数，求一个整型的二进制形式中，有多少个1
 */
/*
 *
 * num:求一个整型二进制，有多少个1
 * @x：输入的整数
 * 返回值：count>=0 返回1的个数
 */
// int num(int x)
// {
//   int i = 0;
//   int count = 0;
//   for(i = 0; i < sizeof(x) *8 ;i++)
//   {
//     if(x & (1<<i))
//     {
//      count++;
//     }
//   }
//  return count;
// }
// int main()
// {
//   int x = 0;
//   printf("输入一个整数:\n");
//   scanf("%d",&x);
//   int res = num(x);
//   printf("%d的二进制形式中有%d个1\n",x,res);
//   return 0;
// }
/*
 *   IsArray:判断一个一维的Int类型的数组，是否有序
 *   @a:函数名
 *   @n:函数的个数
 *   返回值：
 *        0：不是有序
 *        1 ：有序
 */
// int  IsArray(int a[],int n)
// {
//  int i = 0;
//  for (i = 0; i < n - 1;i++)
//  {
//      int j = 0;
//      for(j = i + 1; j < n ; j++)
//      {
//        if(a[j] < a[i])
//        {
//          return 0;
//        }
//      }
//  }
//  return 1;
// }
// int main()
// {
//   int a[5] = {0};
//   int i = 0;
//   for (i = 0; i < 5; i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   int res = IsArray(a,5);
//   if(res)
//   {
//    printf("该数组为有序数组\n");
//   }
//   else
//   {
//   printf("该数组为无序数组\n");
//   }
//   return 0;
// }
// int  IsArray(int a[],int n)
// {
//  int i = 0;
//  for (i = 0; i < n - 1;i++)
//  {
//   int j = 0;
//   for(j = i + 1; j < n ; j++)
//   {
//    if(a[j] < a[i])
//    {
//     return 0;
//    }
//   }
//  }
//  return 1;
// }
// int main()
// {
//  int a[5] = {0};
//  int i = 0;
//  for (i = 0; i < 5; i++)
//  {
//   scanf("%d",&a[i]);
//  }
//  int res = IsArray(a,5);
//  if(res)
//  {
//   printf("该数组为有序数组\n");
//  }
//  else
//  {
//   printf("该数组为无序数组\n");
//  }
//  return 0;
// }

int  IsArray(int a[],int n)
{
 int i = 0;
 for (i = 0; i < n - 1;i++)
 {
  int j = 0;
  for(j = i + 1; j < n ; j++)
  {
   if(a[j] < a[i])
   {
    return 0;
   }
  }
 }
 return 1;
}
int main()
{
 int a[5] = {0};
 int i = 0;
 for (i = 0; i < 5; i++)
 {
  scanf("%d",&a[i]);
 }
 int res = IsArray(a,5);
 if(res)
 {
  printf("该数组为有序数组\n");
 }
 else
 {
  printf("该数组为无序数组\n");
 }
 return 0;
}
