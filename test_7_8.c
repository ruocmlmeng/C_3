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
 * 二维数组的行列互换
 */
// #define M 3
// #define N 4
// int main()
// {
//     int a[M][N];
//     int b[N][M];
//     printf("请输入一个二维数组：\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0; i < M; i++)
//     {
//         for(j = 0; j < N ;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     //行列互换
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
 *     1.求一个二维数组中山顶元素的个数.
        山顶:此处比周围高,就是山顶.
    如:
        1 2 3 4
        4 3 2 1
        0 4 1 8
    个数就是4
 */
// #define M 5
// #define N 6
// #include <stdint.h>
// int main()
// {
//     /* 可以将外面加一圈INT32_MIN */
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
//     int count = 0;//记录山顶元素的个数
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
 1.求一个二维数组中的鞍点(这一行最大,这一列最小)
    1 2 3 4
    5 6 7 8
    9 10 11 12
*/
// #define M 3
// #define N 4
// int main()
// {
//  int a[M][N];
//  int i = 0;
//  int j = 0;
//  printf("请输入一个二维数组：\n");
//  for(i = 0; i < M;i++)
//  {
//   for(j = 0; j < N;j++)
//   {
//    scanf("%d",&a[i][j]);
//   }
//  }
//  int max = a[0][0];
//  int min = a[0][0];
//  int flag = 0;//用来标记最大值的列
//  for(i = 0;i< M; i++)
//  {
//   flag = 0;
//   for(j = 0 ; j < N;j++)
//   {
//    if(a[i][j] > max)
//    {
//     max = a[i][j];
//     flag = j;
//    }
//   }
//   min = a[0][flag];
//   int k = 0;
//   for (k = i + 1; k< M ;k++)
//   {
//     if(a[k][flag] < min )
//     {
//      min = a[k][flag];
//     }
//   }
//   printf("%d %d \n",max,min);
//   if(min == max)
//   {
//    printf("%d\n",max);
//   }
//  }
//  return 0;
// }
/*
2.占座位的问题.
  如:
    1 1 0 0 0 0 1 1 0 0 0
    0 0 0 0 1 1 0 0 0 0 1
    1 0 1 0 0 0 1 1 0 0 0
    0 0 0 1 1 1 0 0 0 0 0
    输入3: 3 表示连续的3个空位,不能够换行
    输出: 17
*/
// #include<stdio.h>
// #define M 4
// #define N 12
// int main()
// {
//  int a[M][N] = {
//   {1,1,0,0,0,0,0,1,1,0,0,0},
//   {0,0,0,0,0,1,1,0,0,0,0,1},
//   {1,0,1,0,0,0,0,1,1,0,0,0},
//   {0,0,0,1,1,1,0,0,0,0,0,0}
//  };
//  int i = 0;
//  int j = 0;
//  int n = 0;//定义座位
//  printf("请输入要连续占几个座位:\n");
//  scanf("%d",&n);
//  int sum = 0;//累加上每一行符合条件的位置
//  int count = 0;//计算一行中符合的位置的数量
//  int flag = 0;//计算连续空位的数量
//  for(i = 0; i < M ;i++)
//  {
//   count = 0;
//   flag = 0;
//   for(j = 0; j < N;j++)
//   {
//    if(a[i][j] == 0)
//    {
//     flag++;
//     if(flag == n)
//     {
//      count++;
//      flag = 0;
//      j = j - (n - 1);
//     }
//    }
//    if(a[i][j]==1)
//    {
//     flag = 0;
//    }
//   }
//   sum+=count;
//  }
//  printf("满足条件的座位一共有%d个\n",sum);
//  return 0;
// }
// #define M 4
// #define N 12
// int main() {
//     int a[M][N] = {
//         {1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
//         {0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1},
//         {1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
//         {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0}
//     };
//     int i, j, n;
//     printf("请输入要连续占几个座位:\n");
//     scanf("%d", &n);
//     int sum = 0;
//
//     for (i = 0; i < M; i++) {
//         int count = 0;
//         int flag = 0;
//         for (j = 0; j < N; j++) {
//             if (a[i][j] == 0) {
//                 flag++;
//                 if (flag == n) {
//                     count++;
//                     flag--;  // 继续检查重叠位置
//                 }
//             } else {
//                 flag = 0;
//             }
//         }
//         sum += count;
//     }
//     printf("满足条件的座位一共有 %d 个\n", sum);
//     return 0;
// }

/*
 *
 * 矩阵的乘法
 */
