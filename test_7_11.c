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
#include <stdlib.h>
#include <string.h>
// #include <stdlib.h>
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
//             *dest = *src;
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
//   char src[10] = "abcd\0efg";
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
// int my_strncmp(const char* s1,const char * s2 ,size_t n)
// {
//    while (n)
//    {
//     if(*s1 == *s2)
//     {
//      n--;
//      continue;
//     }
//     else if( *s1 < *s2)
//     {
//      return -1;
//     }
//     else
//     {
//      return 1;
//     }
//    }
//  return 0;
// }
// int main()
// {
//   char s1[10] ="23456";
//   char s2[10] ="12345";
//   int n = 0;
//   printf("请输入比较前n个字符:");
//   scanf("%d",&n);
//   printf("%d\n",my_strncmp(s1,s2,n));
//   return 0;
// }
// int main()
// {
//   int a[10] = {20,2,3,4,5,6,7,8,9,10};
//   int * p[10];
//   int i = 0;
//   int sum = 0;
//   for (i = 0; i < 10 ;i++)
//   {
//     p[i] = &a[i];
//   }
//   int ** pp ;
//   pp = p;
//   for(i = 0; i < 10; i++)
//   {
//     // sum += **(pp+i);
//     // sum += *(*pp + i);
//     sum += *pp[i];
//   }
//   printf("%d\n",sum);
//   return 0;
// }

/*
 *
 * 定义一个动态的整型数组,其元素个数,由用户输入来决定,
	* 然后再输入每个元素的值,最后求这个数组的最大值.
 */
// int main()
// {
//   int n = 0;
//   printf("请输入想开辟元素的个数:");
//   scanf("%d",&n);
//   int *a = (int *)malloc(sizeof(int)*n);
//   int i= 0 ;
//   for(i = 0; i< n;i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   int max = 0;
//   for(i = 0; i < n;i++)
//   {
//     if(*(a+i) > max)
//     {
//      max = *(a+i);
//     }
//   }
//   printf("%d\n",max);
//   free(a);
//   return 0;
// }
// int main()
// {
//   int a[4] ={0,2,3,4};
//   int *p[4];
//   int i = 0;
//   for(i = 0; i < 4 ;i++)
//   {
//     // p[i] = a + i;
//     p[i] = &a[i];
//   }
//  for(i = 0; i < 4 ;i++)
//  {
//   printf("%d ",*p[i]);
//  }
//   return 0;
// }
// int main()
// {
//   char s[] = {'a','b','c','c'};
//   printf("%d\n",strlen(s));
//   return 0;
// }
/*
 * atoi: 将一个数字字符转化为这个数字本身
 * @s:字符串的首地址
 * 返回值:
 *      数字本身 int
 * 思路:
 *    如果输入的是正常的字符"1231412"
 *    那么还有常规的字符:
 *                    "-12345"
 *                    "+12345"
 */
// int atoi(char * s)
// {
//     int flag = 0; //标记 判断字符串首元素是不是符号(+/-)
//     if(*s == '-')
//     {
//       flag = 0;
//       s++;
//     }
//     else
//     {
//      flag = 1;
//      if(*s == '+')
//      {
//       s++;
//      }
//     }
//      int sum = 0;
//     while (*s)
//     {
//       sum = sum*10 + (*s - 48);
//       s++;
//     }
//     if(flag == 0)
//     {
//       return -1 * sum;
//     }
//     return sum ;
//
// }
// int main()
// {
//   char  a[10];
//   scanf("%s",a);
//   int res = atoi(a);
//   printf("%d\n",res);
//   return 0;
// }
/*
 *
 * 练习: 定义一个学生信息结构体数组(数组元素的个数由用户输入来决定),然后
 *      依次从键盘输入每个学生信息,按成绩的降序输入每个学术性的信息.
 */
// struct student
// {
//     char name[10];
//     int age;
//     int score;
// };
// int main()
// {
//   int n ;
//   scanf("%d",&n);
//   struct student *s = malloc(sizeof(struct student)*n);
//   int i = 0;
//   for (i = 0; i < n ;i++)
//   {
//     scanf("%s%d%d",*(s+i)->name,(s+i)->age,(s+i)->score);
//   }
//  for (i = 0; i < n ;i++)
//  {
//   printf("%s%d%d",(s+i)->name,(s+i)->age,(s+i)->score);
//  }
//   return 0;
// }
/*
 *  sum_array:求一维数组之和
 *  @a:函数名
 *  @n：一维数组的个数
 *  返回值：
 *      返回一维数组的元素之和 int
 */
