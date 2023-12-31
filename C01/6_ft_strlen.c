/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:59:57 by justo             #+#    #+#             */
/*   Updated: 2023/11/29 18:59:57 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str){

    int i;
    i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

int main(){
    char str[100] = "pouvoir";
    int i = ft_strlen(str);
    printf("%d", i);
    return 0;
}