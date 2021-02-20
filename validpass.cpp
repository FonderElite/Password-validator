#include <iostream>
#include <string.h>
#include <cmath>
#include <cstdlib>
using namespace std;
class Message {
public:
void msg(){
 cout<<"Anyways Thank You <3";
}
};

double random_Pass(double a){
int nums[10] = {1,2,3,4,5,6,7,8,9,10};
int r = nums[rand() % 10];
int rand_num = (rand() % r + a);
int rounded = round(rand_num);
return rounded;
}
bool is_number(char chr) {
    return '0' <= chr && chr <= '9';
}

bool is_sp_char(char chr) {
    return chr == '&' || chr == '+' || chr == '@' || chr == '$' || chr == '#' || chr == '%';
}

int main() {
    Message mg;
    char letters[] = "abcdefghijklmnopqrstuvwxyz)(@!^$#";
    char x = letters[rand() % 32];
    char a = letters[rand() % 31];
    char b = letters[rand() % 30];
    char c = letters[rand() % 31];
    char d = letters[rand() % 32];
    char e = letters[rand() % 31];
    char f = letters[rand() % 30];
    char g = letters[rand() % 31];
    char h = letters[rand() % 30];
    char i = letters[rand() % 30];
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
            cout << "Your password is not valid.(Try Adding Special Chars or Lengthen it)\n";
             int random_numb1 = random_Pass(1234);
             int randomized = (rand() % random_numb1);
          cout << "Try something like: "<<x <<a <<b<<c<<d<<e<<f<<g<<h<<i<<randomized<<endl;
        }
    }else{
        cout << "Password is too short!\n";
        int random_numb2 = random_Pass(1234);
        int randomized2 = (rand() % random_numb2);
        cout << "Try something like: "<<x <<a <<b<<c<<d<<e<<f<<g<<h<<i<<randomized2<<endl;
    }
    mg.msg();
    return 0;
}
