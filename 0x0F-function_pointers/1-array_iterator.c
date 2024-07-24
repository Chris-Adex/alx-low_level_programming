
/**
  * array_iterator - funct that executes a func given as parameter
  * @array: array of elements
  * @size: size of array
  * @action: pointer to function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array && size > 0 && action)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}
}
