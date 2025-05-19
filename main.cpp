#include <iostream>
#include <cstdlib>
#include <cmath>
#include "funkcje.h"
using namespace std;

int main()
{
int n = 0;
cout << "Podaj wartosc n w zaleznosci od tego ktorego programu chcesz uzyc 1 - sinus, 2 - cosinus, 3- pochodna, 4- calka" << endl;
cin >> n;
if (n==1)
{
    cout << "Podaj wartosc x w stopniach od -180 do 180" << endl;
    double x;
    cin >> x;
    int a = -180;
    int b = 180;
    if(a <= x && x <= b)
    {
        x = x * 3.141592653589 / 180.0;
        cout << sinus(x) << endl;
    }
    else
{
    cout << "Bruh" << endl;
    exit(0);
}

}
if (n==2)
{

    cout << "Podaj wartosc x w stopniach od -180 do 180" << endl;
    double x;
    cin >> x;
    int a = -180;
    int b = 180;
    if(a <= x && x <= b)
    {
        x = x * 3.141592653589 / 180.0;
        cout << cosinus(x) << endl;
    }
    else
{
    cout << "Bruh" << endl;
    exit(0);
}

}
if (n==3)
{
    int n;
    double x;
    cout << "Wylicz pochodna z x do n w punkcie x(podaj x) podniesionej do n(podaj n)" << endl;
    cin >> x >> n;
    if (x == 0 && n < 1)
        {
    cout << "Dzielenie przez zero!" << endl;
}
else {
    cout << pochodnazx_n(x,n) << endl;}
}
if (n==4)
{
    cout << "Podaj dolna i gorna granice calkowania (najpierw dolna)" << endl;
    double a;
    double b;
    cin >> a >> b;
    cout << "Podaj potege do jakiej podniesiony jest x w funkcji pierwotnej" << endl;
    int n;
    cin >> n;
    if(n!=-1)
    {
cout << calkazx_n(a,b,n) << endl;
    }
    else
    {
        cout << "Wynik to ln" << fabs(b) << " - ln" << fabs(a) << endl;
    }
}
if (n != 1 && n != 2 && n != 3 && n != 4)
{
    cout << "Bruh" << endl;
    exit(0);
}
return 0;
}
