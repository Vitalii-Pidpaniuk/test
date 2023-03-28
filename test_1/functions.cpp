#include "functions.h"
#include "class.h"
#include "class.cpp"
#include <iostream>

using namespace std;

drib drib_1{};
drib drib_2{};


void drib_1_create()
{
    cin>>drib_1.chis>>drib_1.znam;
}


void drib_2_create()
{
    cin>>drib_2.chis>>drib_2.znam;
}


void sum()
{

    drib res_drib{};

    res_drib.znam = NSK(drib_1.znam, drib_2.znam);
    res_drib.chis = drib_1.chis*(res_drib.znam/drib_1.znam) + drib_2.chis*(res_drib.znam/drib_2.znam);
    cout<<"***********************************\n";
    cout<<"Your result drib:\n"<<res_drib.chis<<"/"<<res_drib.znam;
}


int NSK(int a, int b)
{
    return a*b/NSD(a, b);
}


int NSD(int a, int b)
{
    int div;
    if(a==b) return a;
    int d = a - b;
    if(d < 0)
    {
        d = abs(d); div = NSD(a, d);
    }
    else
    {
        div = NSD(b, d);
    }
    return div;
}
