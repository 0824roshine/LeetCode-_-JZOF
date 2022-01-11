int mySqrt(int x) {
    if (x == 0)
        return 0;
    int y = x, digt = 1, base = 1, i = 0, square = 0;
    int tgt = 0, p = 0;   //145 10-1112
    while (y / 10)
    {
        y = y / 10;
        digt++;
        if (digt % 2)
            base = base * 10;
    }
    while (base)
    {
        for (i = 9;; i--)
        {
            p = tgt + i * base;
            if (p > 46340)
                continue;
            square = p * p;
            if (square <= x)
                break;
        }
        tgt = p;
        base = base / 10;
    }
    return tgt;
}
int isPerfectSquare(int num) {//ลฃถู
    int mid = num, srt = 0; double a = num;
    while (1)
    {
        a = 0.5 * (a + (mid / a));
        if (((a * a) - num) < 0.000001)
            break;
    }
    srt = a;
    srt = srt * srt;
    if (srt == num)
        return 1;
    else
        return 0;
}