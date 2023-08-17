#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

// Currency base class
class Currency {
public:
    virtual string getCode() const = 0;
    virtual double getExchangeRate() const = 0;
};

// USD(American Dollar) currency derived class
class USD : public Currency {
public:
    string getCode() const override { 
        return "USD";
        }
    double getExchangeRate() const override { 
        return 1.0; 
    }
};

// GBP(Pound Sterling) currency derived class
class GBP : public Currency {
public:
    string getCode() const override { 
        return "GBP"; 
    }
    double getExchangeRate() const override { 
        return 1.25; 
    }
};

// PKR(Pakistani Ruppee) currency derived class
class PKR : public Currency {
public:
    string getCode() const override { 
        return "PKR"; 
    }
    double getExchangeRate() const override { 
        return 0.0035; 
    }
};

// INR(Indian Ruppee) currency derived class
class INR : public Currency {
public:
    string getCode() const override { 
        return "INR"; 
    }
    double getExchangeRate() const override { 
        return 0.012; 
    }
};

// EUR(EURO) currency derived class
class EUR : public Currency {
public:
    string getCode() const override { 
        return "EUR"; 
    }
    double getExchangeRate() const override { 
        return 1.09; 
    }
};

// CAD(Canadian Dollar) currency derived class
class CAD : public Currency {
public:
    string getCode() const override { 
        return "CAD"; 
    }
    double getExchangeRate() const override { 
        return 0.74; 
    }
};

// Currency Converter class
class CurrencyConverter {
public:
    CurrencyConverter() {
        currencies["USD"] = new USD();
        currencies["GBP"] = new GBP();
        currencies["PKR"] = new PKR();
        currencies["INR"] = new INR();
        currencies["EUR"] = new EUR();
        currencies["CAD"] = new CAD();
    }
    ~CurrencyConverter() {
        for (auto& p : currencies) {
            delete p.second;
        }
    }
    double convert(double amount, string from, string to) {
        if (from == to) {
            return amount;
        }
        if (currencies.count(from) == 0 || currencies.count(to) == 0) {
            throw invalid_argument("Invalid currency code");
        }
        double exchange_rate = currencies[from]->getExchangeRate() / currencies[to]->getExchangeRate();
        return amount * exchange_rate;
    }
    void printCurrencies() const {
        cout << endl<<"Supported currencies:" << endl<<endl;
        for (const auto& p : currencies) {
            cout << "- " << p.second->getCode() << endl;
        }
    }
private:
    map<string, Currency*> currencies;
};

// Main function
int main() {
    CurrencyConverter converter;
    double amount;
    string from, to;
    cout << fixed << setprecision(2);
    cout <<endl<< "                                                 Welcome to Currency Converter" << endl<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------";
    converter.printCurrencies();
    cout <<endl<< "Enter Amount: ";
    cin >> amount;
    cout << "Enter From Currency code: ";
    cin >> from;
    cout << "Enter To Currency code: ";
    cin >> to;
    try {
        double result = converter.convert(amount, from, to);
        cout <<endl<< endl<<amount << " " << from << " = " << result << " " << to << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}