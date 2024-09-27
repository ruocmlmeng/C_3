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
 * m % n ==0
 * n是m的因数
 * l % n == 0
 * n是l的因数
 * (1,m,l中的最小值)
 */
// #define min(a,b) ( (a) < (b) ? (a) : (b))
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     int x = min(a,b);
//     int i = 0;
//     int gcd = 1;
//     for(i = 1; i <= min(a,b) ;i++)
//     {
//         if(a % i == 0 && b % i == 0)
//         {
//             gcd = i;
//         }
//     }
//     printf("最大公因数%d\n",gcd);
//     return 0;
// }
// #define min(a,b) ( (a) < (b) ? (a) : (b))
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     int x = min(a,b);
//     int i = 0;
//
//     for(i = min(a,b); i>=1 ;i--)
//     {
//         if(a % i == 0 && b % i == 0)
//         {
//             printf("最大公因数%d\n",i);
//             break;
//         }
//     }
//
//     return 0;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     if(a > b)
//     {
//         int temp = a;
//         a = b;
//         b = temp;
//     }
//     int r = a % b;
//     while(r)
//     {
//         a = b;
//         b = r;
//         r = a % b;
//     }
//     printf("最大公约数是%d\n",b);
//     return 0;
// }

/*
 *
 * 最小公倍数
 * m % n == 0;
 * m % l == 0;
 * m 是最小公倍数
 * [n,l中最小的那一个,n* l]
 */
// #define max(a,b) ( (a) > (b)  ? (a) : (b))
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d%d",&a,&b);
//     int i = 0;
//     for(i = max(a,b); i <= a*b ;i++)
//     {
//         if(i % a == 0 && i % b == 0)
//         {
//             printf("最小公倍数%d\n",i);
//             break;
//         }
//     }
//
//     return 0;
// }
/*
 *   求100000000!(一亿)末尾有多少个0?
 *   0的话就是2*5 = 10 末尾就有一个0嘛
 *   然后分解质因数之后的2的个数绝对比5多
 *   那么就求5的个数,求一个5的个数就要干掉一个5
 *
 */
// int main()
// {
//     int i = 0;
//     int count = 0;//计算5的个数
//     for(i = 5 ; i<= 100000000;i+=5)
//     {
//         int m = i;
//          while(m % 5 == 0)
//          {
//            count++;
//            m = m / 5;
//          }
//     }
//     printf("一亿后面有%d个0\n",count);
//     return 0;
// }

/*
 *
 *    1024的655次方的最后三位数是多少?
 */
// int main()
// {
//  int i = 0;
//  int p = 1;
//  for(i = 1; i <= 655 ;i++)
//  {
//   p = p * 1024 %1000;
//  }
//  printf("%d\n",p);
//  return 0;
// }
#include <stdio.h>

// int main() {
//  short val = 0x1234;
//  unsigned char *p = (unsigned char *)&val;
//
//  printf("Memory representation: ");
//  for (int i = 0; i < sizeof(short); i++) {
//   printf("%02x ", p[i]);
//  }
//  printf("\n");
//
//  return 0;
// }

#include <stdio.h>

// int main() {
//  short val = 0x1234;
//  unsigned char *p = (unsigned char *)&val;
//
//  printf("Memory representation: ");
//  for (int i = 0; i < sizeof(short); i++) {
//   printf("%02x ", p[i]);
//  }
//  printf("\n");
//
//  return 0;
// }
#include <stdio.h>

// int main() {
//  short val = 0x1234;
//  unsigned char *p = (unsigned char *)&val;
//
//  printf("Memory representation: ");
//  for (int i = 0; i < sizeof(short); i++) {
//   printf("%02x ", p[i]);
//  }
//  printf("\n");
//
//  return 0;
// }