/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:51:28 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 13:31:04 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	declare_variables(size_t *i, size_t *len, size_t *start, size_t *word_count, size_t *word_len, char *s)
{
	*i = 0;
	*len = ft_strlen(s);
	*start = 0;
	*word_count = 0;
	*word_len = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	start;
	size_t	word_count;
	size_t	word_len;
	char	**result;

	declare_variables(&i, &len, &start, &word_count, &word_len, (char *)s);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	while (i++ <= len)
	{
		if (s[i] == c || s[i] == '\0')
		{
			word_len = i - start;
			result[word_count] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!result[word_count])
				return (NULL);
			ft_strlcpy(result[word_count], &s[start], word_len + 1);
			start = i + 1;
			word_count++;
		}
	}
	return (result);
}
/*
int main()
{
	char s[] = "hello,world,ciao";
	char c = ',';
	char **split_result = ft_split(s, c);

	if (split_result) {
		size_t i = 0;
		while (split_result[i] != NULL) {
			printf("%s\n", split_result[i]);
			free(split_result[i]);
			i++;
		}
		free(split_result);
	} else {
		printf("Memory allocation error\n");
	}

	return 0;
}
*/