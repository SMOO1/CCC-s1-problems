#include <iostream> 
using namespace std;



int jersey(int a){
    int sum = 0;
    if(a<4){
        return 0; 
    }
    for(int p1 = 1; p1<=a-3; p1++){
        for(int p2 = p1+1; p2<=a-2; p2++){
            for(int p3= p2+1; p3<=a-1; p3++){
                sum++;
            }
        }
    }
    return sum;
}

int main(){
    int j;
    cin>>j; 
    cout<<jersey(j)<<endl;
}
