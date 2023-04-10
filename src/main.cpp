#include <iostream>

using namespace std;

int main() {
    string questions[] = {"How old is Me", "Whats my name"};
    string options[][4] = {{"a. 15", "b. 14", "c. 18", "d. 27"},
                           {"a. Gleb", "b. Misha", "c. Andrey", "d. Egor"}};
    string yesno;
    int rightAns = 0;
    int sizeQuestions = sizeof(questions) / sizeof(questions[0]);
    int sizeOptions = sizeof(options) / sizeof(options[0][0]);
    char answerKeys[] = {'A', 'D'};
    char ans;

    cout << "**********************************" << endl;
    cout << "*            Its quiz            *" << endl;
    cout << "**********************************" << endl;
    cout << "Are u ready?: " << endl;
    getline(cin, yesno);

    if(yesno == "yes" || yesno == "Yes" || yesno == "y" || yesno == "Y"){
        for (int i = 0; i < sizeQuestions; ++i) {
            cout << "**********************************" << endl;
            cout << i + 1 << " Question - " << questions[i] << endl;
            cout << "**********************************" << endl;

            for (int j = 0; j < sizeOptions/2; ++j) {
                cout << options[i][j] << endl;
            }

            cin >> ans;
            ans = toupper(ans);

            if(ans == answerKeys[i]){
                cout << "Right answer" << endl;
                rightAns++;
            }else{
                cout << "Wrong answer" << endl;
            }
        }

    }else if(yesno == "no" || yesno == "No" || yesno == "n" || yesno == "N"){
        cout << "Bye!";
    }else{
            return 0;
    }

    cout << "**********************************" << endl;
    cout << "*             RESULTS             *" << endl;
    cout << "**********************************" << endl;

    switch(rightAns){
        case 0:
            cout << "0/2 Answers";
            break;
        case 1:
            cout << "1/2 Answers";
            break;
        case 2:
            cout << "2/2 Answers";
            break;
        default:
            cout << "Error 404";
    }

    return 0;
}
