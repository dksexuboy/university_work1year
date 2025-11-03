#include <iostream>
using namespace std;
const int MAX = 80;
enum Mouth { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
struct date {
      int year;
      Mouth mouth;
      int day;
};
struct man {
    char name[MAX];
    char lastname[MAX];
    date BD;
    };
    man printMan();
    date printDate();
    void printMan(man& m);
    void printDate(date& m);
int main()
{
    man m1;
    printMan(m1);
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
