#pragma once 
// account setting :
// change email, username, password
// delete account
#include <iostream>
#include "register.h"
using namespace std;

class AccountSetting{
    public :    
        virtual void changeEmail() = 0;
        virtual void changeUsername() = 0;
        virtual void changePassword() = 0;
        virtual void deleteAccount() = 0;
};

class ChangeEmail : public AccountSetting{
    private :
        string email, password;
    
    public :
        void changeEmail() override{
            cout << "Enter your old email : ";
            cin >> this->email;
            cout << "Enter your password : ";
            cin.ignore();
            getline(cin, this->password);

            bool isChange = 0;
            for (int i = 0; i < emails.size(); i++) {
                if (this->email == emails[i] && this->password == passwords[i]) {
                    cout << "Enter your new email : ";
                    cin >> emails[i];
                    isChange = 1;
                    cout << "Email changed succesfully." << endl;
                    break;
                }
            }
            if (!isChange) cout << "Incorrect email or password." << endl;
        }
};

