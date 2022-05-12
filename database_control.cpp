#include <iostream>
#include <string>

#include "database_control.h"

medicine::medicine(string drugName, string sub, float mgDrug)
{
    id = -1;
    name = drugName;
    substance = sub;
    mg = mgDrug;
}

medicine::medicine(string medicineName, string medicineSubstance, float miligram, int quant)
{
    id = 1;
    name = medicineName;
    substance = medicineSubstance;
    mg = miligram;
    quantity = quant;
}

void medicine::set_quantity()
{
    cout << "Εισάγεται την ποσότητα αποθέματος του φαρμάκου: ";
    cin >> quantity;
}

string medicine::get_name()
{
    return name;
}
string medicine::get_substance()
{
    return substance;
}

float medicine::get_mg()
{
    return mg;
}

int medicine::get_quantity()
{
    return quantity;
}
