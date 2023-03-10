/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:41:48 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 20:41:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else if (n >= 0)
        write(1, "P", 1);
    write(1, "\n", 1);
}

/*int main(void)
{
    ft_is_negative(-5);
    return (0);
}*/