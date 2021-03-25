#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c)
   {
      if (n == 1)
        printf("mova disco %d de %c para %c\n", n, a, b);
     else
     {
       hanoi(n - 1, a, c, b);                            // H1
       printf("mova disco %d de %c para %c\n", n, a, b);
       hanoi(n - 1, c, b, a);                            // H2
     }
   }
int main(int numero)
{
     hanoi(numero ,'A', 'B', 'C');
     return 0;

}
