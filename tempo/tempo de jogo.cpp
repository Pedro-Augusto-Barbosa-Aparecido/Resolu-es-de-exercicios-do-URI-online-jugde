#include <iostream>

using namespace std;

int main(){

    int time1=0, time2=0, timeDuring=0;
    bool countOfTime=false;

    cin >> time1 >> time2;

    if(time1 > time2){
        do{

            time1+=1;
            if(time1<=24){
                timeDuring+=1;
            }else{
                countOfTime=true;
            }

        }while(!countOfTime);

        time1=0;
        countOfTime=false;

        do{
            time1+=1;
            if(time1<=time2){
                timeDuring+=1;
            }else{
                countOfTime=true;
            }
        }while(!countOfTime);

        cout << "O JOGO DUROU " << timeDuring << " HORAS(S)\n";

    }else if(time1 == time2){

        do{
            time1+=1;
            if(time1<=24){
                timeDuring+=1;
            }else{
                countOfTime=true;
            }
        }while(!countOfTime);

        time1=0;
        countOfTime=false;

        do{
            if(time1<time2){
                time1+=1;
                if(time1<=time2){
                    timeDuring+=1;
                }else{
                    countOfTime=true;
                }
            }else{
                countOfTime=true;
            }
        }while(!countOfTime);

        cout << "O JOGO DUROU " << timeDuring << " HORAS(S)\n";

    }else{
        do{
            time1+=1;
            if(time1<=time2){
                timeDuring+=1;
            }else{
                countOfTime=true;
            }
        }while(!countOfTime);

        cout << "O JOGO DUROU " << timeDuring << " HORAS(S)\n";

    }

    return 0;
}
