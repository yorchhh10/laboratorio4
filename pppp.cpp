#include <iostream>

using namespace std;
int main(){
    int edad  =0; 
    cout << "ingrese la edad: "; 
    cin >> edad ;

    if  (edad < 5){

        cout << "No tiene que pagar, la entrada es gratis" ;
    }else if (edad <= 12){
// si la edad del niño es de 5 a 12 años tendras que pagar 5 dolares
        cout << "Pagaran 5 dolares ";
    }else if (edad >12){

        cout << "Pagaran 10 dolares ";
    }

    cout << " \n fin del programa";
    return 0;
}
