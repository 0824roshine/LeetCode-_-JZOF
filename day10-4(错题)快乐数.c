int isHappy(int n)
{
    int tmp = 0;   //��ô��ô�����ˣ�4��Ȼ�ƻ��������Ǿ���
    int k = 0;
    while (n > 4)
    {
        tmp = 0;
        while (n > 0)
        {
            k = n % 10;
            tmp = tmp + (k * k);
            n = n / 10;
        }
        n = tmp;
    }
    if (n == 1)
        return 1;
    else
        return 0;
}