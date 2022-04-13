#include <stdio.h>
#include <stdlib.h>


int Add (int a , int b)
{
    return a + b;

}


int main()
{
    int x , y ;
    x = 10 ;
    y = 30 ;

    printf("%d + %d = %d\n", x , y , Add (x,y));
    return 0;
}
