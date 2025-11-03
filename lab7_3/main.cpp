//модификация прошлой работы, дата теперь перечисляема
#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 80;
enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,           //тк автоматом первое число в массиве получает значение 0, а следующие последующие числа
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER, UNKNOWN //то для удобства задаём январь единичкой, так реализуем перевод в месяц
};
struct date {
    int year;
    Month m;
    int day;
};
 struct man {
        char name[MAX];
        char lastname[MAX];

};
    date load() {
    date d;
    cout<<"Enter year"<<endl;
    cin>>d.year;
    cout<<"Enter day"<<endl;
    cin>>d.day;
    cout<<"Enter month (1-12)"<<endl;
    int m;
    cin>>m;
    switch (m) {
            case 1: d.m = JANUARY; break;   //напрямую реализовать перевод вводимого числа в значение d.m и получение месяца не получилось
            case 2: d.m = FEBRUARY; break;  //поэтому я закостылил двумя свитчами и переменной, это первый
            case 3: d.m = MARCH; break;
            case 4: d.m = APRIL; break;
            case 5: d.m = MAY; break;
            case 6: d.m = JUNE; break;
            case 7: d.m = JULY; break;
            case 8: d.m = AUGUST; break;
            case 9: d.m = SEPTEMBER; break;
            case 10: d.m = OCTOBER; break;
            case 11: d.m = NOVEMBER; break;
            case 12: d.m = DECEMBER; break;
            default: d.m = UNKNOWN; break;

    return d;
}
    }
man loadMan();
void displayMan(man m);
void display(date d) {
    cout<<d.year<<"-";
    switch (d.m) {
            case JANUARY:   cout << "January"; break;  //это второй свитч
            case FEBRUARY:  cout << "February"; break;
            case MARCH:     cout << "March"; break;
            case APRIL:     cout << "April"; break;
            case MAY:       cout << "May"; break;
            case JUNE:      cout << "June"; break;
            case JULY:      cout << "July"; break;
            case AUGUST:    cout << "August"; break;
            case SEPTEMBER: cout << "September"; break;
            case OCTOBER:   cout << "October"; break;
            case NOVEMBER:  cout << "November"; break;
            case DECEMBER:  cout << "December"; break;
            default:        cout << "Unknown"; break;
        }

        cout << "-" << d.day << endl;
    }
int main()
{
    man m1;
        m1 = loadMan();
        displayMan(m1);

    return 0;
}
man loadMan() {
    man m;
    cout<<"Enter name"<<endl;
    cin>>setw(MAX)>>m.name;
    cout<<"Enter last name"<<endl;
    cin>>setw(MAX)>>m.lastname;
    return m;  }
void displayMan(man m) {
date d1;
d1 = load();
display(d1);
cout<<"full name: "<<m.name<<" "<<m.lastname<<endl;
}
