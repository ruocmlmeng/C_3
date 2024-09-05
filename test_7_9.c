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
// #define N 6
// /*
//   Print_YH_triangle:打印出杨辉三角形
//   @a	:数组名
//   @n	:传入要打印多少行杨辉三角
//   返回值:
//       无
// */
// void Print_YH_triangle(int a[][N],int n)
// {
//   int i = 0;
//   int j = 0;
//   //初始化二维数组
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
  2.写一个函数,求一个整数的二进制形式中有多少个1?
*/
#include<stdio.h>

/*
  count_one:求一个整数的二进制形式有多少个1
  @num	:传入函数的整数
  返回值 	: 整数二进制中二的个数
*/
// int count_one(int num)
// {
//   int i = 0;
//   int count = 0;//记录整数中1的个数
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
//   printf("请输入一个整数:\n");
//   scanf("%d",&num);
//   int res = count_one(num);
//   printf("%d中有%d个\n",num,res);
//   return 0;
// }
// #include<stdio.h>
// #define M 3
// #define N 4
// /*
//   Is_symmesry_vertical: 判断一个二维数组是否水平对称
//   @a	: 函数名
//   @n	: 二维数组的列数
//   返回值
//     对称: 1
//     不对称: 0
// */
// int Is_symmesry_vertical(int a[][N],int n)
// {
//   int i = 0;
//   int j = 0;
//   int count = 0;//判断水平一共有多少对
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
  Is_symmesry_level: 判断一个二维数组是否水平对称
  @a	: 函数名
  @n	: 二维数组的列数
  返回值
    对称: 1
    不对称: 0
*/
// int Is_symmesry_level(int a[][N],int n)
// {
//   int i = 0;
//   int j = 0;
//   int count = 0;//判断垂直一共有多少对
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
//   Init_Arr: 初始化一个二维数组
//   @a	: 函数名
//   @n	: 二维数组的列数
//   返回值
//       无
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
//     printf("该二维数组为对称数组!\n");
//   }
//   else
//   {
//     printf("该二维数组不是对称数组!\n");
//   }
//   return 0;
// }

/*
 *用递归求整数数组的和
 *
 */
/*
 *
 *  sum_Arr:递归求整型数组的和
 *  @a：数组名
 *  @n：数组的个数
 *  返回值：
 *      整个数组的和
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
//   printf("数组的和为%d\n",res);
//   return 0;
// }
#include<stdio.h>
/*
  jiecheng:从键盘输入n求n的阶乘
  @n 		：从键盘输入的值
  返回值		：
        n的阶乘
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
//  *Hanio塔问题
//  *
//  */
// /*
// *  Hanio：按照"汉诺塔"的规则,把n个盘子从A柱,移动到C柱,
//           中间可以利用B柱,把移动的步骤打印出来!
//    @n:要移动的盘子的数量
//    @A,B,C:移动盘子需要借助的柱子
//    返回值：
//         无返回值
//         打印移动的步骤
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
 *Hanio塔问题
 *
 */
/*
*  Hanio：按照"汉诺塔"的规则,把n个盘子从A柱,移动到C柱,
          中间可以利用B柱,把移动的步骤打印出来!
   @n:要移动的盘子的数量
   @A,B,C:移动盘子需要借助的柱子
   返回值：
        无返回值
        打印移动的步骤
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
// *    f：求按照汉诺塔的规则,把n个盘子从A移动到C,中间可以利用B
//      求移动n个盘子的步骤他需要挪动多少步?(整个有多少步数)
//      @n:移动多少个盘子
//      返回值：
//           移动的步数
//      思路：
//           按照Hanio塔规则，移动n个盘子的步数
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
//   printf("移动%d个盘子的步数为%d\n",n,f(n));
//   return 0;
// }
// /*
//  *2.使用递归的方法,求一个一维数组的元素之和.
//  *
//  */
// /*
//  * sum_arr:求一维数组的元素之和
//  * @a:数组名
//  * @n：数组个数
//  * 返回值：
//  *    数组元素的和
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
 * 1.用递归的方法,来判断一个一维数组是否递增!
 */
/*
 *  Is_rise:判断一个一维数组是否递增
 *  @a:一维数组名
 *  @n:数组元素个数
 *  返回值：
 *        1 -> 递增
 *        0 -> 不递增
 */
// #define N 5
// int Is_rise(int a[],int n )
// {
//     if(n == 1)
//     {
//         return 1;
//     }
//     if(n > 1)
//     {
//         return Is_rise(a,n-1) && a[n-1] > a[n-2];
//     }
// }
// int main()
// {
//     int a[N];
//     int i = 0;
//     for(i = 0; i < N; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int res = Is_rise(a,N);
//     if(res == 1)
//     {
//         printf("递增!\n");
//     }
//     else if(res == 0)
//     {
//         printf("不递增!\n");
//     }
//     return 0;
// }


