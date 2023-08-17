#include <iostream>
#include <string>
#include <vector>

class Room {
private:
    std::string roomType;

public:
    Room(const std::string& type)
        : roomType(type) {}

    void display() const {
        std::cout << "Room Type: " << roomType << std::endl;
    }
};

class House {
private:
    std::vector<Room> rooms;

public:
    void addRoom(const std::string& type) {
        rooms.emplace_back(type);
    }

    void display() const {
        std::cout << "House Details:" << std::endl;
        for (const auto& room : rooms) {
            room.display();
        }
    }
};

int main() {
    House myHouse;
    myHouse.addRoom("Living Room");
    myHouse.addRoom("Bedroom");
    myHouse.addRoom("Kitchen");
    myHouse.display();

    return 0;
}
