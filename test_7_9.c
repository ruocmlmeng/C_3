/**
  ******************************************************************************
  * @file           : test_7_9.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/9
  ******************************************************************************
  */
// #include<stdio.h>
// int main()
// {
//     int a[10][10]={0};
//     int i = 0;
//     int j = 0;
//     for (i = 0;i < 10; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             if(i== j)
//                 a[i][j] = 1;
//             if(j == 0)
//                 a[i][j] = 1;
//             if(i>=2 && j>=1)
//             {
//                 a[i][j] = a[i-1][j-1] + a[i-1][j];
//             }
//         }
//     }
//     for (i = 0;i < 10; i++)
//     {
//         // for (j = 0; j < 10 - i - 1; j++)  // ��ӡǰ��Ŀո�
//         // {
//         //     printf(" ");
//         // }
//         for (j = 0; j <=i ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
  ��ӡ���������
  1
  1 1
  1 2 1
  1 3 3 1
  1 4 6 4 1
  1 5 10 10 5 1

*/
#include<stdio.h>
// #define N 6
// /*
//   Print_YH_triangle:��ӡ�����������
//   @a	:������
//   @n	:����Ҫ��ӡ�������������
//   ����ֵ:
//       ��
// */
// void Print_YH_triangle(int a[][N],int n)
// {
//   int i = 0;
//   int j = 0;
//   //��ʼ����ά����
//   for(i = 0; i < n ; i++)
//   {
//     for(j = 0;j < n ;j++)
//     {
//       a[i][j] = 0;
//     }
//   }
//   for(i = 0; i < n;i++)
//   {
//
//     for(j = 0; j <= i ;j++)
//     {
//       if(i == j)
//       {
//         a[i][j] = 1;
//       }
//       if(j == 0)
//       {
//         a[i][j] = 1;
//       }
//       if(i >= 2 && j >=1)
//       {
//         a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//       }
//     }
//   }
//   for(i = 0; i < n; i++)
//   {
//
//     for(j = 0 ; j <=i ;j++)
//     {
//       printf("%d ",a[i][j]);
//     }
//     printf("\n");
//   }
// }
// int main()
// {
//   int a[N][N];
//   Print_YH_triangle(a,N);
//   return 0;
// }
/*
  2.дһ������,��һ�������Ķ�������ʽ���ж��ٸ�1?
*/
#include<stdio.h>

/*
  count_one:��һ�������Ķ�������ʽ�ж��ٸ�1
  @num	:���뺯��������
  ����ֵ 	: �����������ж��ĸ���
*/
// int count_one(int num)
// {
//   int i = 0;
//   int count = 0;//��¼������1�ĸ���
//   for(i = 0; i < sizeof(num)*8 ; i++)
//   {
//     if(num & (1 << i))
//     {
//       count++;
//     }
//   }
//   return count;
// }
// int main()
// {
//   int num  = 0;
//   printf("������һ������:\n");
//   scanf("%d",&num);
//   int res = count_one(num);
//   printf("%d����%d��\n",num,res);
//   return 0;
// }
// #include<stdio.h>
// #define M 3
// #define N 4
// /*
//   Is_symmesry_vertical: �ж�һ����ά�����Ƿ�ˮƽ�Գ�
//   @a	: ������
//   @n	: ��ά���������
//   ����ֵ
//     �Գ�: 1
//     ���Գ�: 0
// */
// int Is_symmesry_vertical(int a[][N],int n)
// {
//   int i = 0;
//   int j = 0;
//   int count = 0;//�ж�ˮƽһ���ж��ٶ�
//   for(i = 0; i < M ;i++)
//   {
//     for(j = 0; j < n / 2;j++)
//     {
//       if(a[i][j] == a[i][n - j -1])
//       {
//         count++;
//       }
//     }
//   }
//   if(count == M * (n / 2))
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }
/*
  Is_symmesry_level: �ж�һ����ά�����Ƿ�ˮƽ�Գ�
  @a	: ������
  @n	: ��ά���������
  ����ֵ
    �Գ�: 1
    ���Գ�: 0
*/
// int Is_symmesry_level(int a[][N],int n)
// {
//   int i = 0;
//   int j = 0;
//   int count = 0;//�жϴ�ֱһ���ж��ٶ�
//   for(i = 0; i < M / 2 ;i++)
//   {
//     for(j = 0; j < n;j++)
//     {
//       if(a[i][j] == a[M - i - 1][j])
//       {
//         count++;
//       }
//     }
//   }
//   if(count == N * (M / 2))
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }
//
// /*
//   Init_Arr: ��ʼ��һ����ά����
//   @a	: ������
//   @n	: ��ά���������
//   ����ֵ
//       ��
// */
// void Init_Arr(int a[][N],int n)
// {
//   int i = 0;
//   int j = 0;
//   for(i = 0; i < M;i++)
//   {
//     for(j = 0 ; j < n; j++)
//     {
//       scanf("%d",&a[i][j]);
//     }
//   }
// }
//
// int main()
// {
//   int a[M][N];
//   Init_Arr(a,N);
//   int res = Is_symmesry_level(a,N);
//   int res2  =Is_symmesry_vertical(a,N);
//   if(res || res2)
//   {
//     printf("�ö�ά����Ϊ�Գ�����!\n");
//   }
//   else
//   {
//     printf("�ö�ά���鲻�ǶԳ�����!\n");
//   }
//   return 0;
// }

