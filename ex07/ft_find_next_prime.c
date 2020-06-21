intft_is_prime(int nb)
{
inti;

i = 2;
if (nb <= 1)
return (0);
while (i <= nb / i)
{
if (nb % i == 0)
return (0);
i++;
}
return (1);
}

intft_find_next_prime(int nb)
{
inti;

if (nb < 2)
nb = 2;
i = nb;
while (i < 2 * nb)
{
if (ft_is_prime(i))
return (i);
i++;
}
return (0);
}
