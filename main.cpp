
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> arr;
    int choice;
    while (true) {
        cout << "Menu : " << endl;
        cout << "1-Add Task" << endl;
        cout << "2-Remove Task" << endl;
        cout << "3-Show Task" << endl;
        cout << "4-Exit" << endl;
        cout << "choise from 1 - 4" << endl;
        cin >> choice;


        if (choice == 1) {
            cout << "Enter the task" << endl;
            string s;
            cin >> s;
            arr.push_back(s);

        }
        else if (choice == 2) {
            if (arr.empty() == true) {
                cout << "NOT FOUND TASK" << endl;
            }
            else {
                
               
                arr.pop_back();
                    
                
            }
        }
        else if (choice == 3) {
            if (!arr.empty()) {

                for (int i = 0; i < arr.size(); i++) {
                    cout << " tasks : " << i + 1 << "-" << arr[i] << endl;
                }
            }
            else {
                
                cout << "NOT FOUND TASK" << endl;
            }
        }
        else if (choice == 4) {
            return 0;

        }
        else {
            cout << "not valid choice";
            return 0;
        }
    }
    return 0;
}
