#include <ctype.h>
#include "main.h"
/**
 * is_positive_number - Entry point
 * @str: pointer
 * Return: 0 Always
 */
int is_positive_number(char *str)
{
	int i;
	int num;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	num = atoi(str);

	return (num > 0);
}
/**
 * add_positive_numbers - Entry point
 * @argc: index of list argv
 * @argv: list of strings
 * Return: Always 0
 */
int add_positive_numbers(int argc, char *argv[])
{
	int total = 0;
	int error_flag = 0;
	int i;
	int num;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			error_flag = 1;
			break;
		}
		num = atoi(argv[i]);

		total += num;
	}

	if (error_flag)
	{
		return (1);
	}
	else
	{
		printf("%d\n", total);
		return (0);
	}
}
/**
 * main - Entry point
 * @argc: index of list argv
 * @argv: list of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		return (add_positive_numbers(argc, argv));
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
