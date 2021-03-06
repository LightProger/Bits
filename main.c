#include <stdio.h>
#include <math.h>

/*
 * Количество целых чисел, которые можно записать используя N двоичных битов вычисляется по формуле 2N.
 * Напишите программу, вычисляющую количество целых чисел, которые можно записать используя N
   битов.

 Формат входных данных:
На вход программы поступает одно целое число N

— количество двоичных битов.

Формат выходных данных:
Одно целое число — количество целых чисел, которые можно записать, используя N

 битов.

Sample Input:

11

Sample Output:

2048


 */

int main() {
    int n, result;
    scanf(" %d", &n);
    result = pow(2, n);
    printf("%d", result);
    return 0;
}