#include <iostream>
#include <windows.h> 
#include <cstdlib> 
#include<cmath> 
using namespace std;

void a1()
{
    setlocale(LC_ALL, "ru");
    int i = 1000;
    int ded = 0;
    std::cout << "У меня нет проблем" << std::endl;
    std::cout << "Кроме моей башки" << std::endl;
    std::cout << "Прости, я умер" << std::endl;
    while (i > 8)
    {
        ded = i - 7;
        std::cout << i << " - 7 = " << ded << std::endl;
        i -= 7;
        Sleep(1);       
    }
}

void a2()
{
    double a, b, c; double D;
    cout << "Здравствуйте, введите пожалуйста коэффицент a, b, c. \n";
    cout << "Введите коэффицент a: "; cin >> a;
    cout << "Введите коэффицент b: "; cin >> b;
    cout << "Введите коэффицент c: "; cin >> c;
    D = b * b - 4 * (a * c);
    
    if (D > 0)
    {
        cout << "Дискриминант равен "<< D <<" и имеет два решения.";
        D = sqrt(D);
        double x1, x2;
        if (b < 0)
        {
            x1 = (b*-1 + D) / (2 * a);
        }
        else
        {
            x1 = (-b + D) /( 2 * a);     
        }
        if (b < 0)
        {
            x2 = (b * -1 - D) / (2 * a);
        }
        else
        {
           x2 = (-b - D) / (2 * a);
        }
        cout << "x1 = "<< x1<<" , x2 = "<< x2;  
    }
    else if (D == 0)
    {
        cout << "Дискриминант равен " << D << " и имеет одно решение.";
        D = sqrt(D);
        double x;
        if (b < 0)
        {
          
            x = (b*-1) / (2 * a);
        }
        else
        {
            x   =-b / (2 * a);
        }
        cout << "x = " << x;
    }
    else
    {
        cout << "Дискриминант равен " << D << " и не имеет решений, так как дискриминант меньше нуля.";
    }
    
}

void a3()
{
    for (int i = 0; i <= 79; i++)
    {
        cout << '=';
    }
    cout << "|\tX\t|\tY\t|  X AND Y\t|  X OR Y\t|\tx   |";
    for (int i = 0; i <= 79; i++)
    {
        cout << '=';
    }
    cout << "|\t0\t|\t0\t|\t0\t|\t0\t|\t1   |\n";

    cout << "|\t0\t|\t1\t|\t0\t|\t1\t|\t1   |\n";
    cout << "|\t1\t|\t0\t|\t0\t|\t1\t|\t0   |\n";
    cout << "|\t1\t|\t1\t|\t1\t|\t1\t|\t0   |\n";
    for (int i = 0; i <= 79; i++)
    {
        cout << '=';
    }
    cout <<endl<<endl;
    cin.get();
}

void a4()
{
    float a, b, x; int f;
    cout << "Введите первое число: "; cin >> a;
    cout << "Введите второе число: "; cin >> b;
    cout << "Какую операцию хотите выпонить?\n0 - сумма, 1 - вычитание, 2 - умножение, 3 - деление\nВаше действие: ";
    cin >> f;
    switch(f)
    {
    case 0:
        x = a + b;
        cout << "Овтет: "<<x;
        break;
    case 1:
        x = a - b;
        cout << "Овтет: " << x;
        break;
    case 2:
        x = a * b;
        cout << "Овтет: " << x;
        break;
    case 3:
        x = a / b;
        cout << "Овтет: " << x;
        break;
    }
}
void a5()
{
    int a, b, c, a1, b1, c1;
    cout << "Введите первый катет: "; cin >> a;
    cout << "Введите второй катет: "; cin >> b;
    if (a <= 0)
    {
        cout << "Ошибочка, вы ввели отрицательное число или 0.ERROR";
    }
    else if (b <=0)
    {
        cout << "Ошибочка, вы ввели отрицательное число или 0.ERROR";
    }
    else
    {
        a1 = pow(a, 2); b1 = pow(b, 2);
        c = a1 + b1;
        c1 = sqrt(c);
        cout << "Гипотенуза равна "<< c1;

    }
}


void main()
{
    setlocale(LC_ALL,"ru");
    a5();
}