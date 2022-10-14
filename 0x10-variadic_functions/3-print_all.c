#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - print character
 * @arg: list
 * Return: nothing
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - print integer
 * @arg: list
 * Return: nothing
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - print float
 * @arg: list
 * Return: nothing
 */
void print_float(va_list arg)
{
	float num2;

	num2 = va_arg(arg, double);
	printf("%f", num2);
}
/**
 * print_str - print string
 * @arg: list
 * Return: nothing
 */
void print_str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - print all data type
 * @format: constant pointer
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;

	va_list(arg);

	char comma = ',';

	i = 0;
	va_start(arg, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				print_char(arg);
				break;
			case 'i':
				print_int(arg);
				break;
			case 'f':
				print_float(arg);
				break;
			case 's':
				print_str(arg);
				break;
		}
		if (i < 3 && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f'))
			printf("%c ", comma);
		i++;
	}
	printf("\n");
	va_end(arg);
}
