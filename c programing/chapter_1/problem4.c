//mallika c


#include <stdio.h>

int main() {
    int i;
    for (i = 0; i <= 10; i++)
     {
        if (i == 3)
         {
            continue;
        } else if (i == 7)
         {
            break;
        }
        printf("%d", i);
    }
    return 0;
}
