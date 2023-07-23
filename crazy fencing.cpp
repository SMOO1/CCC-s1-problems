#include <bits/stdc++.h>
using namespace std; 

int main(){
  int num, width; cin>>num;
  double area = 0;
  int g[num+1];
  for(int i = 0; i<=num; i++){
    cin>>g[i];
  }
  for(int j = 0; j<num; j++){
    cin>>width;
    area+= width*(g[j]+g[j+1])/2.0;
  }
  cout << fixed << setprecision(1) << area;
}
