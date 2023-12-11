#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Contact {
private:
    char* fullName;
    char* homePhone;
    char* workPhone;
    char* mobilePhone;
    char* additionalInfo;
public:
    Contact(const char* name, const char* home, const char* work, const char* mobile, const char* info) {
        fullName = new char[strlen(name) + 1];
        strcpy(fullName, name);

        homePhone = new char[strlen(home) + 1];
        strcpy(homePhone, home);

        workPhone = new char[strlen(work) + 1];
        strcpy(workPhone, work);

        mobilePhone = new char[strlen(mobile) + 1];
        strcpy(mobilePhone, mobile);

       additionalInfo = new char[strlen(info) + 1];
        strcpy(additionalInfo, info);
    }
    Contact(const Contact& other) {
        fullName = new char[strlen(other.fullName) + 1];
        strcpy(fullName, other.fullName);

        homePhone = new char[strlen(other.homePhone) + 1];
        strcpy(homePhone, other.homePhone);

        workPhone = new char[strlen(other.workPhone) + 1];
        strcpy(workPhone, other.workPhone);

        mobilePhone = new char[strlen(other.mobilePhone) + 1];
        strcpy(mobilePhone, other.mobilePhone);

        additionalInfo = new char[strlen(other.additionalInfo) + 1];
        strcpy(additionalInfo, other.additionalInfo);
    }
    ~Contact() {
        delete[] fullName;
        delete[] homePhone;
        delete[] workPhone;
        delete[] mobilePhone;
        delete[] additionalInfo;
    }
    const char* getFullName() { return fullName; }
    const char* getHomePhone() { return homePhone; }
    const char* getWorkPhone() { return workPhone; }
    const char* getMobilePhone() { return mobilePhone; }
    const char* getAdditionalInfo() { return additionalInfo; }
};
int main()
{
    Contact myContact("Ivan Ivanov", "987-555-0934", "761-033-9856", "555-123-4567", "Friend and coworker");
    cout << "Name: " << myContact.getFullName() << "\n";
    cout << "First Phone number: " << myContact.getHomePhone() << "\n";
    cout << "Work or second phone number: " << myContact.getWorkPhone() << "\n";
    cout << "Main Phone Number: " << myContact.getMobilePhone() << "\n";
    cout << "Info: " << myContact.getAdditionalInfo() << "\n";
}
