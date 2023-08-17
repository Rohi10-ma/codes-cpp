#include <iostream>
#include <vector>
#include <string>

using namespace std; // Add this line to use the std namespace

class Post {
private:
    string title;
    string description;

public:
    Post(const string& _title, const string& _description)
        : title(_title), description(_description) {}

    string getTitle() const {
        return title;
    }

    string getDescription() const {
        return description;
    }
};

class UserAccount {
protected:
    string username;
    string password;
    vector<Post> posts;

public:
    UserAccount(const string& _username, const string& _password)
        : username(_username), password(_password) {}

    void displayInfo() const {
        cout << "Username: " << username << endl;
        cout << "Password: " << password << endl;
    }

    void viewAllPosts() const {
        if (posts.empty()) {
            cout << "No posts available." << endl;
            return;
        }

        cout << "Posts:" << endl;
        for (const auto& post : posts) {
            cout << "Title: " << post.getTitle() << endl;
            cout << "Description: " << post.getDescription() << endl;
            cout << endl;
        }
    }

    void addPost(const string& title, const string& description) {
        Post newPost(title, description);
        posts.push_back(newPost);
    }
};

class PersonalAccount : public UserAccount {
private:
    string gender;

public:
    PersonalAccount(const string& _username, const string& _password, const string& _gender)
        : UserAccount(_username, _password), gender(_gender) {}

    void displayInfo() const {
        UserAccount::displayInfo();
        cout << "Gender: " << gender << endl;
    }
};

class BusinessAccount : public UserAccount {
private:
    double revenue;

public:
    BusinessAccount(const string& _username, const string& _password, double _revenue)
        : UserAccount(_username, _password), revenue(_revenue) {}

    void displayInfo() const {
        UserAccount::displayInfo();
        cout << "Revenue: " << revenue << endl;
    }
};

int main() {
    int accountType;
    string username, password, gender;
    double revenue;

    cout << "Account Creation" << endl;
    cout << "1. Personal Account" << endl;
    cout << "2. Business Account" << endl;
    cout << "Enter account type: ";
    cin >> accountType;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (accountType == 1) {
        cout << "Enter gender: ";
        cin >> gender;

        PersonalAccount personalAccount(username, password, gender);
        personalAccount.displayInfo();

        string title, description;
        cout << "Enter post title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter post description: ";
        getline(cin, description);
        personalAccount.addPost(title, description);

        personalAccount.viewAllPosts();
    }
    else if (accountType == 2) {
        cout << "Enter revenue: ";
        cin >> revenue;

        BusinessAccount businessAccount(username, password, revenue);
        businessAccount.displayInfo();

        string title, description;
        cout << "Enter post title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter post description: ";
        getline(cin, description);
        businessAccount.addPost(title, description);

        businessAccount.viewAllPosts();
    }
    else {
        cout << "Invalid account type." << endl;
    }

    return 0;
}
