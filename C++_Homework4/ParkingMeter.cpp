/*
 Parking meter class
 - To know the number of minutes of parking time that has been purchased
 */

class ParkingMeter
{
private:
    int purchasedParkingMins;
public:
    ParkingMeter()                                // default constructor
    {
        purchasedParkingMins = 0;
    }

    ParkingMeter(int amountPurchased)
    {
        purchasedParkingMins = amountPurchased;
    }

    int getPurchasedParkingMins() const
    {
        return purchasedParkingMins;
    }

    void print()                                  // displays the contents of the meter object
    {
        cout << "Number of minutes purchased: " << purchasedParkingMins << endl;
    }
};
