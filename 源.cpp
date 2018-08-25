#include<iostream>

#include<math.h>
using namespace std;

void InsertionSort(int sort[],int count)
{
	for (int i = 1; i < count; i++)
		for (int j = i; j > 0; j--)
			if (sort[j] >= sort[j - 1])
				break;
			else
				swap(sort[j], sort[j - 1]);
}

int main()
{
	int array[] = {53,2232,45,33,2,45,43,2,334,657};
	InsertionSort(array,sizeof(array)/sizeof(array[0]));
	for (auto c : array)
		cout<<c<<endl;
	system("pause");
	return 0;
}