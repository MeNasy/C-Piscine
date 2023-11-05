/*
 ███▄ ▄███▓▓█████  ███▄    █  ▄▄▄        ██████▓██   ██▓
▓██▒▀█▀ ██▒▓█   ▀  ██ ▀█   █ ▒████▄    ▒██    ▒ ▒██  ██▒
▓██    ▓██░▒███   ▓██  ▀█ ██▒▒██  ▀█▄  ░ ▓██▄    ▒██ ██░
▒██    ▒██ ▒▓█  ▄ ▓██▒  ▐▌██▒░██▄▄▄▄██   ▒   ██▒ ░ ▐██▓░
▒██▒   ░██▒░▒████▒▒██░   ▓██░ ▓█   ▓██▒▒██████▒▒ ░ ██▒▓░
░ ▒░   ░  ░░░ ▒░ ░░ ▒░   ▒ ▒  ▒▒   ▓▒█░▒ ▒▓▒ ▒ ░  ██▒▒▒
░  ░      ░ ░ ░  ░░ ░░   ░ ▒░  ▒   ▒▒ ░░ ░▒  ░ ░▓██ ░▒░
░      ░      ░      ░   ░ ░   ░   ▒   ░  ░  ░  ▒ ▒ ░░
       ░      ░  ░         ░       ░  ░      ░  ░ ░
                                                ░ ░*/
int	ft_atoi(char *str)
{
	int	i;
	int	isaret;
	int	sayi;

	sayi = 0;
	i = 0;
	isaret = 1;
	if (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				isaret *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			sayi = sayi * 10 + (str[i] - 48);
			i++;
		}
		return (isaret * sayi);
	}
	return (0);
}
