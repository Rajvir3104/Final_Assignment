#include "airline.h"


class airlines
{
private:
    // three data members
    std::string *airline_name;
    std::vector<std::string *> flights;
    int numberOflights;

public:
    // constructor
    airlines(const std::string &name) : numberOflights(0)
    {
        airline_name = new std::string(name);
    }
    // destructor
    ~airlines()
    {
        delete airline_name;
    }

    // member function to add flights
    void addFlight(const std::string &flight)
    {
        std::string *newFlight = new std::string(flight);
        flights.push_back(newFlight);
        numberOflights++;
    }

    // getter function for airline name
    std::string get_airline_name() const
    {
        return *airline_name;
    }

    // getter function for list of flights
    const std::vector<std::string *> &get_flights() const
    {
        return flights;
    }

    // getter function for number of flights
    int get_num_flights() const
    {
        return numberOflights;
    }

};
