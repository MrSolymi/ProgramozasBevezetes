#include "std_lib_facilities.h"

int main(){
    cout << "Enter the name of the person you want to write to (followed by 'enter') :\n";
    string first_name = "";
    cin >> first_name;
    cout << "Dear, " << first_name << "!\n";

    cout << "\tHow are you? I'm fine. I miss you.\n";

    string friend_name = "";
    cout << "Enter the name of another firend (followed by 'enter') :\n";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;

    char friend_sex = 0;
    cout << "Enter your friends gender (m for male, f for female)" << endl;
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    }else
    {
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }
    
    int age;
    cout << "Enter your friends age (followed by 'ener') :" << endl;
    cin >> age;
    cout << "I hear you just had a birthday and your age " << age << " years old." << endl;
    if (age <= 0 || age >= 110)
    {
        simple_error("you're kidding!");
    }

    if (age < 12)
    {
        cout << "Next year you will be " << age + 1 << "." << endl;
    }
    if (age == 17)
    {
        cout << "Next year you will be able to vote." << endl;
    }
    if (age > 70)
    {
        cout << "I hope you are enjoying retirement." << endl;
    }
    
    cout << "Sincerely,\n\n\nAttila" << endl;
    

    return 0;
}