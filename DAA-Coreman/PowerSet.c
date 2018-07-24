//Power Set
//S = {a, b, c}
//P(s) = {{}, {a}, {b}, {c}, {a,b}, {a, c}, {b, c}, {a, b, c}}
//2^n-1`
//Complexity: O(n2^n)

#include <stdio.h>
#include <math.h>

void printPowerSet(char *set, int set_size)
{
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;

    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
            printf("%c", set[j]);
       }
       printf("\n");
    }
}

int main()
{
    char set[] = {'a','b','c'};
    printPowerSet(set, 3);
    getchar();
    return 0;
}
