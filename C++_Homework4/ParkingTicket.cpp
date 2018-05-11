
/*
 The ParkedCar Class: This class should simulate a parked car.
 The class’s responsibilities are:
 – To know the car's make, model, color, license number,
    and the number of minutes that the car has been parked
 */
class ParkingTicket
{
private:
    ParkedCar car;
    ParkingMeter meter;               // parking meter object
    PoliceOfficer officer;            // police officer object
    int fineAmount;                   // amount of the fine

public:
    ParkingTicket(ParkedCar &carT, ParkingMeter &meterT, PoliceOfficer &officerT)         // constructor
    {
        car = carT;
        meter = meterT;
        officer = officerT;
        fineAmount = calcFineAmount();
    }

    int calcFineAmount()
    {
        return (25 + 10 * (ceil((car.getNumParkedMinutes()- meter.getPurchasedParkingMins())/60.0) - 1));
    }

    void print()          // prints the contents of the parking ticket object
    {
        cout << "\nTikcet Infomation" << endl;
        cout << "-------------------------------------" << endl;
        car.print();
        cout << "-------------------------------------" << endl;
        officer.print();
        cout << "-------------------------------------" << endl;
        cout << "Fine Amount: $" << fineAmount << endl;
    }
};
