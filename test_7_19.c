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
//  * дһ���꣬��һ������x�еĵ�nλ
//  * ���ʽ�� (x>>n & 1)
//  * ��    �� num_n(x,n)
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
 * 1.����������"���Լ��"��"��С������".
 * m % n ==0
 * n��m������
 * l % n == 0
 * n��l������
 * (1,m,l�е���Сֵ)
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
//     printf("�������%d\n",gcd);
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
//             printf("�������%d\n",i);
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
//     printf("���Լ����%d\n",b);
//     return 0;
// }

/*
 *
 * ��С������
 * m % n == 0;
 * m % l == 0;
 * m ����С������
 * [n,l����С����һ��,n* l]
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
//             printf("��С������%d\n",i);
//             break;
//         }
//     }
//
//     return 0;
// }
/*
 *   ��100000000!(һ��)ĩβ�ж��ٸ�0?
 *   0�Ļ�����2*5 = 10 ĩβ����һ��0��
 *   Ȼ��ֽ�������֮���2�ĸ������Ա�5��
 *   ��ô����5�ĸ���,��һ��5�ĸ�����Ҫ�ɵ�һ��5
 *
 */
// int main()
// {
//     int i = 0;
//     int count = 0;//����5�ĸ���
//     for(i = 5 ; i<= 100000000;i+=5)
//     {
//         int m = i;
//          while(m % 5 == 0)
//          {
//            count++;
//            m = m / 5;
//          }
//     }
//     printf("һ�ں�����%d��0\n",count);
//     return 0;
// }

/*
 *
 *    1024��655�η��������λ���Ƕ���?
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