#include <iostream>
#include <string>
using namespace std;

class Inventory {
    
        int id_;
        string name_;
        int price_;
        int quantity_;
    public:
        // Constructor with parameters
        Inventory(int id, string name, int price, int quantity) {
            id_ = id;
            name_ = name;
            price_ = price;
            quantity_ = quantity;
        }

        // Default constructor
        Inventory() {
            id_ = 0;
            name_ = "Not set";
            price_ = 0;
            quantity_ = 0;
        }

        // Setters
        void set_id(int id) {
            id_ = id;
        }

        void set_name(string name) {
            name_ = name;
        }

        void set_price(int price) {
            price_ = price;
        }

        void set_quantity(int quantity) {
            quantity_ = quantity;
        }

        // Getters
        int get_id() const {
            return id_;
        }

        string get_name() const {
            return name_;
        }

        int get_price() const {
            return price_;
        }

        int get_quantity() const {
            return quantity_;
        }

        // Display function
        void display() const {
            cout << "Name: " << name_ << endl;
            cout << "ID: " << id_ << endl;
            cout << "Price: " << price_ << endl;
            cout << "Quantity: " << quantity_ << endl;
            cout << endl;
        }

        // Destructor
        ~Inventory() {
            cout << "Method destroyed" << endl;
        }
};

// Update item details function
void update_item_details(Inventory items[], int size) {
    int choice, new_price, new_quantity;

    cout << "1. Update the price " << endl << "2. Update quantity" << endl << "3. Exit" << endl;
    cin >> choice;

    for(int i = 0; i < size; i++) {
        if(choice == 1) {
            cout << "Set new price for item " << i+1 << " : ";
            cin >> new_price;
            items[i].set_price(new_price);
        } else if(choice == 2) {
            cout << "Set new quantity for item " << i+1 << ": ";
            cin >> new_quantity;
            items[i].set_quantity(new_quantity);
        } else if(choice == 3) {
            break;
        }
    }
}

// Search for item function
void search_for_item(Inventory items[], int size) {
    int id;
    bool found = false;
    cout << "Enter ID of the item: ";
    cin >> id;

    for(int i = 0; i < size; i++) {
        if(id == items[i].get_id()) {
            items[i].display();
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Item not found" << endl;
    }
}

// Inventory information function
void inventory_information(Inventory items[], int size) {
    int choice;

    while(true) {
        cout << "1. Display items" << endl << "2. Update item details" << endl << "3. Search for item by ID" << endl << "4. Exit" << endl;
        cin >> choice;

        if(choice == 1) {
            for(int i = 0; i < size; i++) {
                items[i].display();
            }
        }
        else if(choice == 2) {
            update_item_details(items, size);
        }
        else if(choice ==3) {
            update_item_details(items,size);
        } 
        else if(choice ==4){
            break;
        }
    }
}
int main() {
    int size;
    cout << "Enter total number of items: ";
    cin >> size;
    Inventory items[size];
     for(int i=0 ; i<size; i++)
    {
        int id;

        string name;

        int price;

        int quantity;

        cout<<"Enter The ID of Item "<<i+1<<" : ";
        cin>>id;
        items[i].set_id(id);
        items[i].get_id();
        cin.ignore();
        
        cout<<"Enter The Name of Item  "<<i+1<<" : ";
        getline(cin , name);
        items[i].set_name(name);
        items[i].get_name();
        
        cout<<"Set price "<<i+1<<" : ";
        cin>>price;
        items[i].set_price(price);
        items[i].get_price();
        
        cout<<"Quantity "<<i+1<<" : ";
        cin>>quantity;
        items[i].set_quantity(quantity);
        items[i].get_quantity(); 
    }
 
    inventory_information(items , size);

}