/*
 *�õݹ�����������ĺ�
 *
 */
/*
 *
 *  sum_Arr:�ݹ�����������ĺ�
 *  @a��������
 *  @n������ĸ���
 *  ����ֵ��
 *      ��������ĺ�
 */
// #define N 5
// int sum_Arr(int a[],int n )
// {
//   if( n <= 0)
//   {
//     return 0;
//   }
//   else
//   {
//     return a[n-1] + sum_Arr(a,n - 1);
//   }
//
// }
// int main()
// {
//   int a[N];
//   int i = 0;
//   for(i = 0; i < N ;i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   int res = sum_Arr(a,N);
//   printf("����ĺ�Ϊ%d\n",res);
//   return 0;
// }
#include<stdio.h>
/*
  jiecheng:�Ӽ�������n��n�Ľ׳�
  @n 		���Ӽ��������ֵ
  ����ֵ		��
        n�Ľ׳�
*/
// int jiecheng(int n)
// {
//   if(n == 1)
//   {
//     return 1;
//   }
//   if(n > 1)
//   {
//     return n * jiecheng(n -1 );
//   }
// }
// int main()
// {
//   int n = 0;
//   scanf("%d",&n);
//   int res = jiecheng(n);
//   printf("%d! = %d\n",n,res);
//   return 0;
// }

// /*
//  *Hanio������
//  *
//  */
// /*
// *  Hanio������"��ŵ��"�Ĺ���,��n�����Ӵ�A��,�ƶ���C��,
//           �м��������B��,���ƶ��Ĳ����ӡ����!
//    @n:Ҫ�ƶ������ӵ�����
//    @A,B,C:�ƶ�������Ҫ����������
//    ����ֵ��
//         �޷���ֵ
//         ��ӡ�ƶ��Ĳ���
//  *
//  */
// void Hanio(int n,char A,char B,char C)
// {
//   if(n==0)
//   {
//     return ;
//   }
//   Hanio(n - 1,A,C,B);
//   printf("%c->%c\n",A,C);
//   Hanio(n - 1,B,A,C);
//   if(A == 'A' && B =='C' && C=='B')
//   {
//
//   }
// }
// int main()
// {
//   int n = 0;
//   scanf("%d",&n);
//   Hanio(n,'A','B','C');
//   return 0;
// }
/*
 *Hanio������
 *
 */
/*
*  Hanio������"��ŵ��"�Ĺ���,��n�����Ӵ�A��,�ƶ���C��,
          �м��������B��,���ƶ��Ĳ����ӡ����!
   @n:Ҫ�ƶ������ӵ�����
   @A,B,C:�ƶ�������Ҫ����������
   ����ֵ��
        �޷���ֵ
        ��ӡ�ƶ��Ĳ���
 *
 */
