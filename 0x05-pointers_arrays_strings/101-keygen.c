#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int max = 126;
        int current = 0;
        int randchar = 0;

        srand (time(NULL));
        while (current != 2772)
	{
                randchar = rand() % max;
                while (randchar < 33)
                        randchar = rand() % max;
                if (randchar + current >= 2739)
                        randchar = rand() % max;
                if (max < 126 && max >= 33)
                        randchar = max;
                current = current + randchar;
                putchar(randchar);
                if (current >= 2646)
                        max = 2772 - current;
        }
        return (0);
}
