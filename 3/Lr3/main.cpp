#include <iostream>
#include "gostinechniy_buisness.h"
using namespace std;

int main()
{
    int a;
    cout << "Room Number";
    cin >> a;
   GS *Obj1 = new GS();
   GS *Obj2 = new GS(a, 5, 55, 0, 5213,20);
   Obj2->Print();
   delete Obj1;
   delete Obj2;
     cout << "Tap to finish.";
}

