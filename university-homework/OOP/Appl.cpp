#include "Lab5.cpp"

using namespace std;

int main() {
    string st = "Sometimes I Dream About Cheese";
    char ch[] = "Tam Za Goroy Lezhit Syra Mnogo";

    Stroka strBySt = {st};
    Stroka strByCh = {ch};
    Stroka strMnIn = {ch};

    Rabota empIsGd = {st};
    system("cls");

    empIsGd.prnt();

    empIsGd.ltrs();

    system("pause");
    system("cls");

    char aba = ' ';
    cout << "Enter the number (1-3) to: " << endl;
    cout << "1. Show one of the strings" << endl;
    cout << "2. Show length of a string" << endl;
    cout << "3. Show con and vow values" << endl;
    cout << "Anything else to halt." << endl;
    cin >> aba;

    system("cls");

    switch (aba) {
        case '1':
            cout << "Enter which string would you like to see (1-3 / a -> all): ";
            cin >> aba;
            switch (aba) {
                case '1' :
                    strBySt.prnt();
                    break;
                case '2' :
                    strByCh.prnt();
                    break;
                case '3' :
                    strMnIn.prnt();
                    break;
                case 'a' :
                    strBySt.prnt();
                    strByCh.prnt();
                    strMnIn.prnt();
                    break;
                default:
                    break;
            }
            break;
        default:
            cout << "Bad input, and I am a kettle";
    }


    system("pause");
    return 0;
}