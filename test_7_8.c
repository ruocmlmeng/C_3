/**
  ******************************************************************************
  * @file           : test_7_8.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/8
  ******************************************************************************
  */
#include<stdio.h>
/*
 *
 * ��ά��������л���
 */
// #define M 3
// #define N 4
// int main()
// {
//     int a[M][N];
//     int b[N][M];
//     printf("������һ����ά���飺\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0; i < M; i++)
//     {
//         for(j = 0; j < N ;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     //���л���
//     for(i = 0; i < M; i++)
//     {
//         for(j = 0; j < N ;j++)
//         {
//             b[j][i] = a[i][j];
//         }
//     }
//     for(i = 0; i < N; i++)
//     {
//         for(j = 0; j < M ;j++)
//         {
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
 *
 * ����ĳ˷�
 */
// void arr(int a[][],int row,int col)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col ;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
// }
// int main()
// {
//     int row1 = 0;
//     int col1 = 0;
//     int row2 = 0;
//     int col2 = 0;
//     printf("�������һ�������к���:");
//     scanf("%d%d",&row1,&col1);
//     int i = 0;
//     int j = 0;
//     for ()
//     return 0;
// }
/*
 *
 *     1.��һ����ά������ɽ��Ԫ�صĸ���.
        ɽ��:�˴�����Χ��,����ɽ��.
    ��:
        1 2 3 4
        4 3 2 1
        0 4 1 8
    ��������4
 */
// #define M 5
// #define N 6
// #include <stdint.h>
// int main()
// {
//     /* ���Խ������һȦINT32_MIN */
//     int a = INT32_MIN;
//     int arr[M][N] ={
//         {a,a,a,a,a,a},
//         {a,1,2,3,4,a},
//         {a,4,3,2,1,a},
//         {a,0,4,1,8,a},
//         {a,a,a,a,a,a}
//     };
//     int i = 0;
//     int j = 0;
//     int count = 0;//��¼ɽ��Ԫ�صĸ���
//     for(i = 1; i < M -1 ;i++)
//     {
//         for(j = 1; j < N -1;j++)
//         {
//
//             if(arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i][j-1]&&arr[i][j]>
//                 arr[i][j+1]&&arr[i][j]>arr[i+1][j])
//             {
//                 count++;
//             }
//
//
//         }
//     }
//     printf("count == %d\n",count);
//     return 0;
// }
/*
 1.��һ����ά�����еİ���(��һ�����,��һ����С)
    1 2 3 4
    5 6 7 8
    9 10 11 12
*/
#define M 3
#define N 4
int main()
{
 int a[M][N];
 int i = 0;
 int j = 0;
 printf("������һ����ά���飺\n");
 for(i = 0; i < M;i++)
 {
  for(j = 0; j < N;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 int max = a[0][0];
 int min = a[0][0];
 int flag = 0;//����������ֵ����
 for(i = 0;i< M; i++)
 {
  flag = 0;
  for(j = 0 ; j < N;j++)
  {
   if(a[i][j] > max)
   {
    max = a[i][j];
    flag = j;
   }
  }
  min = a[0][flag];
  int k = 0;
  for (k = i + 1; k< M ;k++)
  {
    if(a[k][flag] < min )
    {
     min = a[k][flag];
    }
  }
  printf("%d %d \n",max,min);
  if(min == max)
  {
   printf("%d\n",max);
  }
 }
 return 0;
}
