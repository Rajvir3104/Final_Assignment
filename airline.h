#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "flight.h"

using namespace std;

#ifndef AIRLINE_H
#define AIRLINE_H

class airlines {
private:
    // three data members
    std::string *airline_name;
    std::vector<std::string *> flights;
    int numberOflights;
public:
    // constructor
    airlines(const std::string &name) : numberOflights(0){};
    // destructor
    ~airlines();

    // member function to add flights
    void addFlight(const std::string &flight);

    // getter function for airline name
    std::string get_airline_name() const;

    // getter function for list of flights
    const std::vector<std::string *> &get_flights() const;

    // getter function for number of flights
    int get_num_flights() const;
};

#endif
