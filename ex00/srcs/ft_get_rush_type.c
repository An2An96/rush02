int		ft_get_type(char *str, int cols, int rows, int types[3])
{
	int lu = 0;
	int ru = cols - 1;
	int dl = (cols + 1) * (rows - 1);
	int dr = (cols + 1) * rows - 2;

	if (str[lu] == 'o' && str[ru] == 'o' && str[dl] == 'o' && str[dr] == 'o')
	{
		types[0] = 0;
		return (1);
	}
	else if (str[lu] == '/' && str[ru] == '\\' && str[dl] == '\\' && str[dr] == '/')
	{
		types[0] = 1;
		return (1);
	}
	else if (str[lu] == 'A' && str[ru] == 'A' && str[dl] == 'C' && str[dr] == 'C')
	{
		types[0] = 2;
		return (1);
	}
	else if (str[lu] == 'A' && str[ru] == 'C' && str[dl] == 'A' && str[dr] == 'C')
	{
		types[0] = 3;
		return (1);
	}
	else if (str[lu] == 'A' && str[ru] == 'C' && str[dl] == 'C' && str[dr] == 'A')
	{
		types[0] = 4;
		return (1);
	}
	return (0);
}
