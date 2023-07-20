#include <iostream> 
using namespace std;

 

bool distinct(string date){
    if(date.length()<2){
        return false; 
    }else{
    for(int i =0; i<date.length(); i++){
        for(int j = i+1; j<date.length(); j++){
            if(date[j] == date[i]){
                return false; 
            }
            
        }

    }
    }
    return true;
}

int main() {
    int year; 
    cin>>year; 
    string string_year = to_string(year);
    
    if(distinct(string_year)){
        year++;
        string_year = to_string(year);
    }
    
    while(1){
        if(string_year.length()<2){
            year++;
            break; 
        }
        
        if(distinct(string_year)){
            break;
        }
        else{
            year++;
            string_year = to_string(year);  
        } 
    }
    
        

    cout<<year<<endl; 
    return 0; 
}

