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
 * �����Լ��:ŷ������㷨
 */
/*
 *  Gcd���������������Լ��
 *  @x,y:Ҫ���������
 *  ����ֵ��
 *      �����������Լ��
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
//     printf("%d��%d�����Լ����%d\n",x,y,res);
//     return 0;
// }
/*
 *
 * ���������-���巨
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
//     printf("���Լ����%d\n",i);
//     break;
//   }
//  }
//  return 0;
// }
/**
 * ��С��Լ��
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
//      printf("��С��������%d\n",i);
//     break;
//    }
//   }
//   return 0;
// }
/*
 *
 * ����
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
//    printf("��С��������%d\n",i);
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
 * func:������������ֵ
 * @a,b:������������ֵ
 * ����ֵ:
 *    �޷���ֵ
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
//  func(&a,&b);//�������func����,Ŀ����Ϊ�˽�������a�ͱ���b��ֵ
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
 *  my_strlen:���ַ�������Ч����
 *  @a���ַ�������
 *  ����ֵ��
 *     �ַ����ĳ���
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
//    return  s - a;//��ַ���
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
 *  my_atoi:��һ��ʮ���Ƶ������ַ�����ת����һ������
 *  @nptr : ������ַ���
 *  ����ֵ:
 *       �ַ�������Ӧ��Ӧ������
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
 * strncpy: ʵ���ַ����Ŀ���
 * @dest: Ŀ���ַ���
 * @src: Դͷ�ַ���
 * @n  : ����ǰn���ַ�
 * ����ֵ:
 *     ��ɿ�����,����Ŀ�ĵ��ַ������׵�ַ
 */
// #include <string.h>
// char * my_strncpy(char* dest,char* src,size_t n)
// {
//      int count = 0;//��¼�Ƿ��Ƶ��˵�n���ַ�
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
 *  my_strncmp:�������ַ���ǰn���ַ����д�С�Ƚ�
 *  @s1,s2    :�������Ƚϵ��ַ���
 *  @n        :�Ƚ϶��ٶ��ַ�
 *  ����ֵ:
 *       1  s1 > s2
 *       -1 s1 < s2
 *       0  s1 == s2 ������Ƚ���һ��,���ȫ�����,�򷵻�0
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
//   printf("������Ƚ�ǰn���ַ�:");
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
 * ����һ����̬����������,��Ԫ�ظ���,���û�����������,
	* Ȼ��������ÿ��Ԫ�ص�ֵ,����������������ֵ.
 */
// int main()
// {
//   int n = 0;
//   printf("�������뿪��Ԫ�صĸ���:");
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
 * atoi: ��һ�������ַ�ת��Ϊ������ֱ���
 * @s:�ַ������׵�ַ
 * ����ֵ:
 *      ���ֱ��� int
 * ˼·:
 *    �����������������ַ�"1231412"
 *    ��ô���г�����ַ�:
 *                    "-12345"
 *                    "+12345"
 */
// int atoi(char * s)
// {
//     int flag = 0; //��� �ж��ַ�����Ԫ���ǲ��Ƿ���(+/-)
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
 * ��ϰ: ����һ��ѧ����Ϣ�ṹ������(����Ԫ�صĸ������û�����������),Ȼ��
 *      ���δӼ�������ÿ��ѧ����Ϣ,���ɼ��Ľ�������ÿ��ѧ���Ե���Ϣ.
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
 *  sum_array:��һά����֮��
 *  @a:������
 *  @n��һά����ĸ���
 *  ����ֵ��
 *      ����һά�����Ԫ��֮�� int
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
дһ������,ͨ��main�Ĳ�����������,������֮��.

*/
#include<stdlib.h>
int main(int argc,char * argv[])
{
 printf("%d\n",atoi(argv[1]) + atoi(argv[2]));
 return 0;
}