// /*
//  *
//  * 3.使用递归的方法,求斐波拉契数列的n项和.
//  */
// #define N 6
// int  Init_fib(int n);
// /*
//  *  fib :求斐波拉契数列的n项的和
//  *  @n  :输入的斐波拉契数列的个数
//  *  返回值:
//  *         斐波拉契数列的n项的和
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
//  *  Init_fib :求第n个斐波拉契数列
//  *  @n  :键盘输入第n个斐波拉契数
//  *  返回值:
//  *         第n个斐波拉契数
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
//     printf("斐波拉契数列的%d项和为%d\n",n,sum);
//     return 0;
// }
/*
 *
 *4.求	水洼数
    小帅家的前面有一个坪,这个坪他不平下雨之后,就会有"水洼,水坑".
    输入:
        M * N
        1 1 0 0 1 0 1 0 1 0
        0 1 0 0 1 1 1 1 0 1
        0 1 1 1 1 1 1 0 1 1
        1 1 0 0 1 0 1 0 1 1
        1 1 1 1 1 1 0 1 1 0
        1:表示没有水 0:表示此处有水
        一个点的水,会和周围其它点的水连成一片大水洼,
        最后,求水洼的个数!!!
 *
 */
/*
 *  find_water:找一个二维数组中水洼的个数
 *  @i,j      :二维数组中值为0的下标
 *  返回值:
 *          无返回值
 *
 */
// #define M 5
// #define N 10
// int a[M][N];
// void find_water(int a[][N],int i,int j)
// {
//     //判断i,j有没有越界,越界了的话就直接退出
//     if(i < 0 || i >= M ||j < 0 || j>=N )
//         return ;
//     //如果是水洼就标记
//     a[i][j] = 1;
//     find_water(a,i-1,j);
//     find_water(a,i+1,j);
//     find_water(a,i,j+1);
//     find_water(a,i,j-1);
//     find_water(a,i-1,j-1);
//     find_water(a,i-1,j+1);
//     find_water(a,i+1,j+1);
//     find_water(a,i+1,j-1);
// }
//
// int main()
// {
//
//     int i = 0;
//     int j = 0;
//     for(i = 0; i < M; i++)
//     {
//         for(j = 0; j<N;j++)
//         {
//             scanf("%d",a[i][j]);
//         }
//     }
//     int count = 0;//记录水洼的个数
//     //遍历整个数组
//     for(i = 0; i < M; i++)
//     {
//         for(j = 0; j < N ;j++)
//         {
//             if(a[i][j] == 0)
//             {
//                 find_water(a,i,j);
//                 count++;
//             }
//         }
//     }
//     printf("%d个水洼\n",count);
//     return 0;
// }
// #define M 5
// #define N 10
// int a[M][N];
// void find_water(int i,int j)
// {
//     //判断i,j有没有越界,越界了的话就直接退出
//     if(i < 0 || i >= M ||j < 0 || j>=N )
//         return ;
//     //如果是水洼就标记
//     a[i][j] = 1;
//     find_water(i-1,j);
//     find_water(i+1,j);
//     find_water(i,j+1);
//     find_water(i,j-1);
//     find_water(i-1,j-1);
//     find_water(i-1,j+1);
//     find_water(i+1,j+1);
//     find_water(i+1,j-1);
// }
//
// int main()
// {
//
//     int i = 0;
//     int j = 0;
//     for(i = 0; i < M; i++)
//     {
//         for(j = 0; j<N;j++)
//         {
//             scanf("%d",a[i][j]);
//         }
//     }
//     int count = 0;//记录水洼的个数
//     //遍历整个数组
//     for(i = 0; i < M; i++)
//     {
//         for(j = 0; j < N ;j++)
//         {
//             if(a[i][j] == 0)
//             {
//                 find_water(i,j);
//                 count++;
//             }
//         }
//     }
//     printf("%d个水洼\n",count);
//     return 0;
// }
// #include <stdio.h>
//
// #define MAX_M 5
// #define MAX_N 10
//
// int M = 5, N = 10;
// int grid[MAX_M][MAX_N] = {
//     {1, 1, 0, 0, 1, 0, 1, 0, 1, 0},
//     {0, 1, 0, 0, 1, 1, 1, 1, 0, 1},
//     {0, 1, 1, 1, 1, 1, 1, 0, 1, 1},
//     {1, 1, 0, 0, 1, 0, 1, 0, 1, 1},
//     {1, 1, 1, 1, 1, 1, 0, 1, 1, 0}
// };
//
// // 深度优先搜索函数
// void dfs(int i, int j) {
//     // 如果越界或者不是水，返回
//     if (i < 0 || i >= M || j < 0 || j >= N || grid[i][j] != 0) {
//         return;
//     }
//
//     // 将当前点标记为已访问
//     grid[i][j] = 1;
//
//     // 递归访问相邻的八个方向
//     dfs(i - 1, j - 1);
//     dfs(i - 1, j);
//     dfs(i - 1, j + 1);
//     dfs(i, j - 1);
//     dfs(i, j + 1);
//     dfs(i + 1, j - 1);
//     dfs(i + 1, j);
//     dfs(i + 1, j + 1);
// }
//
// int main() {
//     int puddleCount = 0;
//
//     // 遍历整个网格
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             // 如果发现一个水点，启动DFS
//             if (grid[i][j] == 0) {
//                 dfs(i, j);
//                 puddleCount++;
//             }
//         }
//     }
//
//     // 输出水洼数量
//     printf("%d\n", puddleCount);
//
//     return 0;
// }
#include <stdio.h>

