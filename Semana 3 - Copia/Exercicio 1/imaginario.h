#include <cmath>

namespace imagin{


struct dados{
float a;
float b;

};
class numeroimagin
{
private:
    struct dados dado;

public:
    numeroimagin(float a , float b){
    this->dado.a= a;
    this->dado.b= b;
};

    struct dados GetValuePolar(){
    struct dados toReturn;
    toReturn.a = sqrt(this->dado.a*this->dado.a + this->dado.b*this->dado.b);
    toReturn.b = atan(this->dado.b/this->dado.b);
    return toReturn;};

    struct dados GetValueCart(){
    return this->dado;
   };

struct dados soma(float c, float d,float e,float f){
 struct dados toReturn;
 toReturn.a=c+e;
 toReturn.b=d+f;
 return toReturn;};

struct dados subtracao(float c, float d,float e,float f){
 struct dados toReturn;
 toReturn.a=c-e;
 toReturn.b=d-f;
 return toReturn;
};
    struct dados multiplicacao(float c, float d,float e,float f){
 struct dados toReturn;
 toReturn.a=c*e;
 toReturn.b=c*f+d*e+d*f;
 return toReturn;
};
 };



}
