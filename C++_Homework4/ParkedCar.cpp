//
//  ParkedCar.cpp
//
//
//  Created by Zeeshan Abidi on 5/10/18.
//

#include<iostream>
#include<cmath>
#include<string>
#include <stdio.h>
using namespace std;

/*
The ParkedCar Class:
 Simulates a parked car. The class’s responsibilities are:
– To know the car's make, model, color, license number,
 and the number of minutes that the car has been parked
*/

class ParkedCar
{
private:
    string carMake;
    string carModel;
    string carColor;
    string plateNumber;
    int numMinutesParked;
public:
    ParkedCar()                     // default constructor
    {
        carMake = "";
        carModel = "";
        carColor = "";
        plateNumber = "";
        numMinutesParked = 0;
    }

    ParkedCar(string cMake, string cModel, string cColor, string cLicenseNum, int cNumMinParked)
    {
        carMake = cMake;
        carModel = cModel;
        carColor = cColor;
        plateNumber = cLicenseNum;
        numMinutesParked = cNumMinParked;
    }

    int getNumParkedMinutes() const
    {
        return numMinutesParked;
    }

    void print()
    {
        cout << "Car" << endl;
        cout << "Make: " << carMake << endl;
        cout << "Car Model: " << carModel << endl;
        cout << "Color of Car: " << carColor << endl;
        cout << "License Number: " << plateNumber << endl;
    }
};
