#include <stdio.h>

int nand_bool(int x, int y)
{
    int res = (x + y == 2) ? 0 : 1;
    return res;
}

int not_bool(int x)
{
    return nand_bool(x, x);
}

int and_bool(int x, int y)
{
    return not_bool(nand_bool(x, y));
}

int or_bool(int x, int y)
{
    return not_bool(
        and_bool(
            not_bool(x),
            not_bool(y)));
}