#include <stdio.h>
#include "boolean.h"

void main()
{
    printf("NAND(%d, %d) = %d\n", 0, 0, nand_bool(0, 0));
    printf("NAND(%d, %d) = %d\n", 0, 1, nand_bool(0, 1));
    printf("NAND(%d, %d) = %d\n", 1, 0, nand_bool(1, 0));
    printf("NAND(%d, %d) = %d\n", 1, 1, nand_bool(1, 1));
    printf("\n");
    printf("NOT(%d) = %d\n", 0, not_bool(0));
    printf("NOT(%d) = %d\n", 1, not_bool(1));
    printf("\n");
    printf("AND(%d, %d) = %d\n", 0, 0, and_bool(0, 0));
    printf("AND(%d, %d) = %d\n", 0, 1, and_bool(0, 1));
    printf("AND(%d, %d) = %d\n", 1, 0, and_bool(1, 0));
    printf("AND(%d, %d) = %d\n", 1, 1, and_bool(1, 1));
    printf("\n");
    printf("OR(%d, %d) = %d\n", 0, 0, or_bool(0, 0));
    printf("OR(%d, %d) = %d\n", 0, 1, or_bool(0, 1));
    printf("OR(%d, %d) = %d\n", 1, 0, or_bool(1, 0));
    printf("OR(%d, %d) = %d\n", 1, 1, or_bool(1, 1));
}