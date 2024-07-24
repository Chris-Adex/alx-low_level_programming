
/**
  * array_iterator - func that executes a func given as parameter
  * @array: array of elements
  * @size: size of array
  * @action: pointer to function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size > 0 && action)
	{
		for (x = 0; x < size; x++)
		{
			action(*array);
			array++;
		}
	}
}
