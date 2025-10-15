// A call center in Karachi, such as a Jazz customer service center, tracks its daily operations.
// Develop a class CallRecord with details like callerID and durationMinutes. In your main
// function, create an array of objects of size 20 to represent the calls handled in one shift.
// Implement a static data member in CallRecord to keep a running count of the total number of
// calls logged since the program started, and provide a static member function getTotalCalls()
// that can be called using the class name to display this total count.
#include <iostream>
#include <string>
using namespace std;

class CallRecord
{
private:
    string callerID;
    int durationMinutes;
    static int totalCalls;

public:
    CallRecord(string id = "", int duration = 0)
    {
        callerID = id;
        durationMinutes = duration;
        totalCalls++;
    }

    void displayRecord() const
    {
        cout << "Caller ID: " << callerID << endl;
        cout << "Duration minutes: " << durationMinutes << endl;
    }

    static void getTotalCalls()
    {
        cout << "Total calls logged: " << totalCalls << endl;
    }
};

int CallRecord::totalCalls = 0;

int main()
{
    CallRecord calls[20] = {
        {"0300-1111111", 5},
        {"0301-2222222", 10},
        {"0302-3333333", 7},
    };

    cout << "Call Records " << endl;
    calls[0].displayRecord();
    cout << endl;
    calls[1].displayRecord();
    cout << endl;
    calls[2].displayRecord();
    cout << endl;

    CallRecord::getTotalCalls();

    return 0;
}
