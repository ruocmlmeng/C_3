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
//     printf("��˾���������Ϊ:\n");
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
//     printf("����Ϊ%d\n",money);
//     return 0;
// }
// int main()
// {
//   double num1 = 0;
//   double num2 = 0;
//   char ch = 0;
//   double res = 0;
//   printf("��������Ҫ���еĲ���: (����: 1+2) \n");
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
//       printf("��������������!����������.\n");
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
//     int flag = 0;//��¼ÿ��λ��������
//     int sum = 0;//��¼ÿ��λ�������ݵĺ�
//     for(i = 100; i <1000;i++)
//     {
//         sum = 0;
//         int res = i;//����i
//         //�����λ��ʮλ����λ
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
  // �ȴ���2�����
  while (n % 2 == 0) {
    printf("%d ", 2);
    n /= 2;
  }

  // �������������
  for (int i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }

  // ���n��һ�������Ҵ���2
  if (n > 2) {
    printf("%d", n);
  }
}

int main() {
  int n;
  printf("������һ��������: ");
  scanf("%d", &n);
  printf("������Ϊ: ");
  primeFactors(n);
  return 0;
}