// void Init_arr(int a[][4],int row,int col)
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
//     printf("请输入第一组矩阵的行和列:");
//     scanf("%d%d",&row1,&col1);
//     int i = 0;
//     int j = 0;
//     int firstArray[row1][col1];
//     Init_arr(firstArray,row1,col1);
//
//     printf("请输入第二组矩阵的行和列:");
//     scanf("%d%d",&row2,&col2);
//     int secendArray[row2][col2] ;
//     Init_arr(secendArray,row2,col2);
//
//     //检查矩阵乘法条件
//     if(col1!=row2)
//     {
//         printf("矩阵不能相乘，第一矩阵的列数必须等于第二矩阵的行数。\n");
//     }
//     int resultArray[row1][col2] ;
//     // 初始化结果矩阵
//     for (i = 0; i < row1; i++) {
//         for (j = 0; j < col2; j++) {
//             resultArray[i][j] = 0;
//         }
//     }
//     int k = 0;
//     for(i = 0; i < row1 ;i++)
//     {
//         for(j = 0; j < col2; j++)
//         {
//             for(k = 0; k < col1;k++)
//             {
//                 resultArray[i][j] += firstArray[i][k] * secendArray[k][j];
//             }
//         }
//     }
//
//     //遍历目标数组
//     for (i = 0; i < row1;i++)
//     {
//         for(j = 0; j < col2;j++)
//         {
//             printf("%d ",resultArray[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main()
// {
//     char b[17] = "0123456789ABCDEF";
//     char c[64];
//     int d, base;
//     long n;
//     printf("Enter a number:\n");
//     scanf("%ld", &n);
//
//     base = 16; // 指定要转换的目标进制，这里是十六进制
//     int i = 0;
//     do {
//         c[i] = n % base; // 计算余数，存储在数组 c 中
//         i++;
//         n = n / base; // 更新 n，进行下一轮循环
//     } while (n != 0);
//     printf("Transmit to new base:\n");
//     for (--i; i >= 0; i--) {
//         d = c[i];
//         printf("%c", b[d]); // 根据余数在 b 数组中找到对应的十六进制字符并输出
//     }
//     printf("\n");
//     return 0;
// }
/*
2.占座位的问题.
  如:
    1 1 0 0 0 0 1 1 0 0 0
    0 0 0 0 1 1 0 0 0 0 1
    1 0 1 0 0 0 1 1 0 0 0
    0 0 0 1 1 1 0 0 0 0 0
       输入3: 3 表示连续的3个空位,不能够换行
    输出: 17
*/
#include<stdio.h>
// #define M 4
// #define N 12
// int main()
// {
//     int a[M][N] = {
//         {1,1,0,0,0,0,0,1,1,0,0,0},
//         {0,0,0,0,0,1,1,0,0,0,0,1},
//         {1,0,1,0,0,0,0,1,1,0,0,0},
//         {0,0,0,1,1,1,0,0,0,0,0,0}
//     };
//     int i = 0;
//     int j = 0;
//     int n = 0;//定义座位
//     printf("请输入要连续占几个座位:\n");
//     scanf("%d",&n);
//     int sum = 0;//累加上每一行符合条件的位置
//     int count = 0;//计算一行中符合的位置的数量
//     int flag = 0;//计算连续空位的数量
//     for(i = 0; i < M ;i++)
//     {
//         count = 0;
//         flag = 0;
//         for(j = 0; j < N;j++)
//         {
//             if(a[i][j] == 0)
//             {
//                 flag++;
//                 if(flag == n)
//                 {
//                     count++;
//                     flag = 0;
//                     j = j - (n  - 1);//找到了往后回退
//                 }
//             }
//             if(a[i][j]==1)
//             {
//                 flag = 0;
//             }
//         }
//         sum+=count;
//     }
//     printf("满足条件的座位一共有%d个\n",sum);
//     return 0;
// }

// #define M 4
// #define N 12
// int main()
// {
//     int a[M][N] = {
//         {1,1,0,0,0,0,0,1,1,0,0,0},
//         {0,0,0,0,0,1,1,0,0,0,0,1},
//         {1,0,1,0,0,0,0,1,1,0,0,0},
//         {0,0,0,1,1,1,0,0,0,0,0,0}
//     };
//     int i = 0;
//     int j = 0;
//     int n = 0;//定义座位
//     printf("请输入要连续占几个座位:\n");
//     scanf("%d",&n);
//     int sum = 0;//累加上每一行符合条件的位置
//     int count = 0;//计算一行中符合的位置的数量
//     int flag = 0;//计算连续空位的数量
//     for(i = 0; i < M ;i++)
//     {
//         count = 0;
//         flag = 0;
//         for(j = 0; j < N;j++)
//         {
//             if(a[i][j] == 0)
//             {
//                 flag++;
//                 if(flag == n)
//                 {
//                     count++;
//                     flag = 0;
//                     j = j - (n  - 1);//找到了往后回退
//                 }
//             }
//             if(a[i][j]==1)
//             {
//                 flag = 0;
//             }
//         }
//         sum+=count;
//     }
//     printf("满足条件的座位一共有%d个\n",sum);
//     return 0;
// }

