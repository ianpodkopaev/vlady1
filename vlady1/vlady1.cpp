
#include <iostream>
#include<cmath>
using namespace std;
double minim(double,double, double);
double len(int, int, int, int);

double minim(double a, double b, double c)
{
    double mini;
    mini = b;
    if (a < b)
    {
        mini = a;
    }
     
    if (mini > c)
    {
        mini = c;
    }

    return mini;
   
}

double len(int x1,int y1, int x2, int y2)
{
        return (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}
int main()
{
    double a, b, c;
    int x2, x1, y1, y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2>>x3>>y3;
    double len1 = len(x1, y1, x2, y2);
    double len2 = len(x1, y1, x3, y3);
    double len3 = len(x2, y2, x3, y3);

    if (minim(len1, len2, len3) == len1)
    {
        cout << "1 and 2 tochka"<<endl;
    }
    if (minim(len1, len2, len3) == len2)
    {
        cout << "1 and 3 tochka"<<endl;
    }
    if(minim(len1,len2,len3)==len3)
    {
        cout << "2 and 3 tochka"<<endl;
    }

    return 0;
}

