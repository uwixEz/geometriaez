#include<cmath>
double sinus(double x)
{
    long double wartosc_sinus = x - x*x*x/6 + x*x*x*x*x/120 - x*x*x*x*x*x*x/5040 + x*x*x*x*x*x*x*x*x/362880;
    return wartosc_sinus;
}

double cosinus(double x)
{
    long double wartosc_cosinus = 1 - x*x/2 + x*x*x*x/24 - x*x*x*x*x*x/720 + x*x*x*x*x*x*x*x/40320 - x*x*x*x*x*x*x*x*x*x/3628800;
    return wartosc_cosinus;
}
double pochodnazx_n(double x,int n)
{
    long double wartosc_pochodna = n*pow(x,(n-1));
    return wartosc_pochodna;
}
double calkazx_n(double a,double b,int n)
{
    long double wartosc_calka = (pow(b,(n+1)))/(n+1) - (pow(a,(n+1)))/(n+1);
    return wartosc_calka;
}
