//use typedef in pro9


#include <stdio.h>

typedef struct d
{
    int dd;
    int mm;
    int yyyy;
}date;

int compare(date d1, date d2)
{
    if ((d1.dd == d2.dd) && (d1.mm == d2.mm) && (d1.yyyy == d2.yyyy))
    {
        return 0;
    }

    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d2.dd > d1.dd)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d2.mm > d1.mm)
    {
        return -1;
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d2.yyyy > d1.yyyy)
    {
        return -1;
    }
}

int main()
{
    date d1 = {19, 8, 2005};
    date d2 = {19, 8, 2005};
    printf("%d", compare(d1, d2));
    return 0;
}