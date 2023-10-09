#include "main.h"
/**
 * *_realloc - Entry point
 * @ptr: param of void
 * @old_size: param of unsigned int
 * @new_size: param of unsigned int
 * Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *freshOne;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	freshOne = malloc(new_size);
	if (freshOne == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		memcpy(freshOne, ptr, new_size);
	}
	else
	{
		memcpy(freshOne, ptr, old_size);
	}
	free(ptr);

	return (freshOne);
}
