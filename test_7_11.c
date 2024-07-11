/**
  ******************************************************************************
  * @file           : test_7_11.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/11
  ******************************************************************************
  */
#include<stdio.h>
/*
 *
 * 求最大公约数:欧几里得算法
 */
/*
 *  Gcd：求两个数的最大公约数
 *  @x,y:要求的两个数
 *  返回值：
 *      两个数的最大公约数
 */
// int Gcd(int x,int y)
// {
//     int z = 0;
//     while (y)
//     {
//         z =  x  % y;
//         x = y;
//         y = z;
//     }
//     return x;
// }
// int main()
// {
//     int x = 0;
//     int y = 0;
//     scanf("%d%d",&x,&y);
//     int res = Gcd(x,y);
//     printf("%d与%d的最大公约数是%d\n",x,y,res);
//     return 0;
// }
/*
 *
 * 求最大公因数-定义法
 */
// #define min(a,b) (a < b) ? ( a) : (b)
// int main()
// {
//  int x = 0;
//  int y = 0;
//  scanf("%d%d",&x,&y);
//  int res = min(x,y);
//  int  i = 0;
//  for (i = res ; i >= 1 ;i--)
//  {
//   if(x % i == 0 && y % i == 0)
//   {
//     printf("最大公约数是%d\n",i);
//     break;
//   }
//  }
//  return 0;
// }
/**
 * 最小公约数
 */
// #define min(a,b) (a < b) ? (a) : (b)
// int main()
// {
//   int a = 0;
//   int b = 0;
//   scanf("%d%d",&a,&b);
//   int res = min(a,b);
//   int i = 0;
//   for(i = min(a,b); i <= a*b;i++)
//   {
//    if(i % a == 0 && i % b == 0)
//    {
//      printf("最小公倍数是%d\n",i);
//     break;
//    }
//   }
//   return 0;
// }
/*
 *
 * 错误
 */
// #define min(a,b) (a < b) ? (a) : (b)
// int main()
// {
//  int a = 0;
//  int b = 0;
//  scanf("%d%d",&a,&b);
//  int res = min(a,b);
//  int i = 0;
//  for(i = a*b ; i >= min(a,b);i--)
//  {
//   if(i % a == 0 && i % b == 0)
//   {
//    printf("最小公倍数是%d\n",i);
//   }
//  }
//  return 0;
// }
#include<stdio.h>
// int main()
// {
//  int a = 1024;
//  int* p = &a;
//  printf("a == %d\n",a);
//  printf("*&a == %d\n",*&a);
//  printf("*p == %d\n",*p);
//  printf("&a == %p\n",&a);
//  printf("p == %p\n",p);
//  return 0;
// }
/**
 *
 * func:交换两个数的值
 * @a,b:带交换的两个值
 * 返回值:
 *    无返回值
 */
// void func(int* a,int *b)
// {
//      int temp = *a;
//       *a = *b;
//       *b = temp;
// }
// int main()
// {
//  int a = 5;
//  int b = 6;
//  func(&a,&b);//调用这个func函数,目的是为了交换变量a和变量b的值
//  printf("a == %d \n",a);//a == 6
//  printf("b == %d\n",b);//b ==5
// }
int main()
{
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int *p = &a[3];
  p = p -3;
  int i = 0;
  int sum = 0;
  for(i = 0; i < 10; i++)
  {
    sum = sum + *(p + i);
  }
 printf("%d\n",sum);
  return 0;
}