//数组的初始化和值的定义
//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < 10; ++i)
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}

//冒泡排序
//#include<iostream>
//
//using namespace std;
//void bubble(int vn[], int size)
//{
//	int temp;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - i;j++)
//		{
//			if (vn[j]>vn[j + 1])
//			{
//				temp = vn[j];
//				vn[j] = vn[j + 1];
//					vn[j + 1] = temp;
//			}
//		}
//		for (int m = 0; m < size; m++)
//		{
//			cout << vn[m] << ",";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int v[10] = { 17, 12, 69, 14, 59, 32, 78, 96, 2, 64 };
//	bubble(v, 10);
//	return 0;
//}

//求最大值
//#include<iostream>
//
//using namespace std;
//int GetMaxValue(int array[4][5])
//{
//	int maxValue = array[4][5];
//	for (int i = 0; i < 5; ++i)
//	{
//		for (int j = 1; j < 6; j++)
//		{
//			if (array[i][j]>maxValue)
//			{
//				maxValue = array[i][j];
//			}
//		}
//	}
//	return maxValue;
//}
//
//int main()
//{
//	int array[4][5] = { { 1, 2, 3, 4, 5 }, { 5, 4, 3, 2, 1 }, { 4, 5, 6, 7, 8 }, { 9, 8, 7, 6, 5 } };
//	int ret = GetMaxValue(array);
//	cout << ret << endl;
//	return 0;
//}

//杨辉三角
//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//int main()
//{
//	int i, j, a[11][11];
//	for (i = 1; i < 11; i++)
//	{
//		a[i][i] = 1;
//		a[i][1] = 1;
//	}
//	for (i = 3; i < 11; i++)
//		for (j = 2; j <= i - 1; j++)
//			a[i][j] = a[i - 1][j - 1]+a[i-1][j];
//	for (i = 1; i < 11; i++)
//	{
//		for (j = 1; j <= i; j++)
//			cout << setw(5) << a[i][j] << " ";
//			cout << endl;
//	}
//	cout << endl;
//	return 0;
//}