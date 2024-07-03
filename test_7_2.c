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
int main()
{
  int i = 0;
  int sum = 0;//记录正整数
  int num = 0;
  scanf("%d",&num);
  for(i = 1; i < num;i++)
  {
    int j = 0;
    for(j = i; j < num ;i++)
    {
      sum = sum + j;
      if(sum == num)
      {
        printf("%d\n", j);
        break;
      }
    }
    sum = 0;
  }
  return 0;
}