// void Hanio(int n,char A,char B,char C)
// {
//   if(n==0)
//   {
//     return ;
//   }
//   Hanio(n - 1,A,C,B);
//   printf("%c->%c\n",A,C);
//   Hanio(n - 1,B,A,C);
// }
// /*
//  *
// *    f�����պ�ŵ���Ĺ���,��n�����Ӵ�A�ƶ���C,�м��������B
//      ���ƶ�n�����ӵĲ�������ҪŲ�����ٲ�?(�����ж��ٲ���)
//      @n:�ƶ����ٸ�����
//      ����ֵ��
//           �ƶ��Ĳ���
//      ˼·��
//           ����Hanio�������ƶ�n�����ӵĲ���
//  *
//  */
// int f(int n)
// {
//   if(n == 0)
//   {
//     return 0;
//   }
//   return f(n-1) + 1 + f(n-1);
// }
// int main()
// {
//   int n = 0;
//   scanf("%d",&n);
//   Hanio(n,'A','B','C');
//   printf("�ƶ�%d�����ӵĲ���Ϊ%d\n",n,f(n));
//   return 0;
// }
// /*
//  *2.ʹ�õݹ�ķ���,��һ��һά�����Ԫ��֮��.
//  *
//  */
// /*
//  * sum_arr:��һά�����Ԫ��֮��
//  * @a:������
//  * @n���������
//  * ����ֵ��
//  *    ����Ԫ�صĺ�
//  */
// #define N 5
// int sum_arr(int a[],int n)
// {
//     if(n > 0)
//     {
//         return a[n-1] + sum_arr(a,n-1);
//     }
//     if(n == 0)
//     {
//         return 0;
//
//     }
// }
// int main()
// {
//     int a[N];
//     int i = 0;
//     for(i = 0 ; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int sum = sum_arr(a,N);
//     printf("sum == %d\n",sum);
//     return 0;
// }
/*
 *
 * 1.�õݹ�ķ���,���ж�һ��һά�����Ƿ����!
 */
/*
 *  Is_rise:�ж�һ��һά�����Ƿ����
 *  @a:һά������
 *  @n:����Ԫ�ظ���
 *  ����ֵ��
 *        1 -> ����
 *        0 -> ������
 */
#define N 5
int Is_rise(int a[],int n )
{
    if(n == 1)
    {
        return 1;
    }
    if(n > 1)
    {
        return Is_rise(a,n-1) && a[n-1] > a[n-2];
    }
}
int main()
{
    int a[N];
    int i = 0;
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    int res = Is_rise(a,N);
    if(res == 1)
    {
        printf("����!\n");
    }
    else if(res == 0)
    {
        printf("������!\n");
    }
    return 0;
}


// /*
//  *
//  * 3.ʹ�õݹ�ķ���,��쳲��������е�n���.
//  */
// #define N 6
// int  Init_fib(int n);
// /*
//  *  fib :��쳲��������е�n��ĺ�
//  *  @n  :�����쳲��������еĸ���
//  *  ����ֵ:
//  *         쳲��������е�n��ĺ�
//  */
// int fib(int n)
// {
//    int i = 0;
//    int sum = 0;
//    for(i = 1 ; i <= n;i++)
//    {
//      sum+=Init_fib(i);
//    }
//   return sum;
// }
// /*
//  *  Init_fib :���n��쳲���������
//  *  @n  :���������n��쳲�������
//  *  ����ֵ:
//  *         ��n��쳲�������
//  */
// int  Init_fib(int n)
// {
//       if(n >0 && n <=2)
//       {
//        return 1;
//       }
//       if(n > 2)
//       {
//        return Init_fib(n-1) + Init_fib(n-2);
//       }
// }
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int sum = fib(n);
//     printf("쳲��������е�%d���Ϊ%d\n",n,sum);
//     return 0;
// }