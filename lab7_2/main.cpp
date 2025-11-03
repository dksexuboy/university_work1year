//задаём структуры описыающие человека и его день рождения
//мой любимый код, чудом запрогал
#include <iostream>
using namespace std;
const int size = 80; //задаём размер строк для имени и фамилии
struct date {
      int year;
      int mouth;
      int day;
};
struct man {
    char name[size];
    char lastname[size];
    date BD;                //структура внутри структуры
    };
    man printMan();
    date printDate();
    void printMan(man& m);
    void printDate(date& m);
int main()
{
    man m1;
    printMan(m1);  //реализована программа в две строчки :D
    return 0;
}
void printDate(date& m) {
    cout<<"enter year"<<endl;
    cin>>m.year;
    cout<<"enter mouth"<<endl;
    cin>>m.mouth;
    cout<<"enter day"<<endl;
    cin>>m.day;
    cout<<"-"<<m.year<<"-"<<m.mouth<<"-"<<m.day<<endl;
}

void printMan(man& m) {
    cout<<"enter name"<<endl;
    cin>>m.name;
    cout<<"enter last name"<<endl;
    cin>>m.lastname;
    printDate(m.BD);
    cout<<"full name: "<<m.name<<" "<<m.lastname<<endl;

}
