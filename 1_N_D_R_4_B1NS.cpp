#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void writeLine(unsigned int, unsigned int, unsigned int, int);


int main(){
    unsigned int number = 0;
    unsigned int type;
    unsigned int second_type = 999;
    unsigned int level;
    cout<<" ============================= { 1 n d r 4 } =============================== "<<endl;
    cout<<" | 1) INDONESIA                              | Max size: 8170              | "<<endl;
    cout<<" | 2) JAPANESE                               | Mezclar type (ejemplos):    | "<<endl;
    cout<<" | 3) ARABIAN                                | Type: 23 (JAPANESE+ARABIAN) | "<<endl;
    cout<<" | 4) V01D                                   | Type: 46 (V01D+CHINESE)     | "<<endl;
    cout<<" | 5) INFINITE                               |=============================| "<<endl;
    cout<<" | 6) CHINESE                                |       -- L E V E L S --     | "<<endl;
    cout<<" | 7) J4D3-DR4K3                             | 1) 1 Char x type            | "<<endl;
    cout<<" | 8) 1PH0NE                                 | 2) 2 Chars x type           |"<<endl;
    cout<<" | 9) MYSTERY                                | 3) 3 Chars x type           | "<<endl;
    cout<<" =========================================================================== "<<endl<<endl;
    cout<<"Size: ";cin>>number;
    cout<<"Type: ";cin>>type;
    cout<<"Level: ";cin>>level;
    cout<<endl;

    // ==================================================

    ofstream file_b1n;
    file_b1n.open("1_N_D_R_4.txt", std::ios::out|std::ios::binary);

    if (file_b1n.fail()){
        cout<<"No se pudo crear el archivo... "<<endl;
        exit(1);
    }

    unsigned char smarker[3];
    smarker[0] = 0xEF;
    smarker[1] = 0xBB;
    smarker[2] = 0xBF;

    file_b1n << smarker;
    file_b1n.close();
    file_b1n.open("1_N_D_R_4.txt", std::ios::out|std::ios::app);


    file_b1n<<"|  暁 1 n d r 4 暁  |";
    file_b1n.close();
    // ==================================================
    if(type > 9){
        second_type = type % 10;
        type = type / 10;
    }else if(type == 0){
        cout<<" - SECRET TYPE: A M A T E R A S U - "<<endl<<endl;
    }
    int counter = 0;
    cout<<"Writing..."<<endl;
     while(counter < number){
        if (second_type != 999){
            writeLine(level, type, number, counter);
            counter += level;
            writeLine(level, second_type, number, counter);
            counter += level;
        }else{
            writeLine(level, type, number, counter);
            counter += level;
        }
     }
     file_b1n.close();
     cout<<" =============================== L O A D E D =============================== "<<endl<<endl;
    return 0;
}

void detectType(unsigned int type){

}

void writeLine(unsigned int level, unsigned int type, unsigned int number, int counter){
    ofstream file_b1n;
    file_b1n.open("1_N_D_R_4.txt", std::ios::out|std::ios::app);

    if (file_b1n.fail()){
        cout<<"No se pudo crear el archivo... "<<endl;
        exit(1);
    }
    switch(type){
        case 0:
            if(level == 1){
                for (unsigned int i = 0; i < 8; i++){
                    file_b1n<<"\ufeff";
                }
            }else if (level == 2){
                for (unsigned int i = 0; i < 8; i++){
                    file_b1n<<"\ufeff";
                }
                file_b1n<<"»⃟؟⃟ے⃟⃟⃟";

            }else if (level == 3){
                for (unsigned int i = 0; i < 8; i++){
                    file_b1n<<"\ufeff";
                }
                file_b1n<<"»⃟؟⃟ے⃟⃟⃟";

                for(unsigned int i = 0;i < 2; i++){
                    file_b1n<<"天⃟照⃟";
                }
            }
            if (counter < 2){
                file_b1n<<"\nhttps://youtu.be/HFlmPniPWYU \n";
            }
            break;
        case 1:  // INDONESIA
            if(level == 1){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"i⃟";
                }
            }else if (level == 2){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"i⃟";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"'⃟";
                }
            }else if (level == 3){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"i⃟";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"'⃟";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"I⃟";
                }
            }
            break;
        case 2:  // JAPANESE
            if (level == 1){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"暁⃟";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"暁⃟";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"け⃟";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"暁⃟";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"け⃟";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"⃟明";
                }
            }
            break;
        case 3:  // ARABIAN
            if (level == 1){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ي⃟";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ي⃟";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"د⃟";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ي⃟";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"د⃟";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ء⃟";
                }
            }
            break;
        case 4:  //V01D
            if (level == 1){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"\u200F\u200E";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"\u200F\u200E";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"\u2067\u200E";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"\u200F\u200E";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"\u2067\u200E";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"\u202E\u200F";
                }
            }
            file_b1n<<"\u2067\u202E";
            break;
        case 5:  // INFINITE
            if (level == 1){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"৪";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"৪";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"৪⃟";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"৪";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"৪⃟";
                }
                for(unsigned int i = 0;i < 8/4; i++){
                    file_b1n<<"⃟৪⃟ํ";
                }
            }
            break;
        case 6:  // CHINESE
            if (level == 1){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"㜻ํ";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"㜻ํ";
                }
                for(unsigned int i = 0;i < 8/4; i++){
                    file_b1n<<"㜻ํ⃟⃟";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"㜻ํ";
                }
                for(unsigned int i = 0;i < 8/4; i++){
                    file_b1n<<"㜻ํ⃟⃟";
                }
                for(unsigned int i = 0;i < 8/4; i++){
                    file_b1n<<"㜻ํ⃟⃟";
                }
            }
            break;
        case 7:  // JADE-DRAKE
            if (level == 1){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"ِ";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"ِ";
                }
                for(unsigned int i = 0;i < 4; i++){
                    file_b1n<<" ٌ͝";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"ِ";
                }
                for(unsigned int i = 0;i < 4; i++){
                    file_b1n<<" ٌ͝";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"҉";
                }
            }
            break;
        case 8:  // IPHONE
            if (level == 1){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"๕";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"๕";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ฬ⃟";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"๕";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ฬ⃟";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"Ꮛ";
                }
            }
            break;
        case 9:
            if (level == 1){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"";
                }
            }else if(level == 2){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ۣ";
                }
            }else if(level == 3){
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"";
                }
                for(unsigned int i = 0;i < 8/2; i++){
                    file_b1n<<"ۣ";
                }
                for(unsigned int i = 0;i < 8; i++){
                    file_b1n<<"๑";
                }
            }
            break;
        default:
            cout<<"nothing"<<endl;
            break;
    }
}
