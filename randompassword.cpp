#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int passlen;
    string Alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    cout << "你要几位数的密码" << endl;
    cin >> passlen;
    srand((unsigned)time(nullptr));
    random_shuffle(Alphabet.begin(),Alphabet.end());
    string password(Alphabet.substr(0,passlen));
    cout << password << endl;
    return 0;
}
