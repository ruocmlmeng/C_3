/**
  ******************************************************************************
  * @file           : test_7_6.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/6
  ******************************************************************************
  */
#include<stdio.h>

#include <stdint.h>

/*
 *
 *ѡ������
 *
 */
// #define N 10
// int main()
// {
//   int a[N];
//   printf("������ʮ������\n");
//   int i = 0;
//   for(i = 0 ; i < N ;i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   for(i = 0; i < N -1; i ++)
//   {
//     int j = 0;
//     int max_index = 0;
//     int max = INT32_MIN;
//     for (j = 0; j < N - i;j++)
//     {
//       if(a[j] > max)
//       {
//         max = a[j];
//         max_index = j;
//       }
//     }
//     if(max_index != N - 1 - i)
//     {
//       int temp = a[max_index];
//       a[max_index] = a[N - 1 - i];
//       a[N - 1 - i] = temp;
//     }
//   }
//   for(i = 0 ; i < N ;i++)
//   {
//     printf("%d",a[i]);
//   }
//   return 0;
// }

/*
 *
 *��������-�Ա����ķ�ʽ
 *
 */
// #define N 10
// int main()
// {
//     int a[N];
//     printf("������ʮ������\n");
//     int i = 0;
//     for(i = 0 ; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int x = 0;//���������ݴ������ֵ
//     for(i = 1; i < N ; i++)
//     {
//         int j = 0;
//         for(j = 0 ; j < i ;j++)
//         {
//             if(a[j] > a[i])
//             {
//                 //�ҵ��ˣ��±�λ�þ���j
//                 break;
//             }
//         }
//         x = a[i];
//         int k = 0;
//         for(k = i - 1; k >= j;k--)
//         {
//             a[k+1] = a[k];
//         }
//         a[j] = x;
//     }
//     for(i = 0 ; i < N ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
/*
 *
 *���ֲ���
 *
 */
// #define N 10
// int main()
// {
//     int a[N];
//     printf("������ʮ������\n");
//     int i = 0;
//     for(i = 0 ; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("������x:\n");
//     int x = 0;
//     scanf("%d",&x);
//     int l = 0;
//     int r = N - 1;
//     while(l <= r)
//     {
//         int mid = (r + r) / 2;
//         if(a[mid] > x)
//         {
//             r = mid - 1;
//         }
//         else if(a[mid] < x)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             break;
//         }
//     }
//     if(l <= r)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//
//     return 0;
// }
/*
 *
 *��������-�Զ��ֲ��ҵ���ʽ
 *
 */
/*
 * ����һ��Insert����
 * @a��������
 * @n������Ԫ�صĸ���
 * @x��Ҫ���ֲ��Ҳ������
 */
// void Insert(int a[],int n,int x)
// {
//   int l = 0;
//   int r = n - 2;
//   while (l <=r)
//   {
//    int mid = (l + r ) / 2;
//    if(a[mid] > x)
//    {
//     r = mid - 1;
//    }
//    else if(a[mid] < x)
//    {
//     l = mid + 1;
//    }
//   }
//   //�ҵ���֮��ͽ��в������
//   int k = 0;
//   for(k = n - 2 ; k >=l;k--)
//   {
//    a[k+1] = a[k];
//   }
//   a[l] = x;
// }
// #define N 10
// int main()
// {
//  int a[N];
//  printf("������ʮ������\n");
//  int i = 0;
//  for(i = 0 ; i < N ;i++)
//  {
//   scanf("%d",&a[i]);
//  }
//  for (i = 1; i < N ;i++)
//  {
//    Insert(a,i+1,a[i]);
//  }
//  for(i = 0 ; i < N ;i++)
//  {
//   printf("%d ",a[i]);
//  }
//  return 0;
// }
/*
 *
 *
  6.(ѡ��) ���鲿�ֺ͵�����
  ������һ������a[N] N<=20
  �ܲ��ܴ�����a����ѡM��Ԫ��(M<=N),ʹ�����ΪK.
  M,k�������û�����
 *
 */

