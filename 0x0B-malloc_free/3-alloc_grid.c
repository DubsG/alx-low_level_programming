#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Loop to reurn a pointer of 2D array of integers
 * @width: input dimension (width)
 * @height:input dimension (height)
 * Return: Return 2 dimensional array
 * On failure: Return 0
 */
int **alloc_grid(int width, int height)
{
	int **wee;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	wee = malloc(sizeof(int *) * height);

	if (wee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		wee[a] = malloc(sizeof(int) * width);

		if (wee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(wee[a]);

			free(wee);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			wee[a][b] = 0;
	}

	return (wee);
}



