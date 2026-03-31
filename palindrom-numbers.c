int ft_intlen(int x)
{
    int i = 0;

    while (x != 0)
    {
        x /= 10;
        i++;
    }
    return (i);
}

long ft_revint(int x)
{
    int len = ft_intlen(x);
    int i = 0;
    long rev = 0;

    while (i < len)
    {
        rev *= 10;
        rev += x % 10;
        x /= 10;
        i++;
    }
    return (rev);
}

bool isPalindrome(int x) {
    int rev = ft_revint(x);

    if (x < 0)
        return (false);
    if (rev == x)
        return (true);
    return (false);
}