#include <cs50.h>
#include <stdio.h>
int secdigit(long h);
int firstdigit(long z);
int cardlen(long x);
int checksum(long b);
int main()
{
    long b, a = get_long("Number: ");
    b = a;
    if (checksum(a))
    {
        if (cardlen(a) == 13 || cardlen(a) == 16)
        {
            if (firstdigit(a) == 4)
            {
                printf("VISA\n");
            }
            else if (firstdigit(a) == 5)
            {
                if (secdigit(a) == 1 || secdigit(a) == 2 || secdigit(a) == 3 || secdigit(a) == 4 || secdigit(a) == 5)
                {
                    printf("MASTERCARD\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (cardlen(a) == 15)
        {
            if (firstdigit(a) == 3)
            {
                if (secdigit(a) == 7 || secdigit(a) == 4)
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int checksum(long b)
{
    long d = b;
    int sum = 0;
    while (b > 0)
    {
        b = b / 10;
        if (2 * (b % 10) >= 10)
        {
            int c = 2 * (b % 10);
            while (c > 0)
            {
                sum += c % 10;
                c = c / 10;
            }
        }
        else
        {
            sum += (2 * (b % 10));
        }
        b = b / 10;
    }
    while (d > 0)
    {
        sum += d % 10;
        d = d / 100;
    }
    if (sum % 10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int cardlen(long x)
{
    int len = 0;
    while (x > 0)
    {
        len++;
        x = x / 10;
    }
    return len;
}

int firstdigit(long z)
{
    long s = 0;
    while (z > 0)
    {
        s = z;
        z = z / 10;
    }
    return s;
}

int secdigit(long h)
{
    long q = 0;
    while (h >= 10)
    {
        q = h % 10;
        h = h / 10;
    }
    return q;
}
