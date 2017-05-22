#include <iostream>
#include <iterator>

using namespace std;

template <typename Iterator>

void qSort(Iterator b, Iterator e)
{
	Iterator pivot = e - 1;
	Iterator j = e - 1;
	Iterator i = b;
	while (i <= j)
	{
		while (*i < *pivot)
		{
			++i;
		}
		while (*j > *pivot)
		{
			--j;
		}
		if (i <= j)
		{
			iter_swap(j, i);
			++i;
			--j;
		}
	}
	if (i < e)
		qSort(i, e);
	if (b < j)
		qSort(b, j + 1);
}