// int main() {
//  int N, M, K;
//  printf("���������鳤��N (N<=20): ");
//  scanf("%d", &N);
//  int a[N];
//  printf("����������Ԫ��: ");
//  for (int i = 0; i < N; i++) {
//   scanf("%d", &a[i]);
//  }
//  printf("�������Ӽ�Ԫ�ظ���M (M<=N): ");
//  scanf("%d", &M);
//  printf("������Ŀ���K: ");
//  scanf("%d", &K);
//
//  int totalSubsets = 1 << N;  // 2^N���Ӽ�
//  for (int i = 0; i < totalSubsets; i++) {//ѭ��ÿ���Ӽ�
//   int sum = 0;
//   int count = 0;
//   for (int j = 0; j < N; j++) {
//    if (i & (1 << j)) {  // �жϵ�jλ�Ƿ�Ϊ1
//     sum += a[j];
//     count++;
//    }
//   }
//   if (count == M && sum == K) {
//    printf("����һ���Ӽ���Ϊ %d\n", K);
//    return 0;
//   }
//  }
//
//  printf("�����������������Ӽ�\n");
//  return 0;
// }

/**
 *
 * ���һ����������һ�����͵Ķ�������ʽ�У��ж��ٸ�1
 */
/*
 *
 * num:��һ�����Ͷ����ƣ��ж��ٸ�1
 * @x�����������
 * ����ֵ��count>=0 ����1�ĸ���
 */
// int num(int x)
// {
//   int i = 0;
//   int count = 0;
//   for(i = 0; i < sizeof(x) *8 ;i++)
//   {
//     if(x & (1<<i))
//     {
//      count++;
//     }
//   }
//  return count;
// }
// int main()
// {
//   int x = 0;
//   printf("����һ������:\n");
//   scanf("%d",&x);
//   int res = num(x);
//   printf("%d�Ķ�������ʽ����%d��1\n",x,res);
//   return 0;
// }
/*
 *   IsArray:�ж�һ��һά��Int���͵����飬�Ƿ�����
 *   @a:������
 *   @n:�����ĸ���
 *   ����ֵ��
 *        0����������
 *        1 ������
 */
// int  IsArray(int a[],int n)
// {
//  int i = 0;
//  for (i = 0; i < n - 1;i++)
//  {
//      int j = 0;
//      for(j = i + 1; j < n ; j++)
//      {
//        if(a[j] < a[i])
//        {
//          return 0;
//        }
//      }
//  }
//  return 1;
// }
// int main()
// {
//   int a[5] = {0};
//   int i = 0;
//   for (i = 0; i < 5; i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   int res = IsArray(a,5);
//   if(res)
//   {
//    printf("������Ϊ��������\n");
//   }
//   else
//   {
//   printf("������Ϊ��������\n");
//   }
//   return 0;
// }
// int  IsArray(int a[],int n)
// {
//  int i = 0;
//  for (i = 0; i < n - 1;i++)
//  {
//   int j = 0;
//   for(j = i + 1; j < n ; j++)
//   {
//    if(a[j] < a[i])
//    {
//     return 0;
//    }
//   }
//  }
//  return 1;
// }
// int main()
// {
//  int a[5] = {0};
//  int i = 0;
//  for (i = 0; i < 5; i++)
//  {
//   scanf("%d",&a[i]);
//  }
//  int res = IsArray(a,5);
//  if(res)
//  {
//   printf("������Ϊ��������\n");
//  }
//  else
//  {
//   printf("������Ϊ��������\n");
//  }
//  return 0;
// }

int  IsArray(int a[],int n)
{
 int i = 0;
 for (i = 0; i < n - 1;i++)
 {
  int j = 0;
  for(j = i + 1; j < n ; j++)
  {
   if(a[j] < a[i])
   {
    return 0;
   }
  }
 }
 return 1;
}
int main()
{
 int a[5] = {0};
 int i = 0;
 for (i = 0; i < 5; i++)
 {
  scanf("%d",&a[i]);
 }
 int res = IsArray(a,5);
 if(res)
 {
  printf("������Ϊ��������\n");
 }
 else
 {
  printf("������Ϊ��������\n");
 }
 return 0;
}
