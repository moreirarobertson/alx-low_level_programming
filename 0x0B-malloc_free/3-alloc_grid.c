#include "main.h"
#include <stdlib.h>
		
/**
		
 * alloc_grid -  a function that returns a pointer to a 2 dimensional array of integers.
		
 * @width: width input value
		
 * @height: height input value
		
 * Return: NULL on failure
		
 */
int **alloc_grid(int width, int height);
{

	int **arr;

	int h, w;



	if (width <= 0 || height <= 0)

		return (NULL);



	arr  = malloc(sizeof(int *) * height);



	if (arr == NULL)

		return (NULL);



	for (h = 0; h < height; h++)

	{

		arr[h] = malloc(sizeof(int) * width);



		if (arr[h] == NULL)

		{

			for (; h >= 0; h--)

				free(arr[h]);



			free(arr);

			return (NULL);

		}

	}



	for (h = 0; h < height; h++)

	{

		for (w = 0; w < width; w++)

			arr[h][w] = 0;

	}



	return (arr);

}
