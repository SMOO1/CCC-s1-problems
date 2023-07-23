#include <bits/stdc++.h>
using namespace std; 

int main() {
    int pink, green, red, orange, goal;
    cin >> pink >> green >> red >> orange >> goal;

    int count = 0;
    int min_tickets = 1000000;

    for (int p = 0; p <= goal / pink; p++) {
        for (int g = 0; g <= goal / green; g++) {
            for (int r = 0; r <= goal / red; r++) {
                for (int o = 0; o <= goal / orange; o++) {
                    int total_cost = p * pink + g * green + r * red + o * orange;
                    if (total_cost == goal) {
                        cout << "# of PINK is " << p << " # of GREEN is " << g << " # of RED is " << r << " # of ORANGE is " << o << endl;
                        count++;
                        int num_tickets = p + g + r + o;
                        if (num_tickets < min_tickets) {
                            min_tickets = num_tickets;
                        }
                    }
                }
            }
        }
    }

    cout << "Total combinations is " << count << "." << endl;
    cout << "Minimum number of tickets to print is " << min_tickets << "." << endl;

    return 0;
}
