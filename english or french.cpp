#include <bits/stdc++.h>
using namespace std; 

int main(){
  int fr = 0, en = 0;
  int num; cin>>num;
  string txt;
  getline(cin, txt); 
  for(int i = 0; i<num; i++){
    getline(cin, txt);
    transform(txt.begin(), txt.end(), txt.begin(), ::tolower); 
    for(int j = 0; j<txt.length(); j++){
      if(txt[j] == 't')
        en++;
      if(txt[j] == 's')
        fr++;
    }
  
  }
  if(en>fr){
    cout<<"English";
  }
  else if(fr>en){
    cout<<"French";
  }
  else{
    cout<<"French";
  }
  
}
