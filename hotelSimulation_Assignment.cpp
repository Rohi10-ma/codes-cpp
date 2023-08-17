#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Room {
private:
    int roomNumber;
    string roomType;
    string checkInTime;
    string checkOutTime;
    double rent;
    bool isOccupied;

public:
    Room(int number, string type, double roomRent) {
        roomNumber = number;
        roomType = type;
        rent = roomRent;
        checkInTime = "";
        checkOutTime = "";
        isOccupied = false;
    }

    void setCheckInTime(string time) {
        checkInTime = time;
    }

    void setCheckOutTime(string time) {
        checkOutTime = time;
    }

    void setIsOccupied(bool occupied) {
        isOccupied = occupied;
    }

    int getRoomNumber() const {
        return roomNumber;
    }

    string getRoomType() const {
        return roomType;
    }

    string getCheckInTime() const {
        return checkInTime;
    }

    string getCheckOutTime() const {
        return checkOutTime;
    }

    double getRent() const {
        return rent;
    }

    bool getIsOccupied() const {
        return isOccupied;
    }
};

class Hotel {
private:
    string hotelName;
    string location;
    string ownerName;
    vector<Room> rooms;

public:
    Hotel(string name, string loc, string owner) {
        hotelName = name;
        location = loc;
        ownerName = owner;
    }

    void setHotelName(string name) {
        hotelName = name;
    }

    void setLocation(string loc) {
        location = loc;
    }

    void setOwnerName(string owner) {
        ownerName = owner;
    }

    string getHotelName() const {
        return hotelName;
    }

    string getLocation() const {
        return location;
    }

    string getOwnerName() const {
        return ownerName;
    }

    void checkIn(int roomNo) {
        for (Room& room : rooms) {
            if (room.getRoomNumber() == roomNo) {
                room.setCheckInTime("Now");
                room.setIsOccupied(true);
                cout <<endl<< "Room " << roomNo << " Is Assigned To A Customer." << endl;
                return;
            }
        }
        cout <<endl<< "Room " << roomNo << " Does Not Exist In The Hotel." << endl;
    }

    void checkOut(int roomNo) {
        for (Room& room : rooms) {
            if (room.getRoomNumber() == roomNo) {
                room.setCheckOutTime("Now");
                room.setIsOccupied(false);
                cout <<endl<< "Customer Has Checked Out Of Room " << roomNo << "." << endl;
                return;
            }
        }
        cout << endl<<"Room " << roomNo << " Does Not Exist In The Hotel." << endl;
    }

        void getAvailRoom() const {
        cout << endl<<"Available Rooms:" << endl;
        for (const Room& room : rooms) {
            if (!room.getIsOccupied()) {
                cout <<endl<< "Room Number: " << room.getRoomNumber() << endl;
                cout <<"Room Type: " << room.getRoomType() << endl;
                cout <<"Rent: $" << room.getRent() << "/Night" << endl;
                cout <<"----------------------" << endl;
            }
        }
    }

    void showRoomSummary(int roomNo) const {
        for (const Room& room : rooms) {
            if (room.getRoomNumber() == roomNo) {
                if (room.getIsOccupied()) {
                    cout << endl<<"Room " << roomNo << " is occupied." << endl;
                    cout << endl<<"Assigned Customer Check-in Time: " << room.getCheckInTime() << endl;
                } else {
                    cout << "Room " << roomNo << " Is Available." << endl;
                }
                return;
            }
        }
        cout <<endl<< "Room " << roomNo << " Does Not Exist In The Hotel." << endl;
    }

    void addRoom(Room room) {
        rooms.push_back(room);
    }

    void displayHotel(){

        cout<<hotelName<<endl;
        cout<<location<<endl;
        cout<<ownerName<<endl;
    }
};

int main() {
    //Assigning Hotel Name, Owner Name and Location
    Hotel hotel("The Iqbal Hotel", "New York City", "Rohail Iqbal");

    //Room Prices
    Room room1(101, "Basic", 50.0);
    Room room2(102, "Standard", 80.0);
    Room room3(103, "Luxury", 120.0);
    
    hotel.addRoom(room1);
    hotel.addRoom(room2);
    hotel.addRoom(room3);
    //Assigning Rooms to customesr
    hotel.checkIn(101);
    hotel.checkIn(102);
    hotel.checkOut(101);
    hotel.getAvailRoom();
    hotel.showRoomSummary(102);
    hotel.showRoomSummary(103);
    cout<<endl<<endl<<endl;
    //Displaying Hotel Info
    hotel.displayHotel();


    return 0;
}
