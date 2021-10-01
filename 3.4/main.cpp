// Lab_03_4.cpp
// < Хмиз Магдалина>
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 21


#include <iostream>
using namespace std;
int main()
{
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    double R;
    
    
    cout<<"x=";cin >>x;
    cout<<"y=";cin >>y;
    cout<<"R=";cin >>R;
    
    // розгалуження в повній формі
if ((x>0 && y>0 && x*x+y*y<=R*R && y>=x) ||(x<0 && y<0 && x*x+y*y>=R*R && y<=x))
    
                                
     
        cout << "yes" << endl;
     else
         cout << "no" << endl;
cin.get();
return 0;
                                
}
