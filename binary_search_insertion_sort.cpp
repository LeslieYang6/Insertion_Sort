#include<iostream>

#include<math.h>
using namespace std;

int Binary_Search(int sort[],int start,int end, int x)
{
	if (start == end)
		if (sort[start] >= x)
			return start;
		else return start + 1;
	int n = (start+end) / 2;
	if (n == 0)
		n++;
	if (x < sort[n])
		if (x >= sort[n - 1])
			return n;
		else return Binary_Search(sort, start, n-1, x);
    if (x > sort[n])
		if (x <= sort[n + 1])
			return n + 1;
		else return Binary_Search(sort, n , end, x);
	return n+1;
}

void InsertionSort(int sort[],int count)
{
	for (int i = 1; i < count; i++)
	{
		int j = Binary_Search(sort, 0, i - 1, sort[i]);
		int temp = sort[i];
		swap(sort[j], temp);
		for (int k = j+1; k <= i; k++)
			swap(temp, sort[k]);
	}
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