#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "test.c"

//void bubble_sort(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (arr[left] < arr[right])
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,8,9,7,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//    printf("c:\\code\\test.c\n");
//    return 0;
//}
//int main()
//{
//    //����1������Ļ�ϴ�ӡһ��������'����ô����
//    //����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//    printf("%c %c\n", '\'','\'');
//    printf("%s\n", "\" \"");
//    return 0;
//}
//int main()
//{
//    printf("%d\n", strlen("abcdef"));
//    // \62��������һ��ת���ַ�
//    printf("%d\n", strlen("c:\test\628\test.c"));
//    return 0;
//}
//void test()
//{
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}

//test.c
//int main()
//{
//    printf("%d\n", g_val);
//    return 0;
//}
//static int Add(int x, int y)
//{
//    return x + y;
//}
////test.c
//int main()
//{
//    printf("%d\n", Add(2, 3));
//    return 0;
//}
//int main()
//{
//    int num = 10;
//    &num;//ȡ��num�ĵ�ַ
//    //ע������num��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//    printf("%p\n", &num);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}
//int main()
//{
// int i = 1;
// while(i<=10)
// {
// if(i == 5)
// continue;
// printf("%d ", i);
// i = i+1;
// }
// return 0;
//}
//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}
//int main()
//{
//    //int i = 0;
//    //int j = 0;
//    ////�����ӡ���ٸ�hehe?
//    //for (; i < 10; i++)
//    //{
//    //    for (j = 0; j < 10; j++)
//    //    {
//    //        printf("hehe\n");
//    //    }
//    //}
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
//int main()
//{
// int i = 10;
//    
// do
// {
//        if(5 == i)
//            continue;
// printf("%d\n", i);
// }while(i<10);
//    
// return 0;
//}
int main()
{
    char input[10] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
    scanf("%s", input);
    if (0 == strcmp(input, "������"))
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}








