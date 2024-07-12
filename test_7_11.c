/**
  ******************************************************************************
  * @file           : test_7_11.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/11
  ******************************************************************************
  */
#include<stdio.h>
/*
 *
 * 求最大公约数:欧几里得算法
 */
/*
 *  Gcd：求两个数的最大公约数
 *  @x,y:要求的两个数
 *  返回值：
 *      两个数的最大公约数
 */
// int Gcd(int x,int y)
// {
//     int z = 0;
//     while (y)
//     {
//         z =  x  % y;
//         x = y;
//         y = z;
//     }
//     return x;
// }
// int main()
// {
//     int x = 0;
//     int y = 0;
//     scanf("%d%d",&x,&y);
//     int res = Gcd(x,y);
//     printf("%d与%d的最大公约数是%d\n",x,y,res);
//     return 0;
// }
/*
 *
 * 求最大公因数-定义法
 */
// #define min(a,b) (a < b) ? ( a) : (b)
// int main()
// {
//  int x = 0;
//  int y = 0;
//  scanf("%d%d",&x,&y);
//  int res = min(x,y);
//  int  i = 0;
//  for (i = res ; i >= 1 ;i--)
//  {
//   if(x % i == 0 && y % i == 0)
//   {
//     printf("最大公约数是%d\n",i);
//     break;
//   }
//  }
//  return 0;
// }
/**
 * 最小公约数
 */
// #define min(a,b) (a < b) ? (a) : (b)
// int main()
// {
//   int a = 0;
//   int b = 0;
//   scanf("%d%d",&a,&b);
//   int res = min(a,b);
//   int i = 0;
//   for(i = min(a,b); i <= a*b;i++)
//   {
//    if(i % a == 0 && i % b == 0)
//    {
//      printf("最小公倍数是%d\n",i);
//     break;
//    }
//   }
//   return 0;
// }
/*
 *
 * 错误
 */
// #define min(a,b) (a < b) ? (a) : (b)
// int main()
// {
//  int a = 0;
//  int b = 0;
//  scanf("%d%d",&a,&b);
//  int res = min(a,b);
//  int i = 0;
//  for(i = a*b ; i >= min(a,b);i--)
//  {
//   if(i % a == 0 && i % b == 0)
//   {
//    printf("最小公倍数是%d\n",i);
//   }
//  }
//  return 0;
// }
#include<stdio.h>
// int main()
// {
//  int a = 1024;
//  int* p = &a;
//  printf("a == %d\n",a);
//  printf("*&a == %d\n",*&a);
//  printf("*p == %d\n",*p);
//  printf("&a == %p\n",&a);
//  printf("p == %p\n",p);
//  return 0;
// }
/**
 *
 * func:交换两个数的值
 * @a,b:带交换的两个值
 * 返回值:
 *    无返回值
 */
// void func(int* a,int *b)
// {
//      int temp = *a;
//       *a = *b;
//       *b = temp;
// }
// int main()
// {
//  int a = 5;
//  int b = 6;
//  func(&a,&b);//调用这个func函数,目的是为了交换变量a和变量b的值
//  printf("a == %d \n",a);//a == 6
//  printf("b == %d\n",b);//b ==5
// }
// int main()
// {
//   int a[10] = {1,2,3,4,5,6,7,8,9,10};
//   int *p = &a[3];
//   p = p -3;
//   int i = 0;
//   int sum = 0;
//   for(i = 0; i < 10; i++)
//   {
//     sum = sum + *(p + i);
//   }
//  printf("%d\n",sum);
//   return 0;
// }


/*
 *  my_strlen:求字符串的有效长度
 *  @a：字符数组名
 *  返回值：
 *     字符串的长度
 */
// int my_strlen(const char a[])
// {
//   int count = 0;
//   while(*a!='\0')
//   {
//    count++;
//    a++;
//   }
//  return count;
// }
// int my_strlen(const char a[])
// {
//    const char * s = a;
//    while (*s)
//    {
//        s++;
//    }
//    return  s - a;//地址相减
// }
// int main()
// {
//   // char a[] = "abcdef";
//   char a[256] = {0};
//   scanf("%s",a);
//   int len = my_strlen(a);
//   printf("%d\n",len);
//   return 0;
// }
/*
 *  my_atoi:把一个十进制的数组字符串，转换成一个整数
 *  @nptr : 传入的字符串
 *  返回值:
 *       字符串所对应相应的整数
 */
// int my_atoi(const char * nptr)
// {
//     int sum = 0;
//     if(*nptr == '-')
//     {
//       nptr++;
//      while (*nptr != '\0')
//      {
//       sum = sum * 10 + *nptr -48;
//       nptr++;
//      }
//      return -sum;
//     }
//     while (*nptr != '\0')
//     {
//       sum = sum * 10 + *nptr -48;
//       nptr++;
//     }
//     return sum;
// }
// int main()
// {
//   char a[256] = {0};
//   scanf("%s",a);
//   printf("%d\n",my_atoi(a));
//   return 0;
// }
/*
 * strncpy: 实现字符串的拷贝
 * @dest: 目标字符串
 * @src: 源头字符串
 * @n  : 拷贝前n个字符
 * 返回值:
 *     完成拷贝后,返回目的地字符串的首地址
 */
// #include <string.h>
// char * my_strncpy(char* dest,char* src,size_t n)
// {
//      int count = 0;//记录是否复制到了第n个字符
//      while (count <= n)
//      {
//            if(*src == '\0')
//            {
//             return dest;
//            }
//           *dest = *src;
//            dest++;
//            src++;
//            count++;
//      }
//      return dest;
// }
// int main()
// {
//   char dest[10] ="";
//   char src[10] = "abcdefg";
//   int len = strlen(src);
//   my_strncpy(dest,src,len);
//   printf("dest == %s\n",dest);
//   return 0;
// }
/*
 *  my_strncmp:对两个字符串前n个字符进行大小比较
 *  @s1,s2    :两个待比较的字符串
 *  @n        :比较多少对字符
 *  返回值:
 *       1  s1 > s2
 *       -1 s1 < s2
 *       0  s1 == s2 则继续比较下一对,如果全部相等,则返回0
 *
 */
int my_strncmp(const char* s1,const char * s2 ,size_t n)
{
   while (n)
   {
    if(*s1 == *s2)
    {
     n--;
     continue;
    }
    else if( *s1 < *s2)
    {
     return -1;
    }
    else
    {
     return 1;
    }
   }
 return 0;
}
int main()
{
  char s1[10] ="23456";
  char s2[10] ="12345";
  int n = 0;
  printf("请输入比较前n个字符:");
  scanf("%d",&n);
  printf("%d\n",my_strncmp(s1,s2,n));
  return 0;
}