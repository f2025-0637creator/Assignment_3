#include <iostream>
using namespace std;
int main(){
    int marks, attendance, familyIncome;
     cout<<"enter marks = " ;
    cin>>marks;
    cout<<"attendance = ";
    cin>>attendance;
    cout<<"family income = ";
    cin>>familyIncome;
    
    if(marks>=85 && attendance >=80){
        cout<<"full scholarship\n";
    }else if(marks>=70){
        cout<<"partial scholarship\n";
    }else{
        cout<<"no scholarship\n";
    }
    
    
    return 0;
}