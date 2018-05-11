
int main()
{
    string carMake;
    string carModel;
    string carColor;
    string plateNumber;
    int numMinutesParked;
    int purchasedParkingMins;
    string name;
    string badgeNum;

    cout << "Please enter the following information: " << endl;
    cout << "Car information" << endl;
    cout << "Make: ";
    cin >> carMake;
    cout << "Model: ";
    cin >> carModel;
    cout << "Color: ";
    cin >> carColor;
    cout << "License plate number: ";
    cin >> plateNumber;

    do
    {
        cout << "Number of minutes car has been parked: ";
        cin >> numMinutesParked;
    }
    while (numMinutesParked < 0);

    //create object
    ParkedCar car1(carMake, carModel, carColor, plateNumber, numMinutesParked);

    do
    {
        cout << "Number of minutes purchased: ";
        cin >> purchasedParkingMins;
    }
    while (purchasedParkingMins < 0);

    //create meter object = meter
    ParkingMeter meter(purchasedParkingMins);

    //get police information
    cout << "Officer Information:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Badge Number: ";
    cin >> badgeNum;

    //create police officer object
    // name, badge number
    PoliceOfficer policeOfficer(name, badgeNum);

    if (policeOfficer.isTicketNeccessary(car1, meter) == true)
    {
        ParkingTicket ticket(car1, meter, policeOfficer);
        ticket.print();
    }
    else                                                         // else the car is parked legally
    {
        cout << "\n No parking ticket issued. " << endl;
    }

    return 0;
}