// #define M 4
// #define N 12
// int main()
// {
//     int a[M][N] = {
//         {1,1,0,0,0,0,0,1,1,0,0,0},
//         {0,0,0,0,0,1,1,0,0,0,0,1},
//         {1,0,1,0,0,0,0,1,1,0,0,0},
//         {0,0,0,1,1,1,0,0,0,0,0,0}
//     };
//     int i = 0;
//     int j = 0;
//     int n = 0;//定义座位
//     printf("请输入要连续占几个座位:\n");
//     scanf("%d",&n);
//     int sum = 0;//累加上每一行符合条件的位置
//     int count = 0;//计算一行中符合的位置的数量
//     int flag = 0;//计算连续空位的数量
//     for(i = 0; i < M ;i++)
//     {
//         count = 0;
//         flag = 0;
//         for(j = 0; j < N;j++)
//         {
//             if(a[i][j] == 0)
//             {
//                 flag++;
//                 if(flag == n)
//                 {
//                     count++;
//                     flag = 0;
//                     j = j - (n  - 1);//找到了往后回退
//                 }
//             }
//             if(a[i][j]==1)
//             {
//                 flag = 0;
//             }
//         }
//         sum+=count;
//     }
//     printf("满足条件的座位一共有%d个\n",sum);
//     return 0;
// }
// #define M 4
// #define N 12
// int main()
// {
//     int a[M][N] = {
//         {1,1,0,0,0,0,0,1,1,0,0,0},
//         {0,0,0,0,0,1,1,0,0,0,0,1},
//         {1,0,1,0,0,0,0,1,1,0,0,0},
//         {0,0,0,1,1,1,0,0,0,0,0,0}
//     };
//     int i = 0;
//     int j = 0;
//     int n = 0;//定义座位
//     printf("请输入要连续占几个座位:\n");
//     scanf("%d",&n);
//     int sum = 0;//累加上每一行符合条件的位置
//     int count = 0;//计算一行中符合的位置的数量
//     int flag = 0;//计算连续空位的数量
//     for(i = 0; i < M ;i++)
//     {
//         count = 0;
//         flag = 0;
//         for(j = 0; j < N;j++)
//         {
//             if(a[i][j] == 0)
//             {
//                 flag++;
//                 if(flag == n)
//                 {
//                     count++;
//                     flag = 0;
//                     j = j - (n  - 1);//找到了往后回退
//                 }
//             }
//             if(a[i][j]==1)
//             {
//                 flag = 0;
//             }
//         }
//         sum+=count;
//     }
//     printf("满足条件的座位一共有%d个\n",sum);
//     return 0;
// }
// #define M 4
// #define N 12
// int main()
// {
//     int a[M][N] = {
//         {1,1,0,0,0,0,0,1,1,0,0,0},
//         {0,0,0,0,0,1,1,0,0,0,0,1},
//         {1,0,1,0,0,0,0,1,1,0,0,0},
//         {0,0,0,1,1,1,0,0,0,0,0,0}
//     };
//     int i = 0;
//     int j = 0;
//     int n = 0;//定义座位
//     printf("请输入要连续占几个座位:\n");
//     scanf("%d",&n);
//     int sum = 0;//累加上每一行符合条件的位置
//     int count = 0;//计算一行中符合的位置的数量
//     int flag = 0;//计算连续空位的数量
//     for(i = 0; i < M ;i++)
//     {
//         count = 0;
//         flag = 0;
//         for(j = 0; j < N;j++)
//         {
//             if(a[i][j] == 0)
//             {
//                 flag++;
//                 if(flag == n)
//                 {
//                     count++;
//                     flag = 0;
//                     j = j - (n  - 1);//找到了往后回退
//                 }
//             }
//             if(a[i][j]==1)
//             {
//                 flag = 0;
//             }
//         }
//         sum+=count;
//     }
//     printf("满足条件的座位一共有%d个\n",sum);
//     return 0;
// }
#define M 4
#define N 12
int main()
{
    int a[M][N] = {
        {1,1,0,0,0,0,0,1,1,0,0,0},
        {0,0,0,0,0,1,1,0,0,0,0,1},
        {1,0,1,0,0,0,0,1,1,0,0,0},
        {0,0,0,1,1,1,0,0,0,0,0,0}
    };
    int i = 0;
    int j = 0;
    int n = 0;//定义座位
    printf("请输入要连续占几个座位:\n");
    scanf("%d",&n);
    int sum = 0;//累加上每一行符合条件的位置
    int count = 0;//计算一行中符合的位置的数量
    int flag = 0;//计算连续空位的数量
    for(i = 0; i < M ;i++)
    {
        count = 0;
        flag = 0;
        for(j = 0; j < N;j++)
        {
            if(a[i][j] == 0)
            {
                flag++;
                if(flag == n)
                {
                    count++;
                    flag = 0;
                    j = j - (n  - 1);//找到了往后回退
                }
            }
            if(a[i][j]==1)
            {
                flag = 0;
            }
        }
        sum+=count;
    }
    printf("满足条件的座位一共有%d个\n",sum);
    return 0;
}