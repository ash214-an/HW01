#include <iostream>
using namespace std;

int getSum(int arr[], int Size)
{
	int Sum = 0;
	for (int i = 0; i < Size; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double getAverage(int arr[], int Size)
{
	int Sum = getSum(arr, Size);
	return static_cast<double>(Sum) / Size;
}


int main()
{
	const int Size = 5;
	int numbers[Size];

	cout << "5개의 정수를 입력하세요:\n";
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << "번째 정수:";
		cin >> numbers[i];
	}

	int sum = getSum(numbers, Size);
	int avg = getAverage(numbers, Size);
	
	cout << "\n합계:" << sum << endl;
	cout << "평균:" << avg << endl;

	return 0;
}


	
