#include <iostream>

using namespace std;

int main() {
    int rows = 9;

  
    for (int i = 0; i < rows; i++) {
     
        for (int j = 0; j <= i; j++) {
            cout << "#";
        }

       
        cout << "^" << endl;
    }

    
    for (int i = rows - 2; i >= 0; i--) {
      
        for (int j = 0; j <= i; j++) {
            cout << "#";
        }


        cout << "^" << endl;
    }

    return 0;
}
