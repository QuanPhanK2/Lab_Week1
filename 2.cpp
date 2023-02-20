#include <iostream>
#include <math.h>
using namespace std;

int  quadraticEquation(float a, float b, float c, float x1, float x2){
    float delta = b*b - 4*a*c;
    if (delta >0){
        x1 = x2 = 0.0;
        return 0;
    } else if (delta = 0)
    {
        x1 = x2 = -b/2*a;
        return 1;
    } else {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
    x2 = (-b - delta) / (2*a);
        return 2;
    }
}
int main(int argc, char const *argv[])
{
    float a,b,c;
    float x1, x2;
     do{
        cout<<"Nhap a (a!=0): ";
        cin>>a;
        cout<<"Nhap b: ";
        cin>>b;
        cout<<"Nhap c: ";
        cin>>c;
        }
    while (!a);
    {
        int check = quadraticEquation(a,b,c,x1,x2);
        if (check == 0){
            cout << "Phuong trinh vo nghiem";
        } else if (check == 1){
            cout << "Phuong trinh co nghiem kep x = %.4f"<<x1;
        } else {
            cout << "Phuong trinh co 2 nghiem phan biet"<<endl;
            cout << "x1=" << x1<<endl;
            cout << "x2=" << x2<<endl;
        }
    }
    return 0;
}
