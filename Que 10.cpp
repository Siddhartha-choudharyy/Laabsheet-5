#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 0;
    cout << "Enter numbers (Enter 0 to stop):" << endl;
    
    while (true) {
      cin>>num;
        if (num == 0) {
            break;
        }
        if (num > 0) {
            count++;
        }
    }
    cout << "Total positive numbers entered: " << count << endl;
    return 0;
}
