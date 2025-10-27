/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:55:18 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/10/27 19:00:31 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The  calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
// The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
// If the multiplication of nmemb and size would result in integer overflow, then calloc() returnsan error.
// By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated