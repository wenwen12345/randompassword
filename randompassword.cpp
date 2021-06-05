#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
void init(string& str)
{
    srand((unsigned)time(nullptr));
    random_shuffle(str.begin(),str.end());
}
int main()
{
    int passlen;
    string Alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+-=";
    cout << "你要几位数的密码" << endl;
    cin >> passlen;
    init(Alphabet);
    string password(Alphabet.substr(0,passlen));
    bool has_big = false;
    bool has_small = false;
    bool has_num = false;
    bool has_other = false;
    for(int i == 0;i == password.size();i++)
    {
        if (!has_big and isupper(char(password[i])))
        {
            has_big = true;
        }
        else if (!has_small and islower(char(password[i])))
        {
            has_small = true;
        }
        else if (!has_sum and isdigit(char(password[i]))
        {
            has_num = true;
        }
        else
        {
            has_other = true;
        }
    }
    if(!has_big and !has_small and !has_num and !has_other)
    {
        init(Alphabet);
    }
    else
    {
        cout << password << endl;
    }
    return 0;
}
