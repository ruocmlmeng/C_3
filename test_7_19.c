/**
  ******************************************************************************
  * @file           : test_7_19.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/19
  ******************************************************************************
  */
#include<stdio.h>
// #define size_arr(a) sizeof(a) /sizeof(a[0])
// /*
//  * 写一个宏，求一个整数x中的第n位
//  * 表达式： (x>>n & 1)
//  * 宏    ： num_n(x,n)
//  */
// #define num_n(x,n) ((x>> n) &1)
// // #define MAX(a,b)  (a) > (b) ? (a) : (b)
// #define MAX(a,b) ({\
//         typeof(a) _a = a;\
//         typeof(b) _b = b;\
//         (_a)  > (_b) ? (_a) : (_b);\
//     })
// int main()
// {
//   // int a[10];
//   // printf("%d\n",size_arr(a));
//   // printf("%d\n",num_n(8,3));
//     int i = 6;
//     int j = 5;
//     int  m = MAX(i++,j);
//     printf("%d %d %d\n",i,j,m);
//     return 0;
// }
/**
 *
 * 1.求两个数的"最大公约数"和"最小公倍数".
 */