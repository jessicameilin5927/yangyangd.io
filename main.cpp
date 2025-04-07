#include<stdio.h>
#include<math.h>
int main()
{
	float y, x, z;

	printf("洋洋姐\n");
	printf("今天又坚持锻炼了\n");
	printf("坚持就是胜利\n");
	printf("锲而不舍\n");
	printf("金石可镂\n");
	printf("\n\n\n");
	printf("然而\n");
	printf("我看了三集如懿传\n");
	printf("马上该睡觉了:\n");

	for (double y = 2.5; y >= -1.6; y = y - 0.2)
	{
		for (double x = -3; x <= 4.8; x = x + 0.1)
		{
			(pow((x * x + y * y - 1), 3) <= 3.6 * x * x * y * y * y
				|| (x > -2.4 && x < -2.1 && y<1.5 && y>-1)
				|| (((x < 2.5 && x>2.2) || (x > 3.4 && x < 3.7)) && y > -1 && y < 1.5)
				|| (y > -1 && y < -0.6 && x < 3.7 && x>2.2)) ? printf("*") : printf(" ");
		}

		printf("\n");
	}

	getchar();
}
