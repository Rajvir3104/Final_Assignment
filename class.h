
#include <iostream>
#include <string>
#include <string>

using namespace std;



// Struct to store person info
struct Person {
    string firstName;
    string lastName;
    string phoneNumber;
    string rownum;
    int pID;
};



class seat{
    
public:
    //ctor
    seat();
    seat(int row,char col,char s);
    
    
    seat(const seat& source);
    seat(string& rownum, char s);
    
    
    //setters
    void set_row(int row);
    void set_col(char col);
    void set_status(bool s);
    
    //getters
    int get_row()const;
    int get_col()const;
    bool get_status()const;
    
    
private:
    int Srow; //reads from Airline class
    char Scol; //reads from Airline class
    bool status; // "X" if occupied
                // "O" if not occupied
};


class passenger{
    
public:
    //ctor
    
    passenger();
    passenger(const int pID,const string& FN,const string& LN, const string& PNum, string &seatcode);
    passenger(const passenger& source);
    
    
    //setters
    
    
    void set_PhoneNumber(char* pNum);
    void set_FName(char* FN);
    void set_LName(char* LN);
    void set_passenger_id(int pID);
    void set_seatPointer(seat* ptr);
    
    //getters
    string get_FName()const;
    string get_LName()const;
    string get_PhoneNumber()const;
    int get_passenger_id()const;
    string get_seat_code()const;
    seat* get_seatPointer() const;
    
    
private:
    int passenger_id;
    string FName;
    string LName;
    string PhoneNumber;
    string seat_code;
    seat* seatPTR;
    
};
    
class flight {
public:
    //ctor
    flight();
    flight(const char* fID, const int rows, const int cols);
    flight(const flight& source);
    
    //setter functions
    void set_flightID(char* fID);
    void set_fRows(int rows);
    void set_fCols(int cols);
    void set_listPassenger(const vector<passenger>& list);
    void set_seatMap(const vector<vector<passenger> >& map);
    
    
    //getter functions
    string get_flightID() const;
    int get_fRows() const;
    int get_fCols() const;
    const vector<passenger>& get_listPassenger() const;
    const vector<vector<passenger> >& get_seatMap() const;
    
   
    
    
private:
    string flightID;
    int fRows;
    int fCols;
    vector <passenger> passengerList;
    vector<vector<passenger> > seatMap;
    //seatMap[][]
};


int convertStringToInt(const string& str);
int charToInt(char c);
