#define _USE_MATH_DEFINES
#include <iostream>
#include "math.h"

int main() {
    {
        std::cout << " 1 13 49 " << std::endl;//1
    }


    {
        char b;
        std::cout << "Enter char:";
        std::cin >> b;
        std::cout << "1" << b << "13" << b << "49" << std::endl;//2
    }


    {
        int x1;
        std::cout << "Enter int:";
        std::cin >> x1;
        int y;
        std::cout << "Enter int:";
        std::cin >> y;
        int z;
        std::cout << "Enter int:";
        std::cin >> z;
        std::cout << x1 << " " << y << " " << z << std::endl;//3
    }


    {
        int a2;
        std::cout << "Enter int:";
        std::cin >> a2;
        int x2 = 12 * pow(a2, 2) + 7 * a2 - 12;
        std::cout << x2;//4.1
    }


    {
        int x3;
        std::cout << " \n Enter int:";
        std::cin >> x3;
        int y3 = 3 * pow(x3, 3) + 4 * pow(x3, 2) + 1;
        std::cout << y3 << std::endl;//4.2
    }


    {
        int V;// V - объем
        std::cout << "Enter V:";
        std::cin >> V;
        int m;// m - масса
        std::cout << "Enter m:";
        std::cin >> m;
        double p = (double) m / V;// p - плотность
        std::cout << "p=" << p << std::endl;//1
    }

    {
        int a;
        std::cout << "Enter a that is not equal tj zero:";
        std::cin >> a;
        int b;
        std::cout << "Enter b:";
        std::cin >> b;
        double x = (double) -b / a;
        std::cout << x;//2
    }

    {
        std::pair<char, char> A;
        std::cout << " \n Enter A1 and A2:";
        std::cin >> A.first >> A.second;
        std::pair<char, char> B;
        std::cout << "Enter B1 and B2:";
        std::cin >> B.first >> B.second;
        double S = sqrt((double) pow((A.first - B.first), 2) + pow((A.second - B.second), 2));
        std::cout << S; //3
    }


    {
        int a1; // основание трапеции 1
        std::cout << " \n Enter the base of the trapezoid 1:";
        std::cin >> a1;
        int a2; // основание трапеции 2
        std::cout << "Enter the base of the trapezoid 2:";
        std::cin >> a2;
        int h; // высота трапеции
        std::cout << "Enter the height:";
        std::cin >> h;
        double S1 = ((double) (a1 + a2) / 2) * h; // площадь трапеции
        std::cout << S1; //4
    }


    {
        int r1; // внутренний радиус
        std::cout << " \n Enter the inner radius:";
        std::cin >> r1;
        int r2; // внешний радиус
        std::cout << "Enter the outer radius:";
        std::cin >> r2;
        double S2 = (abs((double) M_PI * r2 * r2 - M_PI * r1 * r1)); // площадь кольца
        std::cout << S2; //5
    }

    {
        int a; // длина ребра куба
        std::cout << " \n Enter the length of the edge:";
        std::cin >> a;
        int V = pow(a, 3);// объем куба
        std::cout << "V=" << V << std::endl;
        int S4 = pow(a, 2);// площадь грани куба
        std::cout << "S=" << S4; //6
    }

    {
        int a; // сторона квадрата
        std::cout << " \n Enter the side of the square:";
        std::cin >> a;
        int P = a * 4;// периметр квадрата
        std::cout << "P=" << P; //7
    }

     {
         int r;
         std::cout << " \n Enter the radius:";
         std::cin>>r;
         int D=2*r;// диаметр окружности
         std::cout << "D="<< D; //8
     }

    {
        std::string name;
        std::cout << " \n Enter the name:";
        std::cin >> name;
        std::cout << "Hello," << name << "! My name is C++."; //9
    }

    {
        std::string s;
        std::cout << "\n Enter the 7-letter word:";
        std::cin >> s;
        if ((s[0] == s[6]) && (s[1] == s[5]) && (s[2] == s[4])) {
            std::cout << "This is polindrom!";
        } else {
            std::cout << "Sorry,this is  not polindrom!";
        } //10
    }

    system("pause");
    return 0;
}