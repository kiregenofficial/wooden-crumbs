#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

class Stroka {
private:
    static const int mxSz = 100;
    int vCnt = 0, cCnt = 0;
    size_t l = 0;
    char s[mxSz];

    static bool vowl(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

public:
    void prnt() {
        for (int i = 0; i < l; i++)
            cout << s[i];
        cout << endl;
    }

    void leng() {
        cout << l << endl;
    }

    void ltrs() {
        for (int i = 0; s[i] != '\0'; i++) {
            if (isalpha(s[i])) {
                if (vowl(s[i]))
                    vCnt++;
                else
                    cCnt++;
            }
        }
        cout << "Cons: " << cCnt << " Vows: " << vCnt << endl;
    }

    Stroka(const char cha[]) {
        l = strlen(cha);
        for (int i = 0; i < l; i++)
            s[i] = cha[i];
    }

    Stroka(const string str) {
        l = str.length();
        for (int i = 0; i < l; i++)
            s[i] = str[i];
    }

    Stroka() {
        char mi[mxSz];
        cin.getline(mi, mxSz);
        l = strlen(mi);
        for (int i = 0; i < l; i++)
            s[i] = mi[i];
    }

    ~Stroka() { cout << "Something Has Been Destroyed..."; }
};

class Rabota : public Stroka {
    static const int mxSz = 100;
    char c[mxSz];


public:
    Rabota(const char cha[]) {
        cout << "Workin for chars" << endl;
        for (int i = 0; i < strlen(cha); i++)
            c[i] = cha[i];
    }

    Rabota(const string str) {
        cout << "Workin for money" << endl;
        for (int i = 0; i < str.length(); i++)
            c[i] = str[i];
    }
};