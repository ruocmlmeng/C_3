/**
  ******************************************************************************
  * @file           : test_7_20.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/20
  ******************************************************************************
  */
#include <stdint.h>
#include<stdio.h>


/*
 *选择排序
 *
 */
// int main()
// {
//     int a[10] = {2,3,1,5,9,6,4,8,0,10};
//     int i = 0;
//     int n = sizeof(a) /sizeof(a[0]);
//     int j = 0;
//     for(i = 0;i < n -1;i++)
//     {
//         int max = INT32_MIN;
//         int max_index = i;
//         for(j = 0; j < n-i;j++)
//         {
//             if(a[j] > max)
//             {
//                 max = a[j];
//                 max_index = j;
//
//             }
//         }
//         if(max_index != n - i - 1)
//         {
//             int temp = a[max_index];
//             a[max_index] = a[n -i -1];
//             a[n - i -1] = temp;
//         }
//     }
//     for(i = 0; i < n  ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

/**
 *
 * 插入排序-遍历的方式排序
 */
// int main()
// {
//     int a[10] = {2,3,1,5,9,6,4,8,0,10};
//     int i = 0;
//     int j = 0;
//     int n = sizeof(a) /sizeof(a[0]);
//     int k = 0;
//     for(i = 1 ; i < n-1;i++)
//     {
//         for(j = 0 ; j < i ;j++)
//         {
//             if(a[j] > a[i])
//             {
//                 break;
//             }
//         }
//         int x = a[i];
//         for (k = i - 1; k >= j; k--)
//         {
//             a[k+1] = a[k];
//         }
//         a[j] = x;
//     }
//     for(i = 0 ; i < n ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

/*
 * 插入排序-二分插入排序
 *
 */
/*
 *    Insert: 二分插入排序
 *    @a：数组名
 *    @n：这是一个整数，表示数组中当前元素的数量（即数组的长度）。它告诉函数在什么范围内进行二分查找。
 *    @x：待插入排序的整数
 *    返回值：
 *         无返回值
 */
// void Insert(int a[],int n,int x )
// {
//     int l = 0;
//     int r = n -2;
//     int mid = 0;
//     while (l <= r)
//     {
//        mid = (l + r) / 2;
//        if(x > a[mid])
//        {
//             l = mid + 1;
//        }
//        else if( x < a[mid])
//        {
//             r = mid - 1;
//        }
//     }
//     int k = 0;
//     for(k = n - 2; k >= l; k--)
//     {
//         a[k+1] = a[k];
//     }
//     a[l] = x;
// }
// int main()
// {
//     int a[10] = {2,3,1,5,9,6,4,8,0,10};
//     int i = 0;
//     int n = sizeof(a)/ sizeof(a[0]);
//     for(i = 1; i < n ;i++)
//     {
//        Insert(a,i+1,a[i]);
//     }
//     for( i = 0 ; i < n ;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

/*
 *  请使用二分插入排序算法，编写一个函数实现将一个整数int a插入到
 *  一个升序数组int b[6]中,插入后保持数组b依然为升序
 *
 */

/*
 *  binarySearchInsertPosition:二分查找,返回插入位置的索引
 *  @arr:待传入的数组名
 *  @size:进行二分查找的范围
 *  @value:要查找的数
 *  返回值:
 *       返回待插入的位置的下标
 *
 */
int binarySearchInsertPosition(int arr[],int size,int value)
{
     int left = 0;
     int right = size - 1;
     while(left<= right)
     {
         int mid = left + (left + right) / 2;
          if(value < arr[mid])
          {
              right = mid - 1;
          }
          else
          {
             left = mid + 1;
          }
     }
     return left;
}
// /*
//  *   insertInSortedArray:将要插入的元素插入到数组中
//  *   @arr:数组名
//  *   @size:这是一个指向整数的指针，表示数组的当前大小。
//  *   使用指针传递是为了能够在函数内部修改数组的大小。
//  *   函数通过对这个指针所指向的值进行操作，来更新数组的实际大小。
//  *   @value:待插入的值
//  *   返回值:
//  *        无返回值
//  *
//  */
// void insertInSortedArray(int arr[],int *size,int value)
// {
//       int pos = binarySearchInsertPosition(arr,*size,value);
//       //移动数组中的元素,腾出插入位置
//       for(int i = *size; i > pos; i--)
//       {
//          arr[i] = arr[i-1];
//       }
//       //插入新元素
//        arr[pos] = value;
//
//       //更新数组大小
//        (*size)++;
// }
// void printArray(int arr[],int size)
// {
//   for(int i = 0; i < size ; i++)
//   {
//    printf("%d ",arr[i]);
//   }
//  printf("\n");
// }
// int main()
// {
//     int b[7] = {1,3,5,7,9,11};
//     int size = 6;
//     int a = 8;
//
//     printf("Original array: ");
//     printArray(b,size);
//
//     insertInSortedArray(b,&size,a);
//
//     printf("Array after insertion: ");
//     printArray(b,size);
//     return 0;
// }
/*
 *   insertInSortedArray:将要插入的元素插入到数组中
 *   @arr:数组名
 *   @size:这是一个指向整数的指针，表示数组的当前大小。
 *   使用指针传递是为了能够在函数内部修改数组的大小。
 *   函数通过对这个指针所指向的值进行操作，来更新数组的实际大小。
 *   @value:待插入的值
 *   返回值:
 *        无返回值
 *
 */
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
// void insertInSortedArray(int arr[],int *size,int value)
// {
//  int pos = binarySearchInsertPosition(arr,*size,value);
//  //移动数组中的元素,腾出插入位置
//  for(int i = *size; i > pos; i--)
//  {
//   arr[i] = arr[i-1];
//  }
//  //插入新元素
//  arr[pos] = value;
//
//  //更新数组大小
//  (*size)++;
// }
// void printArray(int arr[],int size)
// {
//  for(int i = 0; i < size ; i++)
//  {
//   printf("%d ",arr[i]);
//  }
//  printf("\n");
// }
// int main()
// {
//  int b[7] = {1,3,5,7,9,11};
//  int size = 6;
//  int a = 8;
//
//  printf("Original array: ");
//  printArray(b,size);
//
//  insertInSortedArray(b,&size,a);
//
//  printf("Array after insertion: ");
//  printArray(b,size);
//  return 0;
// }
void insertInSortedArray(int arr[],int *size,int value)
{
 int pos = binarySearchInsertPosition(arr,*size,value);
 //移动数组中的元素,腾出插入位置
 for(int i = *size; i > pos; i--)
 {
  arr[i] = arr[i-1];
 }
 //插入新元素
 arr[pos] = value;

 //更新数组大小
 (*size)++;
}
void printArray(int arr[],int size)
{
 for(int i = 0; i < size ; i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
}
int main()
{
 int b[7] = {1,3,5,7,9,11};
 int size = 6;
 int a = 8;

 printf("Original array: ");
 printArray(b,size);

 insertInSortedArray(b,&size,a);

 printf("Array after insertion: ");
 printArray(b,size);
 return 0;
}