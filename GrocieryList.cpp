#include<iostream>
#include<string>

class Inventory{

    int id;
    string name;
    int price;
    int quantity;

    public:

    Inventory(int id_, int quantity_, string name_, int price_,){

        id = id_;
        quantity = quantity_;
        name = name_;
        price = price_;
    }

    Inventory(){
        id = 0;
        quantity = 0;
        name = "";
        price= 0;
    }

    void set_id(int id_){
        id = id_;
    }

    void set_quantity(int quantity_){
        quantity = quantity_;
    }

    void set_price(int price_){
        price = price_;
    }

    void set_name(int name_){
        name = name_;
    }

    int get_id() const {
        return id;
    }

    int get_quantity() const {
        return quantity;

    }
    int get_price() const {
        return price;
    }

    string get_name() const {
        return name;
    }

    void Display_items(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity"<<quantity<<endl;
    }

    ~Inventory(){
        cout<<"METHOD OFF< PROGRAM DONE!!!!!!!"

    }

    void Updtae_itemDetails(Inventory items[], int size){
        int new_price, choice, new_quantity;
        cout<<"1. Update Price."<<endl;
        cout<<"2. Update Quantity."<<endl;
        cout<<"3. Exit."<<endl;

        for(int i=0; i<=size; i++){
            if(choice==1){
                cout<<endl<<"Enter New Price: ";
                cin>>new_price;

                items[i]set_price(new_price);
            }
            else if(choice==2){
                cout<<endl<<"Enter New Quantity: ";
                cin>>new_quantity;

                items[i]set_quantity(new_quantity);
            }
            else if(choice==3){
                break;
            }

        }
    }

    void searchItem(Inventory items[], int size){
        int id;
        bool found = false;
        cout<<endl<<"Enter The ID of the Item: ";
        cin>>id;

        for(int i; i<=size; i++){
            if(id==items[i].get_id){
                items[i].Display_items();

                found = true;
                break;
            }
            if(!found){

                cout<<"Item not found";
            }
        }


    }


}