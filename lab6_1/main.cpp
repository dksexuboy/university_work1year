//по ссылке переменные передаются во функцию, меньшая становится равной 0, побольше 100-кой
#include <iostream>
using namespace std;
void minmax(float&a, float &b); //работа со значениями переменных напрямую через ссылки, без них переменные "живут" во время ф-ции и не сохраняются
using namespace std;
void minmax(float&a, float &b); //объявление ф-ции
int main()
{
    float x, y;
    cout<<"enter first variable"<<endl;
    cin>>x;
    cout<<"enter second variable"<<endl;
    cin>>y;
    minmax (x,y);
    cout <<" first variable: "<<x<<" second variable: "<<y<<endl;


    return 0;
}
    void minmax(float &a, float&b) {
        if (a > b) {
        a=100;
        b=0;
       } else if(b > a) {
          b=100;
          a=0;
        } else if (b == a) {
            cout<<endl;
        }
}
