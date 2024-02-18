#include <iostream>
using namespace std;

template <class T>
T SumArray(T arr[], int len)
{
	T sum = (T)0;
	for (int i = 0; i < len; i++)
		sum += arr[i];
	return sum;
}

int main(void)
{
	int arr1[] = {1, 2, 3, 4, 5};
	cout<<SumArray<int>(arr1, 5)<<endl;
	double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	cout<<SumArray<double>(arr2, 5)<<endl;
	return 0;
}