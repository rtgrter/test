#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    //int arr1[n];
//    //int arr2[m];
//    int arr1[1000];
//    int arr2[1000];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    while (j < n && k < m)
//    {
//        if (arr1[j] < arr2[k])
//        {
//            printf("%d ", arr1[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d ", arr2[k]);
//            k++;
//        }
//    }
//    if (j < n)
//    {
//        for (; j < n; j++)
//        {
//            printf("%d ", arr1[j]);
//        }
//    }
//    else
//    {
//        for (; k < m; k++)
//        {
//            printf("%d ", arr2[k]);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n=0;
//    int m=0;
//    scanf("%d%d",&n,&m);
//    //定义数组，vs编译环境数组元素个数必须用常量修饰
//    int arr1[n];
//    int arr2[m];
//    int arr3[n+m];
//    int i=0;
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr1[i]);
//    }
//    for(i=0;i<m;i++)
//    {
//        scanf("%d",&arr2[i]);
//    }
//    int j=0;
//    int k=0;
//    int l=0;
//    while(j<n&&k<m)
//    {
//        if(arr1[j]<arr2[k])
//        {
//            arr3[l++]=arr1[j];
//            j++;
//        }
//        else
//        {
//            arr3[l++]=arr2[k];
//            k++;
//        }
//    }
//    if(j<n)
//    {
//        for(;j<n;j++)
//        {
//            arr3[l++]=arr1[j];
//        }
//    }
//    else
//    {
//        for(;k<m;k++)
//        {
//             arr3[l++]=arr2[k];
//        }
//    }
//    for(i=0;i<n+m;i++)
//    {
//        printf("%d ",arr3[i]);
//    }
//    return 0;
//}