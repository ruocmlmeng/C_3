/**
  ******************************************************************************
  * @file           : test_7_5.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/5
  ******************************************************************************
  */
/*
 *�㷨һ��
 *m n
 *ȡֵ��Χ�������Լ����ȡֵ��Χ[1,m��n���Ǹ�С����]
 *
 */
#include<stdio.h>
// #define min(a,b) (a) < (b) ? a : b
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     printf("������������:\n");
//     scanf("%d%d",&num1,&num2);
//     int i = 0;
//     for( i = min(num1,num2); i>=1;i--)
//     {
//         if(num1 % i == 0 && num2 %i ==0 )
//         {
//             printf("%d ",i);
//             break;
//         }
//     }
//     return 0;
// }

/*
 *�㷨��:
 *  ŷ������㷨
 *  ���ȱ�֤m > n
 *  #define max(m,n) (m) > (n) ? (m) : (n)
 */

// int main()
// {
//     int arr[10] = {2,5,4,3,1,6,7,9,8,10};
//     int i = 0;
//     for(i = 0; i < sizeof(arr) / sizeof(arr[0])-1;i++)
//     {
//
//         int j = 0;
//         for(j = 0; j < sizeof(arr) / sizeof(arr[0]) -1-i ;j++)
//         {
//             if(arr[0] >arr[j+1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (i = 0; i < sizeof(arr) /sizeof(arr[0]);i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #define N 10
// int main()
// {
//     int arr[10] = {0};
//     int i = 0;
//     int j = 0;
//     for(i = 0; i< N ;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i = 0; i < N-1;i++)
//     {
//
//         int max_index = 0;
//         int max = arr[0];
//
//         for(j = 0;j < N -i ;j++)
//         {
//             if(arr[j] > arr[max_index])
//             {
//                 // max = arr[j];
//                 max_index = j;
//             }
//             if(max_index != N-1-i)
//             {
//                 // int temp = arr[max_index];
//                 // arr[max_index] = arr[j];
//                 // arr[j] = temp;
//                 int temp = arr[max_index];
//                 arr[max_index] = arr[N-1-i];
//                 arr[N-1-i] = temp;
//             }
//         }
//     }
//     for(i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #define N 10
// int main()
// {
//     int arr[10] = {2,5,4,3,1,6,7,9,8,10};
//     int i = 0;
//     int max = 0;
//     int max_index = 0;
//     for(i = 1; i <= N-1;i++)
//     {
//         max = arr[0];
//         max_index = 0;
//         int j = 0;
//         for(j = 0;j < N - i+1 ;j++) //��������ʣ��Ԫ��,�����е����ֵ
//         {
//             if(arr[j] > max)
//             {
//                 max = arr[j];
//                 max_index = j;
//             }
//             //max����������ʣ��Ԫ���е����ֵ
//             //max_i����ʣ��Ԫ�����ֵ���±�
//             //�����ֵ��Ԫ�� ��ʣ�ಿ�����λ�� ����
//             if(max_index != j)
//             {
//                 int temp = arr[max_index];
//                 arr[max_index] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// /*
//  *
//  * ����ʵ�ֲ������
//  */
// #define  N 10
// void Insert(int a[],int n ,int x)
// {
//     //�ҵ�����λ��
//     int L = 0;
//     int R = n - 2;
//     int mid;
//     while(L <= R)
//     {
//         mid = (L + R) / 2;
//         if(x>a[mid])
//         {
//             L = mid + 1;
//         }
//         else if(x < a[mid])
//         {
//             R = mid - 1;
//         }
//     }
//     //ѭ������,��ô��ʱ�������λ���±��ΪL

//     //�������
//     int i = 0;
//     for(i = n - 2; i >= L ; i--)
//     {
//         a[i+1] = a[i];
//     }
//     a[L] = x;
// }
// int main()
// {
//     int a[N];
//     int i,j,k;
//     for (i = 0; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(j = 1; j < N ;j++)
//     {
//         Insert(a,j+1,a[j]);
//     }


//     // for(i = 1; i < N;i++)
//     // {
//     //     for(j = 0; j < i;j++)
//     //     {
//     //         if(a[j] > a[i])
//     //         {
//     //             //�ҵ���,�±�λ�þ�Ϊj
//     //             break;
//     //         }
//     //     }
//     //     //a.break ��;ز��,��ʱ�����λ���±�һ��Ϊj
//     //     //b.û���ҵ�,ѭ����������,��ʱ�����λ��Ϊ����� =>�±�Ϊi
//     //     //������� (�Ƚ�Ԫ��������Ų,�ճ�������Ԫ�ص�λ��)������û���ҵ�
//     //     int x = a[i];//����a[i]
//     //     for(k = i -1 ; k>=j ;k--)
//     //     {
//     //         a[k+1] = a[k];
//     //     }
//     //     a[j] = x;
//     // }
//     for (i = 0; i < N ;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }
// /*
//  *
//  * ����ʵ�ֲ������
//  */
// #define  N 10
// void Insert(int a[],int n ,int x)
// {
//     //�ҵ�����λ��
//     int L = 0;
//     int R = n - 2;
//     int mid;
//     while(L <= R)
//     {
//         mid = (L + R) / 2;
//         if(x>a[mid])
//         {
//             L = mid + 1;
//         }
//         else if(x < a[mid])
//         {
//             R = mid - 1;
//         }
//     }
//     //ѭ������,��ô��ʱ�������λ���±��ΪL

//     //�������
//     int i = 0;
//     for(i = n - 2; i >= L ; i--)
//     {
//         a[i+1] = a[i];
//     }
//     a[L] = x;
// }
// int main()
// {
//     int a[N];
//     int i,j,k;
//     for (i = 0; i < N ;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(j = 1; j < N ;j++)
//     {
//         Insert(a,j+1,a[j]);
//     }


//     // for(i = 1; i < N;i++)
//     // {
//     //     for(j = 0; j < i;j++)
//     //     {
//     //         if(a[j] > a[i])
//     //         {
//     //             //�ҵ���,�±�λ�þ�Ϊj
//     //             break;
//     //         }
//     //     }
//     //     //a.break ��;ز��,��ʱ�����λ���±�һ��Ϊj
//     //     //b.û���ҵ�,ѭ����������,��ʱ�����λ��Ϊ����� =>�±�Ϊi
//     //     //������� (�Ƚ�Ԫ��������Ų,�ճ�������Ԫ�ص�λ��)������û���ҵ�
//     //     int x = a[i];//����a[i]
//     //     for(k = i -1 ; k>=j ;k--)
//     //     {
//     //         a[k+1] = a[k];
//     //     }
//     //     a[j] = x;
//     // }
//     for (i = 0; i < N ;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }
struct Data {
 int year;
 int month;
 int day;
};

struct student {
 int num;
 char name[32];
 struct Data birthday;
 int score;
};

int main() {
 struct student *class = malloc(sizeof(*class) * 5);
 if (class == NULL) {
  printf("Memory allocation failed\n");
  return 1;
 }

 int i;
 for (i = 0; i < 5; i++) {
  scanf("%d %s %d-%d-%d %d", &((class + i)->num), (class + i)->name, &((class + i)->birthday.year),
        &((class + i)->birthday.month), &((class + i)->birthday.day), &((class + i)->score));
 }

 for (i = 0; i < 5; i++) {
  printf("%d %s %d-%d-%d %d\n", (class + i)->num, (class + i)->name, (class + i)->birthday.year,
         (class + i)->birthday.month, (class + i)->birthday.day, (class + i)->score);
 }

 free(class); // Don't forget to free the allocated memory
 return 0;
}