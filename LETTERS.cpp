#include <iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"enter a letter = ";
    cin>>alpha;
    
    if(alpha >= 65 && alpha <=90){
        if(alpha==65 || alpha==69 || alpha==73 || alpha==79 ||alpha==85){
            cout<<"capital vowel \n";
        }else {
            cout<<"capital consonent";
        }
    }else if(alpha >= 97&&alpha<=122 ){
        if(alpha==97 || alpha==101 || alpha==105 || alpha==111 ||alpha==117){
            cout<<"small vowel \n";
        }else {
            cout<<"small consonent";
        }
    }else{
        cout<<"not an alphabet";
    }
    
    
    return 0;
}