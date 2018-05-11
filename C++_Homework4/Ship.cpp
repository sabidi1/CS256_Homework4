    //
    //  Ship.cpp
    //  Created by Zeeshan Abidi on 5/8/18.
    //

    #include <iostream>
    #include <string>
    using namespace std;

    /**
     *
     * A member variable for the name of the ship (a string)
     " A member variable for the year that the ship was built (a string)
    " A constructor and appropriate accessors and mutators
    " A virtual print function that displays the ship name and the year it was built.
    **/
    class Ship
    {
    private:
        string name;        //member variable for name of Ship
        string yearBuilt;       // member variable for year that ship was built
    public:
        Ship(string n, string y)    //constructor
        {
            name = n;
            yearBuilt = y;
        }
        //setters and getters
        string getname()
        {
            return name;
        }
        string getYearBuilt()
        {
            return yearBuilt;
        }
        // A virtual print function that displays the ship’s name and the year it was built.
        virtual void print()
        {
            cout << "Ship name: " << getname() << "\tYear Built: " << getYearBuilt() << endl;
        }
    };
        class CargoShip:public Ship
        {
    private:
        int cargoCap;        //member variable for cargo capacity in tonnage
    public:
        CargoShip(string n, string y, int t) : Ship(n,y)    //constructor
        {
            cargoCap = t;
        }
        virtual void print()
        {
            cout << "Ship name: "<< getname() <<"\t\tMaximum cargo in tonnage: " << cargoCap << endl;
        }
    };

        class CruiseShip: public Ship
        {
    private:
        int maxPass;       //variable for maximum number of passengers
    public:
        CruiseShip(string n, string y, int p) : Ship(n,y)   //constructor
        {
            maxPass = p;
        }
        //should display only the ship’s name and the maximum number of passengers.
        virtual void print()
        {
            cout<< "Shipname: " << getname() << "\t\tMaximum number of passengers: "<< maxPass << endl;
        }
};
        int main()
        {
        /*Array elements should be intialized with
        the addresses of dynamically allocated Ship,
        CruiseShip, and CargoShip objects*/
        Ship *ship_array[3]={
            new Ship("Lebron", "  1995"),
            new CargoShip("Kobe", " 1990", 2000),
            new CruiseShip("John"," 1960", 500)
        };

        cout << "Ship information" << endl;
        cout << "-----------------" << endl;
        //calling each object's print function.
        for(int i=0; i< 3; i++)
            ship_array[i]-> print();

        return 0;
}

