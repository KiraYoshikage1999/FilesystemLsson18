
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

class User {
    string name;
    int age;
public:
    User() {
        name = "Alexey";
        age = 16;
    }

    User(string name, int age){
        this->name = name;
        this->age = age;
    }

    void WriteUserToFile() {
        ofstream outFile("users.txt", ios::app); // Відкрити файл для запису
        outFile << "Username: " << this->name << " Age: "<< this->age << endl;
        outFile.close();

    }

    //void ReadAllUsersInFile() {

    //    ifstream inFile("users.txt"); // Відкрити файл для читання
    //    string line;
    //    while (getline(inFile, line)) {
    //        cout << line << endl;

    //    }
    //    inFile.close();

    //}
};

class Group {
    User* users;
    int amountOfUsers;


public:
    Group() {
        amountOfUsers = 1;
        users = new User[amountOfUsers];
    }

    void PrintInfoBoutUsers() {
        ifstream inFile("users.txt"); // Відкрити файл для читання
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;

        }
        inFile.close();
    }
};

int main()
{
    User obj;
    Group obj2;
    obj.WriteUserToFile();
    obj2.PrintInfoBoutUsers();

}


