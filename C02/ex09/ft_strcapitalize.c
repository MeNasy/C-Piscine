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

char	*lowercase(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 32;
		i++;
	}
	return (string);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	kontrol;

	lowercase(str);
	kontrol = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (kontrol == 0)
			{
				str[i] -= 32;
				kontrol = 1;
			}
		}
		else if (str[i] <= '9' && str[i] >= '0')
		{
				kontrol = 1;
		}
		else
			kontrol = 0;
		i++;
	}
	return (str);
}
