#include "gostinechniy_buisness.h"
#include<iostream>

using namespace std;
void GS::Print()
{
    cout << "Information about GS" << endl;
    cout << "Number:" <<_Numder << endl;
    cout << "Floor:"<<_Floor << endl;
    cout << "Area:"<<_Area << "m^2" << endl;
    cout << "Emty_or_not:"<<_Empty << endl;
    cout << "Cost:"<<_Cost << "$" << endl;
    cout << "Procent:" << _Procent << "%" << endl;
    cout << "Procent_Cost:" << _Procent_Cost <<  endl;
}

GS::GS()
{
    _Floor = 0;
}

GS::GS(int Number, int Floor, float Area, bool Empty, float Cost, float Procent)
{
    _Floor = Floor;
    _Numder = Number;
    _Area = Area;
    _Empty = Empty;
    _Cost = Cost;
    _Procent = Procent;
    _Procent_Cost = Cost + Cost * Procent/100;
}

GS::~GS()
{
    cout << "Clearing the memory" << endl;
}

