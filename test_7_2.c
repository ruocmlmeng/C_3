/**
  ******************************************************************************
  * @file           : test_7_2.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/2
  ******************************************************************************
  */
#include <stdio.h>
// int main()
// {
//     int I = 0;
//     int money = 0;
//     printf("公司今年的利润为:\n");
//     scanf("%d",&I);
//
//     switch(I / 100000)
//     {
//         case 0:
//             money = I * 0.1;
//         break;
//         case 1:
//             money = 100000 * 0.1 + (I - 100000) * 0.075;
//         break;
//         case 2:
//         case 3:
//                 money = 100000 *  0.1 + (200000 - 100000) *0.075 + (I - 200000) * 0.05;
//         break;
//         case 4:
//         case 5:
//                 money = 100000 *  0.1  + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (I - 400000)*  0.03;
//         break;
//         default:
//             if(I <=10000000)
//             {
//                 money = 100000 *  0.1  + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000)*  0.03 + (I - 600000) * 0.015;
//             }
//             else
//             {
//                 money = 100000 *  0.1  + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000)*  0.03 + (1000000 - 600000) *  0.015 + (I - 1000000) *0.01;
//             }
//     }
//
//     printf("奖金为%d\n",money);
//     return 0;
// }
// int main()
// {
//   double num1 = 0;
//   double num2 = 0;
//   char ch = 0;
//   double res = 0;
//   printf("请输入你要进行的操作: (例如: 1+2) \n");
//   scanf("%lf%c%lf",&num1,&ch,&num2);
//   switch(ch)
//   {
//     case '+':
//       res = num1 + num2;
//     break;
//     case '-':
//       res = num1 - num2;
//     break;
//     case '*':
//       res = num1 * num2;
//     break;
//     case '/':
//       res =  num1 / num2;
//     break;
//     case '%':
//       res = (int )num1 % (int )num2;
//     break;
//     default:
//       printf("输入的运算符错误!请重新输入.\n");
//     break;
//   }
//   printf("%.1lf %c %.1lf = %.1lf\n",num1,ch,num2,res);
//   return 0;
// }
// int main()
// {
//   int j = 0;
//   int i = 10;
//   if( j = 0)
//     i++;
//   else
//     i--;
//   printf("%d\n",i);
//
//   return 0;
// }
// int main()
// {
//     int i = 0;
//     int flag = 0;//记录每个位的三次幂
//     int sum = 0;//记录每个位的三次幂的和
//     for(i = 100; i <1000;i++)
//     {
//         sum = 0;
//         int res = i;//备份i
//         //求出个位，十位，百位
//         while(res)
//         {
//             flag = res % 10;
//             sum = sum + flag * flag *flag;
//             res = res / 10;
//             flag = 0;
//         }
//         if(sum == i)
//         {
//             printf("%d ",i);
//         }
//
//     }
//     printf("\n");
//     return 0;
//
// }



// void primeFactors(int n) {
//   // 先处理2的情况
//   while (n % 2 == 0) {
//     printf("%d ", 2);
//     n /= 2;
//   }
//
//   // 处理奇数的情况
//   for (int i = 3; i * i <= n; i += 2) {
//     while (n % i == 0) {
//       printf("%d ", i);
//       n /= i;
//     }
//   }
//
//   // 如果n是一个质数且大于2
//   if (n > 2) {
//     printf("%d", n);
//   }
// }
//
// int main() {
//   int n;
//   printf("请输入一个正整数: ");
//   scanf("%d", &n);
//   printf("质因数为: ");
//   primeFactors(n);
//   return 0;
// }
// void primeFactors(int n) {
//   int i = 2;
//   while (n != 1) {
//     if (n % i == 0) {
//       printf("%d ", i);
//       n /= i;
//     } else {
//       i++;
//     }
//   }
// }
//
// int main() {
//   int n;
//   printf("请输入一个正整数: ");
//   scanf("%d", &n);
//   printf("质因数为: ");
//   primeFactors(n);
//   return 0;
// }
#include<math.h>
// int main()
// {
//   printf("%lld\n",(long long )pow(1024,655));
//   return 0;
// }
// int main()
// {
//
//   long long num = 1024;
//   long long res = (long long ) pow(num,655);
//   int i = 0;
//   for(i = 0 ; i < 3; i++)
//   {
//
//     printf("%lld ",(long long )(res % 10));
//     res = (long long ) (res / 10);
//   }
//   return 0;
// }
// int main() {
//   int base = 1024;
//   int exp = 655;
//   int mod = 1000;
//   int result = 1;
//
//   for (int i = 0; i < exp; i++) {
//     result = (result * base) % mod;
//   }
//
//   printf("1024的655次方的最后三位数是: %d\n", result);
//   return 0;
// }
// 快速幂取模函数
// unsigned long long powerMod(unsigned long long base, unsigned long long exp, unsigned long long mod) {
//   unsigned long long result = 1;
//   base = base % mod;
//   while (exp > 0) {
//     if (exp % 2 == 1) {
//       result = (result * base) % mod;
//     }
//     exp = exp >> 1;
//     base = (base * base) % mod;
//   }
//   return result;
// }
//
// int main() {
//   unsigned long long base = 1024;
//   unsigned long long exp = 655;
//   unsigned long long mod = 1000;
//   unsigned long long result = powerMod(base, exp, mod);
//   printf("1024的655次方的最后三位数是: %llu\n", result);
//   return 0;
// }
// int main() {
//   int x, y, p, n;
//   printf("说明：底数为x,幂为y，请输入:\n");
//   printf("x=");
//   scanf("%d", &x);
//   printf("y=");
//   scanf("%d", &y);
//   p = 1;
//   for(n = 1; n <= y; n++) {
//     p=p*x%1000; //关键是掌握这句话的意思，最后三位永远只与其乘数的最后三位相关，故只保留最后三位，以免溢出！
//     printf("%3d:  p=%3d \n", n, p);//若不需要输出过程，则不需要此行代码
//   }
//   printf("%d的%d次方的最后三位是：%3d\n", x, y, p);
//   return 0;
// }