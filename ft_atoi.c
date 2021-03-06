/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sarobber <sarobber@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 17:12:53 by sarobber     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 12:51:30 by sarobber    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int			i;
	int			rev;
	long long	nb;

	nb = 0;
	rev = 0;
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\v') || (str[i] == '\n')
		|| (str[i] == '\r') || (str[i] == '\f') || (str[i] == ' '))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			rev = 1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if (rev == 1)
		return (-nb);
	return (nb);
}