// int sum_array(int *a,int n)
// {
//        int sum = 0;
//        int i = 0;
//        for (i = 0 ;i < n ;i++)
//        {
//         sum += *(a+i);
//        }
//        return sum;
// }
// int main()
// {
//       int a[10] = {1,2,3,4,5,6,7,8,9,10};
//       int  (*p)(int * ,int);
//       p = sum_array;
//       int sum = p(a,10);
//       printf("sum == %d\n",sum);
//       return 0;
// }
#include<stdio.h>
/*
写一个参数,通过main的参数传入数组,求两数之和.

*/
// #include<stdlib.h>
// int main(int argc,char * argv[])
// {
//  printf("%d\n",atoi(argv[1]) + atoi(argv[2]));
//  return 0;
// }
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("请提供两个整数作为参数。\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("%d\n", num1 + num2);

    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char * argv[])
{
 int num1 = atoi(argv[1]);
 int num2 = atoi(argv[2]);
 printf("%d\n",num1 + num2);
 return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char *argv[]) {
//  if (argc < 2) {
//   printf("请提供至少一个数字参数。\n");
//   return 1;
//  }
//
//  int sum = 0;
//
//  // 遍历每个参数
//  for (int i = 1; i < argc; i++) {
//   int num = 0;
//   // 遍历参数中的每个字符
//   for (int j = 0; argv[i][j] != '\0'; j++) {
//    if (argv[i][j] < '0' || argv[i][j] > '9') {
//     printf("参数包含非数字字符：%s\n", argv[i]);
//     return 1;
//    }
//    num = num * 10 + (argv[i][j] - '0');
//   }
//   sum += num;
//  }
//
//  printf("总和: %d\n", sum);
//  return 0;
// }

#include<stdio.h>
#include<stdlib.h>
// int main(int argc,char ** argv)
// {
//  char * p = (char *)malloc(50);
//  int i = 0;
//  for (i = 0; i < 10; i++)
//  {
//   *(p + i) = '1' + i;
//  }
//  // p = NULL;
//  char * q = realloc(p,100);
//
//  for (i = 0; i < 100; i++)
//  {
//   printf("%c ",*(q + i));
//  }
//  free(p);
//  free(q);
//  return 0;
// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// int main(int argc,char ** argv)
// {
//  char * p = (char *)malloc(50);
//  strcpy(p,"1234456abcfdef");
//  p = realloc(p,100);
//  printf("p:%s\n",p);
//  printf("p:%s\n",p+50);
//  return 0;
// }

// int main()
// {
//  char *s = "AAA";
//  printf("%s",s);
//  s[0] = 'B';
//  printf("%s",s);
//  return 0;
// }
/*
 *
* 5.(选做题)
    在现实生活中,或者科研领域有可能会遇到一些超级大的数据需要处理
    希望大家能够设计几个函数,去实现对于超级大的数据进行+ - * /的处理.
    long long 都保存不下的数据.
    涉及两个问题:
    (1) 超级大的数据该如何存储?
     char * 类型保存
        字符数组的形式体现出来
    (2) 超级大的数据他们之间的+-* /该如何实现?
    (3) 可能数据全是整数或者全是小数,先实现全是整数
 */
// int main()
// {
//   char *p = "abcdefgh";
//   char * r;
//   long *q;
//   q = (long*) p;
//   q++;
//   r = (char*) q;
//   printf("%s\n",r);
//   return 0;
// }
#include<stdio.h>
// int main()
// {
//  char *s = "abcde";
//  s=s+2;
//  printf("%ld\n",s);
//  return 0;
// }
// #include<stdio.h>
// void fun(int *a,int *b)
// {
//  int *k;
//  k = a;
//  a = b;
//  b = k;
// }
// int main()
// {
//  int a = 3;
//  int b = 6;
//  int *x = &a;
//  int *y = &b;
//  fun(x,y);
//  printf("%d %d",a,b);
//  return 0;
// }
// #include<stdio.h>
// struct Data
// {
//  int year;
//  int month;
//  int day;
// };
// struct student
// {
//  int num;
//  char name[32];
//  struct Data birthday;
//  int score;
// };
// int main()
// {
//  struct student class[5];
//  int i = 0;
//  for(i = 0; i < 5; i++)
//  {
//   scanf("%d %s %d-%d-%d %d",&class[i].num,class[i].name,&class[i].birthday.year,
//          &class[i].birthday.month,&class[i].birthday.day,
//          &class[i].score);
//  }
//  for(i = 0; i < 5; i++)
//  {
//   printf("%d %s %d-%d-%d %d\n",class[i].num,class[i].name,class[i].birthday.year,
//          class[i].birthday.month,class[i].birthday.day,
//          class[i].score);
//  }
//  return 0;
// }

// #include<stdio.h>
// struct Data
// {
//  int year;
//  int month;
//  int day;
// };
// struct student
// {
//  int num;
//  char name[32];
//  struct Data birthday;
//  int score;
// };
// int main()
// {
//  //struct student class[5];
//  struct student  * class = (struct student *)malloc(sizeof(*class)*5);
//  int i = 0;
//  for(i = 0; i < 5; i++)
//  {
//   scanf("%d %s %d-%d-%d %d",&class[i].num,class[i].name,&class[i].birthday.year,
//          &class[i].birthday.month,&class[i].birthday.day,
//          &class[i].score);
//  }
//  int j = 0;
//
// //排序
//  // for(i = 0; i < 4; i++)
//  // {
//  //   flag = 0;
//  //   for(j = 0;j<4 -  i; j++)
//  //   {
//  //    if(class[j].score < class[j+1].score)
//  //    {
//  //          struct student t ;
//  //          t = class[j];
//  //          class[j] = class[j+1];
//  //          class[j+1] = t;
//  //    }
//  //   }
//  // }
//
//  //换的是对应的索引值，没有交换结构体中的内容
//  int a[5] ={0,1,2,3,4};
//  for(i = 0; i < 4;i++)
//  {
//   for(j = 0; j < 4 -i;j++)
//   {
//     if(class[a[j]].score < class[a[j+1]].score)
//     {
//       int temp = a[j];
//       a[j] = a[j+1];
//       a[j+1] = temp;
//     }
//   }
//  }
//  for(i = 0; i < 5; i++)
//  {
//   printf("%d %s %d-%d-%d %d\n",class[a[i]].num,class[a[i]].name,class[a[i]].birthday.year,
//          class[a[i]].birthday.month,class[a[i]].birthday.day,
//          class[a[i]].score);
//  }
//  free(class);
//  return 0;
// }

#include<stdio.h>
// union test
// {
//  char a;
//  int b;
// };
// int main()
// {
//  union test t;
//  t.b = 65;
//  printf("%d\n",t.a);
//  return 0;
// }
// int main()
// {
//   printf("%llu\n",sizeof(long));
//   return 0;
// }
