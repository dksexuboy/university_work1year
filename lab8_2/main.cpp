// сортируем людей по возрасту и фамилии
#include <iostream>
#include <cmath>
using namespace std;
struct man {
    char name[80];
    char lastname[80];
    int age;
};

int main()
{
    int temp = 0;
    int n = 0;
    cout << "enter a amount of people: ";  //юзер выбирает сколько людей хочет ввести, и после с помощью переменной и цикла будет вводить все их данные
    cin >> n;
    man m[n];
    for(int i = 0; i < n; i++)
    {
        cout << endl << i + 1<< "enter the name "; //ввод данных людей
        cin >> m[i].name;
        cout << "lastname ";
        cin >> m[i].lastname;
        cout << "age ";
        cin >> m[i].age;
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(m[j].age > m[j + 1].age)
            {
                temp = m[j].age;             //пузырьком сортируем
                m[j].age = m[j + 1].age; //обмен возрастами
                m[j + 1].age = temp;
                swap(m[j].name, m[j + 1].name); //свап меняет местами значения своих аргументов,обмен именами
                swap(m[j].lastname, m[j + 1].lastname); //фамилиями
            }
        }
    }
    cout << endl;
    for(int i = 0; i<n; i++)
    {
        cout << i + 1 << ". " << m[i].name  << " " << m[i].lastname << " " << m[i].age << endl;  //вывод значений
    }
    return 0;
}
