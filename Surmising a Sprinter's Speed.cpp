#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string>list; 
    string values; 
    int tot, index_of_space, time1, time2, distance1, distance2, distance, time; 
    double min_speed = 0; 
    cin>> tot; 
    cin.ignore();
    for(int i = 0; i<tot; i++){
        getline(cin, values);
        list.push_back(values);
    }
    

    sort(list.begin(), list.end(), [](const string& a, const string& b){
        int timeA = stoi(a.substr(0, a.find(' ')));
        int timeB = stoi(b.substr(0, b.find(' ')));
        return timeA > timeB; 
    } );

 

    for(int i = 1; i<tot; i++){
        int space_index1 = list[i].find(' ');
        int space_index2 = list[i-1].find(' ');
        time1 = stoi(list[i].substr(0, space_index1));
        time2 = stoi(list[i-1].substr(0, space_index2));

        distance1 = stoi(list[i].substr(space_index1+1));
        distance2 = stoi(list[i-1].substr(space_index2+1));

        distance = abs(distance1 - distance2);
        time = time2 - time1; 
        double speed = static_cast<double>(distance) / time; 
        if(speed >min_speed){
            min_speed = speed;
        }

    
    }

    cout<<min_speed<<endl; 
    return 0; 
}
