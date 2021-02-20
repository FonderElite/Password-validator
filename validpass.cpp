#include <iostream>
#include <string.h>
using namespace std;
class Message {
public:
void msg(){
 cout<<"Thank You For using this tool!";
}
};

bool is_number(char chr) {
    return '0' <= chr && chr <= '9';
}

bool is_sp_char(char chr) {
    return chr == '&' || chr == '+' || chr == '@' || chr == '$' || chr == '#' || chr == '%';
}

int main() {
    Message mg;
    bool has_number = false;
    bool has_sp_char = false;
    bool has_spaces = false;
    string password = "";
    cout<<"Password Validator"<<endl;
    cout << "Write your password: ";
    cin >> password;
    if (password.length() >= 5 && password.length() <= 10) {
        for (int i = 0; i < password.length(); i++) {
            if (is_number(password[i]) == true){
                has_number = true;
            }
            if (is_sp_char(password[i]) == true) {
                has_sp_char = true;
            }
            if (password[i] == ' ') {
                has_spaces = true;
            }
        }
        if (has_number == true && has_sp_char == true && has_spaces == false) {
            cout << "Your password is valid!\n";
        }else{
            cout << "Your password is not valid.(Try Adding Special Chars)\n";
        }
    }else{
        cout << "Password is too short!\n";
    }
    mg.msg();
    return 0;
}
