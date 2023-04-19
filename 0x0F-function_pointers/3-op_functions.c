/**
 * op_add - Returns the sum of a and b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: The result of the division of a by b.
 *         If b is 0, it returns 0.
 */

int op_div(int a, int b)
{
	if (b == 0)
		return (0);

	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: The remainder of the division of a by b.
 *         If b is 0, it returns 0.
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return (0);

	return (a % b);
}
