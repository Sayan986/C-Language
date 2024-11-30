//Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
//The vectors must be two–dimensional

#include<stdio.h>
typedef struct vector{
    int i;
    int j;

}V;

V sumVector (V v1, V v2){
    V v3= {v1.i+v2.i, v1.j+v2.j};
    return v3;
}

int main()
{
    V v1={55,54};
    V v2={85,65};
    V v3=sumVector(v1, v2);
    printf("The sum of the vectir is : %d.i + %d.j", v3.i,v3.j);



}
