#include<stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_sep_len(char *sep, int size)
{
	int tot_len;

	tot_len = ft_strlen(sep) * (size - 1);
	return (tot_len);
}

int ft_strs_len(char **strs, int size)
{
	int tot_len;
	int i;

	tot_len = 0;
	i = 0;
	while (i < size)
	{
		tot_len += ft_strlen(strs[i]);
		i++;
	}
	return (tot_len);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char    *final_string;
	int     tot_len;
	int     i;

	tot_len = ft_sep_len(sep, size) + ft_strs_len(strs, size);
	final_string = (char *)malloc(sizeof(char) * tot_len);
	i = 0;
	while (i < size)
	{
		if (i == (size - 1))
		{
			ft_strcat(final_string, strs[i]);
			return (final_string);
		}
		ft_strcat(final_string, strs[i]);
		ft_strcat(final_string, sep);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char *strs[50] = {"Hello", "My", "Name", "Is", "Balou", "I", "Am", "Pleased", "To", "Meet", "You"};
	char *sep = "+";
	int size = 11;

	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}*/