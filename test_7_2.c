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
int main()
{
  double num1 = 0;
  double num2 = 0;
  char ch = 0;
  double res = 0;
  printf("请输入你要进行的操作: (例如: 1+2) \n");
  scanf("%lf%c%lf",&num1,&ch,&num2);
  switch(ch)
  {
    case '+':
      res = num1 + num2;
    break;
    case '-':
      res = num1 - num2;
    break;
    case '*':
      res = num1 * num2;
    break;
    case '/':
      res =  num1 / num2;
    break;
    case '%':
      res = (int )num1 % (int )num2;
    break;
    default:
      printf("输入的运算符错误!请重新输入.\n");
    break;
  }
  printf("%.1lf %c %.1lf = %.1lf\n",num1,ch,num2,res);
  return 0;
}
