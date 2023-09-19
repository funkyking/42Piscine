int	fct(int const * tab, const int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	tab++;
	while (i < size)
	{
		if (tab[i] == 0)
			count++;
		//tab[i] = 15;
		i++;
	}
	return (count);
}
