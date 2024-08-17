//
//  main.cpp
//  hotel
//
//  Created by Shubham Walhekar on 8/16/24.
//

#include <iostream>
using namespace std;

class hotel{
    string *room;
    char availability[10];
    
    public:
    hotel(int no_of_rooms)
    {
        int i;
        room = new string[no_of_rooms];
        for(i=0;i<no_of_rooms;i++)
        {
            room[i] = "room " + to_string(i);
        }
    }
    void viewRooms(int n)
    {
        int i;
        cout << "Available Rooms are :\n";
        for (i = 0; i < n; i++)
        {
            if(availability[i])
            {
                cout << room[i] << " is available\n";
            }
        }
    }
    void makeReservation(string name,int n)
    {
        for (int i = 0; i < n; ++i)
        {
            if (availability[i])
            {
                availability[i] = false;
                cout << "Reservation made for " << name << " in " << room[i] << "\n";
                return;
            }
        }
        cout << "No rooms available.\n";
        
    }
    void cancelReservation(string name,int n)
    {
        for (int i = 0; i < n; ++i)
        {
            if (!availability[i] && name == room[i])
            {
                availability[i] = true;
                cout << "Reservation cancelled for " << name << " in " << room[i] << "\n";
                return;
            }
        }
        cout << "Rooms available.\n";
    }
    
};
int main() {
    hotel h(5);
    int choice;
    string name;

    do {
        cout << "\nHotel Reservation System\n";
        cout << "1. View Available Rooms\n";
        cout << "2. Make Reservation\n";
        cout << "3. Cancel Reservation\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                h.viewRooms(5);
                break;
            case 2:
                cout << "Enter your name: ";
                cin >> name;
                h.makeReservation(name,5);
                break;
            case 3:
                cout << "Enter your name: ";
                cin >>name;
                h.cancelReservation(name,5);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
