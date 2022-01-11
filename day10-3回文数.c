#include<stdio.h>
#include<stdlib.h>
int MyisPalindrome_1(int x)
{
    int ch[13] = { 0 }; int i = 0; int j = 0; int k = 0;
    if (x < 0)
        return 0;
    if ((x >= 0) && (x < 10))
        return 1;
    else
    {
        for (i = 0; x > 0; i++)
        {
            ch[i] = x % 10;
            x = x / 10;
        }
        k = i / 2;
        for (j = 0; j <= k; j++)
        {
            if (ch[j] != ch[i - 1 - j])
                return 1;
        }
        return 0;
    }
}
int MyisHuiWenShu_2(int x) {
    int max = 1000000000; int y = 0, z = 0;
    int class = 1, digt = 1;
    if (x < 0)
        return 0;
    else if ((x >= 0) && (x < 10))
        return 1;
    else if (x >= max)
    {
        class = max;
    }
    else
    {
        while ((class * 10) < x)
        {
            class = class * 10;
            digt++;
        }
    }
    y = (x / class) * class + (x / class);
    z = (x / class) * class + sqrt(class);
    if ((y < x) && (x < z))
        return 0;
    while (x > 9)  //123321 2332 33
    {
        if ((x / class) == (x % 10))
        {
            x = (x % class) / 10;
            class = class / 100;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
//网上的最快
int isP(int x) {
    if (x < 0)
        return 0;
    long n = 0;
    int k = x;
    while (k) {
        n = n * 10 + k % 10;
        k /= 10;
    }
    if (n == x)
        return 1;
    else
        return 0;
}