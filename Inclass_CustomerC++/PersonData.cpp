//
//  PersonData.cpp
//
//
//  Created by Zeeshan Abidi on 5/8/18.
//

#include <iostream>
using namespace std;
#include <stdio.h>


class PersonData
{

private:
    string lastName:
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    string phone;

public:
    PersonData()        //defeault constructor
    {

    }
    PersonData(string lastName, string firstName, string address, string city, string state, int zip, sting phone)
    {
        this -> lastName = lastName;
        this -> firstName = firstName;
        this -> address = address;
        this -> city = city;
        this -> state = state;
        this -> phone = phone;
    }

    //accessor and setter functions
    void setLastName(string lastName)
    {
        this -> lastName = lastName;
    }
    string getLastName()
    {
        return lastName;
    }
    //set and get first name
    void setFirstName(string firstName)
    {
        this -> firstName = firstName;
    }
    string getFirstName(){
        return firstName;
    }

    //get address
    void setAddress(string address)
    {
        this -> address = address;
    }
    string getAddress(){
        return address;
    }
    //set and get city
    void setCity(string city)
    {
        this -> city = city;
    }
    //get and set city
    string getCity(){
        return city;
    }
    void setState(string state)
    {
        this -> state = state;
    }
    //get and set zip
    void setZip(int zip){
        this -> zip = zip;
    }
    int getZip(){
        return zip;
    }
    //get and set phone
    void setPhone(string phone)
    {
        this -> phone = phone;
    }
    string getPhone(){
        return phone;
    }
};


class CustomerData:public PersonData
{

private:
    int customerNumber;
    bool mailingList;

public:
    CustomerData()    //default constructor
    {

    }
    CustomerData(int customerNumber,bool mailingList) //parameterized constructor
    {
        this->customerNumber = customerNumber;
        this->mailingList = mailingList;
    }
    void setCustomerNumber(int customerNumber)   //set and get methods
    {
        this->customerNumber = customerNumber;
    }
    int getCustomerNumber()
    {
        return customerNumber;
    }
    void setMailingList(bool mailingList)
    {
        this->mailingList = mailingList;
    }
    bool getMailingList()
    {
        return mailingList;
    }
};

int main()
{
    CustomerData c;    //customer object

    c.setLastName("Lebron");    //call set methods of PersonData class and CustomerData class
    c.setFirstName("James");
    c.setAddress("2520 King Drive");
    c.setCity("Toronto :( ");
    c.setState("New Jersey");
    c.setPhone("001-345-5855");
    c.setZip(364745);
    c.setCustomerNumber(2004);
    c.setMailingList(true);

    //call get methods of PersonData class and CustomerData class to display values

    cout<<"Name of the customer : "<< c.getFirstName()<< " " << c.getLastName()<<endl;

    cout<<"Address : "<< c.getAddress()<<endl;
    cout<<"City : "<< c.getCity()<<endl;
    cout<<"State : "<< c.getState()<<endl;
    cout<<"Phone : "<< c.getPhone()<<endl;
    cout<<"Zip Code : "<< c.getZip()<<endl;
    cout<<"Customer Number : "<< c.getCustomerNumber()<<endl;
    cout<<"On mailing list : "<< c.getMailingList()<<endl;
    return 0;
}




}
