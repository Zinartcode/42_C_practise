int	ft_strcmp(char *s1, char *s2)
{
    int	count;
    
    count = 0;
    while (s1[count] == s2[count])
    {
        if (s1[count] == '\0')
        return (0);
        count++;
    }
    return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
}
