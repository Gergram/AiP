#ifndef GOSTINECHNIY_BUISNESS_H
#define GOSTINECHNIY_BUISNESS_H
#pragma once
#include <string>

class GS
{
    //Атрибуты
private:
    int _Numder;//Номер
    int _Floor;// Этаж
    float _Area;// Площадь
    bool _Empty;// Занято/Не Занято
    float _Cost;// Стоимость
    float _Procent;// Процент
    float _Procent_Cost;

public:
    void Print();
    GS();
    GS(int Number, int Floor, float Area, bool Empty, float Cost, float Procent);
    ~GS();

};

#endif // GOSTINECHNIY_BUISNESS_H
