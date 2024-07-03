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



void primeFactors(int n) {
  // 先处理2的情况
  while (n % 2 == 0) {
    printf("%d ", 2);
    n /= 2;
  }

  // 处理奇数的情况
  for (int i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }

  // 如果n是一个质数且大于2
  if (n > 2) {
    printf("%d", n);
  }
}

int main() {
  int n;
  printf("请输入一个正整数: ");
  scanf("%d", &n);
  printf("质因数为: ");
  primeFactors(n);
  return 0;
}
