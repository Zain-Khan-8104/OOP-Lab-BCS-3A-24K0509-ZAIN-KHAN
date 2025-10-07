// An IT department manages specialized server access tokens that must be released when a user
// session ends. Create a class ServerSession with an integer member sessionID. The
// Constructor should take an ID and print a message confirming the session started and resource
// acquired. Implement a Destructor that prints a message indicating the specific session is ending
// and the resource is released. In the main() function, create a block of code using curly braces
// and instantiate a ServerSession object inside it. The task is to verify that the destructor is
// automatically called when the object goes out of scope at the end of the block.
#include<iostream>
#include<string>
using namespace std;

class ServerSession
{
    private:
    int sessionID;
    public:
    ServerSession(){
       sessionID = 0;
    }
    ServerSession(int id):sessionID(id){
       cout << "Session " << sessionID << " started and resource acquired." << endl;
    }
    
    ~ServerSession()
    {
       cout << "Session " << sessionID << " is ending and the resource is released." << endl;
    }

};

int main()
{
    cout << "Entering the session block..." << endl;

    {   
        ServerSession s(2);   
    }   
    cout << "Exited the session block." << endl;
    return 0;
}
