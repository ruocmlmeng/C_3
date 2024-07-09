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
//         // for (j = 0; j < 10 - i - 1; j++)  // 打印前面的空格
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
  打印杨辉三角形
  1
  1 1
  1 2 1
  1 3 3 1
  1 4 6 4 1
  1 5 10 10 5 1

*/
#include<stdio.h>
#define N 6
/*
  Print_YH_triangle:打印出杨辉三角形
  @a	:数组名
  @n	:传入要打印多少行杨辉三角
  返回值:
      无
*/
void Print_YH_triangle(int a[][N],int n)
{
  int i = 0;
  int j = 0;
  //初始化二维数组
  for(i = 0; i < n ; i++)
  {
    for(j = 0;j < n ;j++)
    {
      a[i][j] = 0;
    }
  }
  for(i = 0; i < n;i++)
  {

    for(j = 0; j <= i ;j++)
    {
      if(i == j)
      {
        a[i][j] = 1;
      }
      if(j == 0)
      {
        a[i][j] = 1;
      }
      if(i >= 2 && j >=1)
      {
        a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
      }
    }
  }
  for(i = 0; i < n; i++)
  {

    for(j = 0 ; j <=i ;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int a[N][N];
  Print_YH_triangle(a,N);
  return 0;
}
