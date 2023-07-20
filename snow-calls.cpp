#include <iostream> 
using namespace std;

int main() {
    int t;
    cin >> t; 
    string x[t]; 
    
    for (int i = 0; i < t; i++) {
        cin >> x[i];
    }
    
    for (int j = 0; j < t; j++) {
        string g = x[j];
        string formattedNumber = "";
        int count = 0;
        
        for (int o = 0; o < g.length() && count < 10; o++) {
            char b = g[o];
            if (b == '-') {
                continue;
            }
            else if (b =='A' ||b == 'B' || b == 'C') {
                b = '2';
            }
            else if (b == 'D' || b == 'E' || b == 'F') {
                b = '3';
            }
            else if (b == 'G' ||b == 'H' || b == 'I') {
                b = '4';
            }
            else if (b == 'J' ||b == 'K' || b == 'L') {
                b = '5';
            }
            else if (b =='M' || b == 'N' || b == 'O') {
                b = '6';
            }
            else if (b == 'P' || b == 'Q' || b == 'R' || b == 'S') {
                b = '7';
            }
            else if (b == 'T' || b == 'U' || b == 'V') {
                b = '8';
            }
            else if (b == 'W' || b == 'X' || b == 'Y' || b == 'Z') {
                b = '9';
            }
            
            formattedNumber += b;
            count++;
        }
        
        x[j] = formattedNumber;
    }

    for (int i = 0; i < t; i++) {
        cout<<x[i].substr(0, 3) << "-"<< x[i].substr(3, 3) <<"-"<< x[i].substr(6) << endl;
        }
    }

    return 0;
}
