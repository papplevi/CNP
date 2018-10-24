#include "Function.h"

int main(){
    cout << "Hello. I am a ROmanian CNP (Cod Numeric Personal - Personal identification number) validator" <<endl;
    cout << "If you enter the first twelve digits out of the thirteen I'll tell you what the last digit is\n";
    cout << "Please enter the digits:" <<endl;

    //Reading all the twelve digits and multiplicating every digit with the right number based on a formula
    nextDigit verif(0);
    verif.verification(0);

    return 0;
}
