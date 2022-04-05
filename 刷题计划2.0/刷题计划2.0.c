int main()
{
	int i, c = 0, num = 0, count = 0;
	for (i = 6; i <= 10; i++)
	{
		int ret = i;
		while (ret)
		{
			if (ret % 2 == 1)
				c++;
			ret /= 2;
		}
		if (c == 3 || c == 2 || c == 5 || c == 7 || c == 11 || c == 13 ||
			c == 17 || c == 19 || c == 23 || c == 29 || c == 31)
			count++;
	}
	printf("%d ", count);
	return 0;
}