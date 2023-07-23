#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin>>x;
  string h[x];
  string b = "";
  for(int i = 0; i<x; i++){
    cin>>h[i]; 
  }
  for(int g = 0; g<x; g++){
    if(h[g] == "Scissors"){
      b+="Rock\n";
    }
    if(h[g] == "Paper"){
      b+="Scissors\n";
    }
    if(h[g] == "Rock"){
      b+="Paper\n";
    }
    if(h[g] == "Fox"){
      b+="Foxen\n";
    }
    if(h[g] == "Foxen"){
      break;
    }
  }
  cout<<b<<endl;
  
   
}
