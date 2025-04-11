#include <stdio.h>

int main() 
{
	int colorful_balls[15] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15};
	int size = sizeof(colorful_balls) / sizeof(colorful_balls[0]);
	
	printf("В коробке colorful_balls помещается %d шариков.\n", size);
	return 0;
}
