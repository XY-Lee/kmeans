#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    char x[50] ;
    char y[50] ;
    while ( scanf( "%[^,],%[^)]", x, y ) != -1 )
      printf( "|%d| |%d|\n", atoi(x), atoi(y) ) ;
    return 0;
}
