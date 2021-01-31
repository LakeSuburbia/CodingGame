#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int N;
    int myHP=5000;
    
    cin >> N; cin.ignore();
    
    string SHIP[N];
    int HP[N];
    int ARMOR[N];
    int DAMAGE[N];
    int AantalSchoten[N];
    int Prioriteit[N];
    int PrioriteitGevaarlijksteSchip = 10000000;
    int IDgevaarlijksteSchip=0;
    int AantalSchepenRechtop=N;
    int turns=0;


    // INPUT
    for (int i = 0; i < N; i++) {
        cin >> SHIP[i] >> HP[i] >> ARMOR[i] >> DAMAGE[i]; cin.ignore();
    }

    //SPEELBEURT
    while(myHP >=0 && AantalSchepenRechtop>0)
    {

        // TAKE DAMAGE
        //for (int i = 0; i < N; i++) {
        //    myHP = myHP - DAMAGE[i];
        //}
    

        // AANTAL SCHOTEN OM EEN SCHIP TE VLOEREN
        for(int i = 0 ; i < N ; i++){
            if(SHIP[i] == "FIGHTER"){
                if(ARMOR[i]>=20)
                {
                    AantalSchoten[i]=HP[i];
                }
                else 
                {
                    AantalSchoten[i]=(HP[i]+(19-ARMOR[i]))/(20-ARMOR[i]);
                }
            }
            else {
                if(ARMOR[i]>=10)
                {
                    AantalSchoten[i]=HP[i];
                }
                else 
                {
                    AantalSchoten[i]=(HP[i]+(10-ARMOR[i]-1))/(10-ARMOR[i]);
                }
            }
        }

        // DAMAGE DAT EEN SCHIP KAN DOEN VOOR HET GEËLIMINEERD WORDT.
        for(int i = 0; i < N; i++)
        {
            if(DAMAGE[i]>0)
            {
                Prioriteit[i]=10000*AantalSchoten[i]/DAMAGE[i];
            }
            else {
                Prioriteit[i]=1000000000;
            }
            //cout << DamageDoneBeforeDeath[i] << endl;
        }


        // GEVAARLIJKSTE SCHIP VINDEN
        for(int i = 0;i < N; i++){
            if(PrioriteitGevaarlijksteSchip > Prioriteit[i])
            {
                PrioriteitGevaarlijksteSchip = Prioriteit[i];
                IDgevaarlijksteSchip = i;
            }
            
        }


        //cout << AantalSchoten[IDgevaarlijksteSchip] << endl;
        //cout << DAMAGE[IDgevaarlijksteSchip] << endl;
        // GEVAARLIJKSTE SCHIP DAMAGE UITWISSELEN;
        //for(int i = 0;i < AantalSchoten[IDgevaarlijksteSchip];i++){
            for(int j = 0;j < N;j++){
                myHP=myHP-AantalSchoten[IDgevaarlijksteSchip]*DAMAGE[j];
            }
        //}
        
        //cout << DAMAGE[IDgevaarlijksteSchip] << endl;

        DAMAGE[IDgevaarlijksteSchip]=0;
        HP[IDgevaarlijksteSchip]=0;
        AantalSchepenRechtop--;
        PrioriteitGevaarlijksteSchip = 10000000;
        Prioriteit[IDgevaarlijksteSchip]=1000000;
        
        
        // AANVALLEN CRUISER
        /**
        if(SHIP[IDgevaarlijksteSchip]=="CRUISER")
        {
            if(ARMOR[IDgevaarlijksteSchip] > 10)
            {
                HP[IDgevaarlijksteSchip] = HP[IDgevaarlijksteSchip]-1;
            }
            else 
            {
                HP[IDgevaarlijksteSchip] = HP[IDgevaarlijksteSchip] - (10-ARMOR[IDgevaarlijksteSchip]);
            }
        }


        // AANVALLEN FIGHTER
        if(SHIP[IDgevaarlijksteSchip]=="FIGHTER")
        {
            if(ARMOR[IDgevaarlijksteSchip] > 20)
            {
                HP[IDgevaarlijksteSchip] = HP[IDgevaarlijksteSchip]-1;
            }
            else 
            {
                HP[IDgevaarlijksteSchip] = HP[IDgevaarlijksteSchip] - (20-ARMOR[IDgevaarlijksteSchip]);
            }
        }

        // CHECKEN OF IE DOOD IS
        if(HP[IDgevaarlijksteSchip] <= 0)
        {
            AantalSchepenRechtop--;
            DAMAGE[IDgevaarlijksteSchip]=0;
        }

        //cout << ARMOR[IDgevaarlijksteSchip] << endl;
        //cout << HP[IDgevaarlijksteSchip] << endl;
        **/


        // AANTAL SCHEPEN RECHTOP
        /**
        for(int i = 0; i < N; i++)
        {
            AantalSchepenRechtop = 0;
            if(HP[i]+ARMOR[i] > 0)
            {
                AantalSchepenRechtop++;
            }
        }
        **/

        //cout << AantalSchepenRechtop << endl;

        

    }


    // FINAL MOVE
    if(myHP >=0)
    {            
        cout << myHP << endl;
    } 
    else 
    {
        cout << "FLEE" << endl;
    }
    
}
