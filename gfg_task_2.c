#include <stdio.h>

int main()
{
	int index, number, array[] = {1, 2, 3, 4, 5, 6};
	printf("Enter index: ");
	scanf("%d", &index);

	if (index > 5)
	{
		printf("Invalid Index");
		return 0;
	}

	printf("Enter number: ");
	scanf("%d", &number);

	int a = array[index];
	array[index] = number;

	if (index != 5)
	{
		for (int i = index + 1; i <= 5; i++)
		{
			array[i] = a;
			a++;
		}
	}

	for (int i = 0; i <= 5; i++)
	{
		printf("%d ", array[i]);
	}
}