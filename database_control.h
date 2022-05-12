#ifndef DATABASE_CONTROL_H
#define DATABASE_CONTROL_H

#include <string>
#include <sstream>

using namespace std;

class medicine
{
private:
    int id;
    string name;
    string substance;
    float mg;
    int quantity;

public:
    medicine(string drugName, string sub, float mgDrug);

    medicine(string medicineName, string medicineSubstance, float miligram, int quant);

    void set_quantity();

    string get_name();

    string get_substance();

    float get_mg();

    int get_quantity();

    bool isDrug();
};

#endif