#define MAX_M 5
#define MAX_N 10

/*
 *
 *  find_water:找一个二维数组中的水洼个数
 *  @a      :传入的二维数组的函数名
 *  @N      :传入的二位数组的列
 *  @i,j    :传入的水洼的下标
 *
 */
// void find_water(int a[][MAX_N], int N, int i, int j) {
//
//     if (i < 0 || i >= MAX_M || j < 0 || j >= N || a[i][j] != 0) {
//         return;
//     }
//
//     // 将当前点标记为已访问
//     a[i][j] = 1;
//
//     // 递归访问相邻的八个方向
//     find_water(a, N, i - 1, j - 1);
//     find_water(a, N, i - 1, j);
//     find_water(a, N, i - 1, j + 1);
//     find_water(a, N, i, j - 1);
//     find_water(a, N, i, j + 1);
//     find_water(a, N, i + 1, j - 1);
//     find_water(a, N, i + 1, j);
//     find_water(a, N, i + 1, j + 1);
// }
//
// int main() {
//     int M = 5, N = 10;
//     int a[MAX_M][MAX_N] = {
//         {1, 1, 0, 0, 1, 0, 1, 0, 1, 0},
//         {0, 1, 0, 0, 1, 1, 1, 1, 0, 1},
//         {0, 1, 1, 1, 1, 1, 1, 0, 1, 1},
//         {1, 1, 0, 0, 1, 0, 1, 0, 1, 1},
//         {1, 1, 1, 1, 1, 1, 0, 1, 1, 0}
//     };
//
//     int count = 0;
//
//     // 遍历整个网格
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             // 如果发现一个水点，启动DFS
//             if (a[i][j] == 0) {
//                 find_water(a, N, i, j);
//                 count++;
//             }
//         }
//     }
//
//     // 输出水洼数量
//     printf("%d\n", count);
//
//     return 0;
// }
// void f(int a,int b)
// {
//  int t;
//  t = a;
//  a = b;
//  b = t;
// }
// int main()
// {
//     int x = 1,y =3,z=2;
//     if(x>y)
//     {
//      f(x,y);
//     }
//     else if(y>z)
//     {
//      f(x,z);
//     }
//     else
//     {
//      f(x,z);
//     }
//     printf("%d,%d,%d\n",x,y,z);
//     return 0;
// }
// #define N 80
// int fun(int a[],int n)
// {
//     int i,j=1;
//     for(i = 1; i < n; i++)
//     {
//       if(a[j - 1] != a[i])
//       {
//           a[j++] = a[i];
//       }
//
//     }
//     return j;
// }
// int main()
// {
//     int a[N] ={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10};
//     int i = 0;
//     int n = 19;
//     printf("The original data:\n");
//     for(i = 0; i < n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     n = fun(a,n);
//     printf("\nThe data after deleted:\n");
//     for(i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
// #define N 80
// int fun(int a[],int n)
// {
//     int i,j=1;
//     for(i = 1; i < n; i++)
//     {
//       if(a[j - 1] != a[i])
//       {
//           a[j++] = a[i];
//       }
//
//     }
//     return j;
// }
// int main()
// {
//     int a[N] ={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10};
//     int i = 0;
//     int n = 19;
//     printf("The original data:\n");
//     for(i = 0; i < n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     n = fun(a,n);
//     printf("\nThe data after deleted:\n");
//     for(i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
/*
 *  sum_array:求一维数组之和
 *  @a:函数名
 *  @n：一维数组的个数
 *  返回值：
 *      返回一维数组的元素之和 int
 */
// int sum_array(int a[],int n)
// {
//     int sum = 0;
//     int i = 0;
//     for (i = 0 ;i < n ;i++)
//     {
//       sum += a[i];
//     }
//     return sum;
// }
// int main()
// {
//     int a[10] = {1,2,3,4,5,6,7,8,9,10};
//     int  (*p)(int * ,int);
//     p = sum_array;
//     int sum = p(a,10);
//     printf("sum == %d\n",sum);
//     return 0;
// }
int sum_array(int a[],int n)
{
 int sum = 0;
 int i = 0;
 for (i = 0 ;i < n ;i++)
 {
  sum += a[i];
 }
 return sum;
}
int main()
{
 int a[10] = {1,2,3,4,5,6,7,8,9,10};
 int  (*p)(int * ,int);
 p = sum_array;
 int sum = p(a,10);
 printf("sum == %d\n",sum);
 return 0;
}