#include "Function.h"

nextDigit::nextDigit(int dig)
{
}

int nextDigit::verification(int digit)
{
    int i  = 0;
    int cnp[12];

    while(i<12){
        cout << "Digit number " << i+1 << ":";
        cin >> cnp[i];
        i++;
    }

    for(int i=0;i<12;i++){
        switch(i){
            case 0:{
                digit=digit+cnp[i]*2;
                break;
            }
            case 1:{
                digit=digit+cnp[i]*7;
                break;
            }
            case 2:{
                digit=digit+cnp[i]*9;
                break;
            }
            case 3:{
                digit=digit+cnp[i]*1;
                break;
            }
            case 4:{
                digit=digit+cnp[i]*4;
                break;
            }
            case 5:{
                digit=digit+cnp[i]*6;
                break;
            }
            case 6:{
                digit=digit+cnp[i]*3;
                break;
            }
            case 7:{
                digit=digit+cnp[i]*5;
                break;
            }
            case 8:{
                digit=digit+cnp[i]*8;
                break;
            }
            case 9:{
                digit=digit+cnp[i]*2;
                break;
            }
            case 10:{
                digit=digit+cnp[i]*7;
                break;
            }
            case 11:{
                digit=digit+cnp[i]*9;
                break;
            }
        }
    }
    digit=digit%11;

    cout << "The last digit is: " << digit << endl;

    return digit;
}
