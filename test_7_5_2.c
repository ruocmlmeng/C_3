/**
  ******************************************************************************
  * @file           : test_7_5_2.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/5
  ******************************************************************************
  */

/*
 *
 * ѡ������
 */
#include<stdio.h>

#include<stdint.h>
#define N 10
// int main()
// {
//     int a[N] = {0};
//     printf("������ʮ��������:\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0;i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i = 0; i < N - 1; i++)
//     {
//
//         int max_index ;
//         int max = INT32_MIN;
//         for(j = 0; j < N - i;j++)
//         {
//             if(a[j] > max)
//             {
//                 max = a[j];
//                 max_index  = j;
//             }
//         }
//         if( max_index != N - 1 -i)
//         {
//             int temp = a[max_index];
//             a[max_index] = a[N - 1 -i];
//             a[N -1 - i] = temp;
//         }
//     }
//     for(i = 0;i < N ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//   return 0;
// }

/*
 *
 *���ַ����������е�ĳ����(���������������)
 */
// int main()
// {
//     int a[N] = {0};
//     printf("������ʮ��������:\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0;i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int left = 0;
//     int right = N - 1;
//     int x = 0;
//     printf("��������Ҫ���ҵ���:\n");
//     scanf("%d",&x);
//     while (left <= right)
//     {
//         int mid = (left+right) / 2;
//         if(a[mid] > x)
//         {
//             right = mid - 1;
//         }
//         else if(a[mid] < x)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             printf("�ҵ��˸���!\n");
//             break;
//         }
//     }
//     if(left>right)
//     {
//         printf("û���ҵ�!\n");
//     }
//
//     return 0;
// }

/*
 *
 *��������--�����ķ�ʽ
 *
 */
// int main()
// {
//     int a[N] = {0};
//     printf("������ʮ��������:\n");
//     int i = 0;
//     int j = 0;
//     for(i = 0;i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i = 1 ; i <= N - 1;i++)
//     {
//         for(j = 0; j < i; i++)
//         {
//             if(a[i] > a[j])
//             {
//                 break; // ����ҵ���,�±�λ�þ���i,���û�ҵ��Ļ��±����i
//             }
//                         //a.break��;�ҵ���,��ʱ������±��λ�þ���i
//                         //b.���û���ҵ�,ѭ����������,��ʱ�����λ���������,�±�Ϊj
//             int x = a[i];
//             int k = 0;
//             for (k = i -1; k >= j ; k--)
//             {
//                 a[k+1] = a[k];
//             }
//             a[j] = x;
//         }
//     }
//     for(i = 0;i < N ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
/*
 *
 *��������--���ֲ��ҵķ�ʽ
 *
 */
/*
 *����һ��Insert����
 * @a��������
 * @n�������Ԫ�ظ���
 * @x��Ҫ���������
 */
void Insert(int a[],int n,int x)
{
  int i = 0;
  int l = 0;
  int r = n - 2;//��Ϊ�����鸳ֵ���ٸ�Ԫ�ص�ʱ�򣬻��Ԥ��һ���ռ䣬��ô���ұߵ��±߾���Ҫ���һ
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if(a[mid] > x)
    {
     r = mid - 1;
    }
   else if( a[mid] < x)
   {
     l = mid + 1;
   }
  }
  //�ҵ���Ҫ�����λ�õ�������� l ����ô������в������
  for(i = n - 2 ; i>=l ; i--)
  {
    a[i+1] = a[i];
  }
  a[l] = x;
}
int main()
{
 int a[N] = {0};
 printf("������ʮ��������:\n");
 int i = 0;
 int j = 0;
 for(i = 0;i < N ;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i = 1; i < N ;i++)
 {
   Insert(a,i + 1,a[i]);
 }
 for(i = 0;i < N ;i++)
 {
  printf("%d ",a[i]);
 }
 return 0;
}
