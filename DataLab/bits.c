/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    bits.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.08.02   11:54
 *-----------------------------------------------------------------------------
 * @Change:   2020.08.02
 *-----------------------------------------------------------------------------
*/

#include <stdio.h>

/*
 * bitXor - x^y using only ~ and &
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
    return ~(~x & ~y) & ~(x & y);
}

/*
 * tmin - return minimum two's complement integer
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
    return 0x1<<31;
}


int main() {
    printf("%d\n", bitXor(3, 2));
    printf("%d\n", 3 ^ 2);
    printf("%d\n", tmin());
    return 0;
}
