#include <cs50.h>
#include <stdio.h>

bool check_sum(long num);

int main(void)
{
    int digits = 0, single_digits = 0, double_digits = 0;
    bool checksum;
    long user_num = get_long("Your Credit Card Num?: ");
    checksum = check_sum(user_num);
    if (checksum == false)
        return 0;
    while (user_num > 0)
    {
        if (user_num < 10)
        {
            single_digits = user_num;
        }
        if (user_num > 10 && user_num < 100)
        {
            double_digits = user_num;
        }
        user_num /= 10;
        digits++;
    }
    if ((double_digits == 34 || double_digits == 37) && digits == 15)
    {
        printf("AMEX\n");
        return 0;
    }
    else if ((double_digits == 51 || double_digits == 52 || double_digits == 53 ||
              double_digits == 54 || double_digits == 55) &&
             digits == 16)
    {
        printf("MASTERCARD\n");
        return 0;
    }
    else if (single_digits == 4 && (digits == 13 || digits == 16))
    {
        printf("VISA\n");
        return 0;
    }
    else
        printf("INVALID\n");
    return 0;
}

bool check_sum(long num)
{
    int total = 0, buffer = 0;
    bool var = true;
    while (num > 0)
    {
        if (var == true)
        {
            total += num % 10;
            num /= 10;
            var = false;
        }
        else
        {
            buffer = num % 10;
            buffer *= 2;
            if (buffer >= 10)
            {
                total += buffer % 10;
                total += buffer / 10;
            }
            else
            {
                total += buffer;
            }
            var = true;
            num /= 10;
        }
    }
    if (total % 10 == 0)
        return true;
    printf("INVALID\n");
    return false;
}
