#include <iostream> 
#include <vector>  
#include <string>
using namespace std;

int main() {
    vector<string> cities; 
    string city; 
    int lowest, lowest2, lowestindex; 

    while (getline(cin, city)){
        if (city.find("Waterloo") != string::npos){
            cities.push_back(city);
            break;}
        cities.push_back(city);
    }

    string town = cities[0]; 
    int index = town.find(' ');
    string low = town.substr(index + 1); 
    lowest = stoi(low); 
    lowestindex = 0; 
    lowest2 = lowest; 

    for (int i = 1; i < cities.size(); i++){
        string town = cities[i]; 
        int index = town.find(' ');
        string temperature =town.substr(index + 1);
        lowest = stoi(temperature);
        if (lowest<lowest2) {
            lowest2 =lowest;
            lowestindex=i; 
        }
    }

    string lowestcity = cities[lowestindex]; 
    int index1 = lowestcity.find(' '); 
    cout<<lowestcity.substr(0, index1)<<endl;
    return 0; 
}
