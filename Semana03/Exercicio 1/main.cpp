#include <iostream>
#include "imaginario.h"

using namespace std;
using namespace imagin;
int main()
{
    float y=1.0;
    struct dados imprimir;
    numeroimagin x(y,y);
    cout <<x.GetValuePolar().a  << endl;
    return 0;
}
