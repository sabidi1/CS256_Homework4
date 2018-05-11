
/*
 The PoliceOfficer Class:
 This class should simulate a police officer inspecting parked cars.
 – To know the police officer’s name and badge number
 – To examine a ParkedCar object and a ParkingMeter object, and determine
 whether the car's time has expired
 – To issue a parking ticket if the car’s time has expired
 */

class PoliceOfficer
{
private:
    string name;
    string badgeNum;
public:
    PoliceOfficer()                         // default constructor
    {
        name = "";
        badgeNum = "";
    }

    PoliceOfficer(string fName, string bNum)
    {
        name = fName;
        badgeNum = bNum;
    }
    //Check if ticket
    bool isTicketNeccessary(ParkedCar& c, ParkingMeter& m)       // determines whether a parked car gets a ticket or not
    {
        if ((m.getPurchasedParkingMins() - c.getNumParkedMinutes()) < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void print()
    {
        cout << "Police Officer information \n" << endl;
        cout << "Name: " << name << endl;
        cout << "Badge Number: " << badgeNum << endl;
    }
};
