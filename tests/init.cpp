#include <qSort.hpp>
#include <catch.hpp>

SCENARIO("qSort","[sort]")
{
 	int matrix[6] = { 222 , 111, 666, 333, 555, 444 };
	int sorted_matrix[6] =  { 111, 222, 333, 444, 555, 666 };
	int* first = &matrix[0];
	int* second = &matrix[6];
	qSort(first, second);
	bool check = NULL;
	for (int i = 0; i < 6; i++)
	if (matrix[i] == sorted_matrix[i])
	check = true;
	REQUIRE(check == true);
}
