#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // game loop
    while (1) {
        int actionCount; // the number of spells and recipes in play
        cin >> actionCount; cin.ignore();
        bool validAction[actionCount];
        int actionId[actionCount]; // the unique ID of this spell or recipe
        string actionType[actionCount]; // in the first league: BREW; later: CAST, OPPONENT_CAST, LEARN, BREW
        int delta0[actionCount]; // tier-0 ingredient change
        int delta1[actionCount]; // tier-1 ingredient change
        int delta2[actionCount]; // tier-2 ingredient change
        int delta3[actionCount]; // tier-3 ingredient change
        int price[actionCount]; // the price in rupees if this is a potion
        int tomeIndex[actionCount]; // in the first two leagues: always 0; later: the index in the tome if this is a tome spell, equal to the read-ahead tax
        int taxCount[actionCount]; // in the first two leagues: always 0; later: the amount of taxed tier-0 ingredients you gain from learning this spell
        bool castable[actionCount]; // in the first league: always 0; later: 1 if this is a castable player spell
        bool repeatable[actionCount]; // for the first two leagues: always 0; later: 1 if this is a repeatable player spell
        string commando;

        for (int i = 0; i < actionCount; i++) {
            
            cin >> actionId[i] >> actionType[i] >> delta0[i] >> delta1[i] >> delta2[i] >> delta3[i] >> price[i] >> tomeIndex[i] >> taxCount[i] >> castable[i] >> repeatable[i]; cin.ignore();


        }
        

        int inv0[2]; // tier-0 ingredients in inventory
        int inv1[2];
        int inv2[2];
        int inv3[2];
        int score[2]; // amount of rupees
        
        for (int i = 0; i < 2; i++) {
            cin >> inv0[i] >> inv1[i] >> inv2[i] >> inv3[i] >> score[i]; cin.ignore();
        }

        int beste = -1, indexToDo = 0;

        for (int i = 0; i < actionCount; i++)
        {
            bool diff0 = (0 <= inv0[0] + delta0[i]);
            bool diff1 = (0 <= inv1[0] + delta1[i]);
            bool diff2 = (0 <= inv2[0] + delta2[i]);
            bool diff3 = (0 <= inv3[0] + delta3[i]);

            int totaal_INV=inv0[0]+inv1[0]+inv2[0]+inv3[0];
            int totaal_DEL=delta0[i]+delta1[i]+delta2[i]+delta3[i];

            bool Spell_check = ((actionType[i] == "CAST") && (castable[i])&& (10-totaal_INV > totaal_DEL)) || actionType[i] == "BREW";
            
            if (beste < price[i] && diff0 && diff1 && diff2 && diff3 && actionType[i] == "BREW")
            {
                beste = price[i];
                indexToDo = actionId[i];
                commando = actionType[i];
            }
            //else if ()
            else if (beste < price[i] && diff0 && diff1 && diff2 && diff3 && Spell_check)
            {
                beste = price[i];
                indexToDo = actionId[i];
                commando = actionType[i];

            }
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if (beste >= 0)
        {
            cout << commando << " "<< indexToDo << endl;
        }
        else
        {
            cout << "REST" << endl;
        }

        // in the first league: BREW <id> | WAIT; later: BREW <id> | CAST <id> [<times>] | LEARN <id> | REST | WAIT
        
    }
}
