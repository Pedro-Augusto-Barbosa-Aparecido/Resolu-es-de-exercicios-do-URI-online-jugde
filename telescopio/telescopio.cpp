#include <iostream>
#include <vector>

using namespace std;

bool calculateNumStarVisable(int area, int numF);

int main(){

    int areaLen=0, numStar=0, numFoton=0, countIn=0, numVisible=0;
    bool foton=false;
    vector <int> fotonsReceived;

    cin >> areaLen;

    if((areaLen>0)&&(areaLen<10001)){
        cin >> numStar;

        if((numStar>0)&&(numStar<10001)){

            do{

                cin >> numFoton;

                if((numFoton>1)&&(numFoton<20001)){
                    countIn+=1;
                    fotonsReceived.push_back(numFoton);
                    if(countIn==numStar){
                        foton=true;
                    }
                }else{
                    foton=true;
                }

            }while(!foton);
        }

    }

    for(int i=0;i<numStar;i++){

        if(calculateNumStarVisable(areaLen,fotonsReceived[i])){
            numVisible+=1;
        }

    }

    cout << numVisible << endl;

    return 0;
}

bool calculateNumStarVisable(int area, int numF){

    if((area*numF)>=40000000){
        return true;
    }else{
        return false;
    }

}
