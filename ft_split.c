/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:51:28 by fneri             #+#    #+#             */
/*   Updated: 2023/10/12 17:29:11 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	declare_variables(size_t *i, size_t *start,
							size_t *word_count, size_t *word_len)
{
	*i = 0;
	*start = 0;
	*word_count = 0;
	*word_len = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	word_count;
	size_t	word_len;
	char	**result;

	declare_variables(&i, &start, &word_count, &word_len);
	result = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (i++ <= ft_strlen(s))
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
	result[word_count] = NULL;
	return (result);
}

/*int main()
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
}*/
