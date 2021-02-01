#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
/**
int main()
{
    string magicPhrase;
    getline(cin, magicPhrase);
    int lastletter=0;
    for(int i=0;i<magicPhrase.length();i++){
        int letter=int(magicPhrase.at(i))-int('A')+1;
            if(magicPhrase.at(i)==' '){
                letter=int('Z')-(int('A')-2);
            }
            if(abs(lastletter-letter)<14){
                if(lastletter>letter){
                    for(int j=lastletter;j>letter;j--){
                    cout << '-';
                    }
                }
                if(lastletter<letter){
                    for(int j=0;j<letter-lastletter;j++){
                    cout << '+';
                    }
                }  
            }
            else
            {
                if(lastletter>letter){
                    for(int j=0;j<27-lastletter+letter;j++){
                        cout << '+';
                    }
                }
                if(lastletter<letter){
                    for(int j=0;j<lastletter+27-letter;j++){
                    cout << '-';
                    }
                }
            }
            
            
        lastletter=letter;
        cout<<'.';
            //if(i!=magicPhrase.length()-1){
            //    cout << ">";
            //}
     
        
        }
    cout << endl; }


**/
    


string findShortest(int magicIndex, string fields[]);
string trigger(int limit);
int letterDistance(string start, int dest);
int steps(string str);









//class Player {

    string alphabet = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string PLUS = "+";
    string MINUS = "-";
    string FORWARD = ">";
    string BACKWARD = "<";
    string TRIGGER = ".";
    int position = 0;
    int main() {
        string magicPhrase;
        getline(cin,magicPhrase);
        //string magicPhrase = "O OROFARNE LASSEMISTA CARNIMIRIE O ROWAN FAIR UPON YOUR HAIR HOW WHITE THE BLOSSOM LAY";


        string fields[30];
        for(int i = 0; i < 30 ; i++)
        {
            fields[i] = " ";
        }

        string shortest;
        for(int i = 0; i < magicPhrase.length(); i++) {
            char c = magicPhrase[i];
            string best = findShortest(alphabet.find(c), fields);


                shortest += best;

                int step = steps(best);

                if(step < 0 && position - step < 0)
                {
                    position = 30 - (step + position);
                }
                else if(step > 0 && position + step > 29)
                {
                    step = 30 - position;
                    position = step;
                }
                else
                {
                    position += step;
                }
                fields[position] = c;

        }
        cout << shortest << endl;
    }

    string findShortest(int magicIndex, string fields[]) {
        int tmp = position;
        string best;
        while(true){
            string result;

            if(tmp == position){
                result = trigger(letterDistance(fields[tmp], magicIndex));
            }else if(position < tmp){
                for(int i = 0; i < tmp-position; i++){
                    result += FORWARD;
                }

                result += trigger(letterDistance(fields[tmp], magicIndex));
            }else{
                for(int i = 0; i < (30-position+tmp); i++){
                    result += FORWARD;
                }
                result += trigger(letterDistance(fields[tmp], magicIndex));
            }


            tmp++;
            if(tmp == 30){
                tmp = 0;
            }
            if(tmp == position){
                break;
            }
            if(best.length() == 0){
                best = result;
            }else if(result.length() <= best.length()){
                best = result;
            }
        }

        tmp = position;
        while(true){
            string result;

            if(tmp == position){
                result = trigger(letterDistance(fields[tmp], magicIndex));
            }else if(tmp < position){
                for(int i = 0; i < position-tmp; i++){
                    result += BACKWARD;
                }

                result += trigger(letterDistance(fields[tmp], magicIndex));
            }else{      
                for(int i = 0; i < 30-position+tmp; i++){
                    result += BACKWARD;
                }
                result += trigger(letterDistance(fields[tmp], magicIndex));
            }


            tmp--;
            if(tmp == -1){
                tmp = 29;
            }
            if(tmp == position){
                break;
            }

            if(best.length() == 0){
                best = result;
            }else if(result.length() <= best.length()){
                best = result;
            }
        }
        return best;
    }
    string trigger(int limit){

        string result;
        for (int i = 0; i < abs(limit); i++) {
            if (limit <= 0) {
                result += MINUS;
            } else {
                result += PLUS;
            }
        }
        return  result+TRIGGER;
    }


    int letterDistance(string start, int dest){
        int startPosition = alphabet.find(start);

        if(startPosition < dest){
            int spinUp = dest - startPosition;
            int spinDown = 27 - dest + startPosition;

            return spinUp <= spinDown ? spinUp : -spinDown;

        }else if(startPosition > dest){
            int spinUp = 27 - startPosition + dest;
            int spinDown =  startPosition - dest;

            return spinUp <= spinDown ? spinUp : -spinDown;
        }
        return 0;
    }

    int steps(string str){
        int counter = 0;
        for(int i = 0; i < str.length(); i++){
            char c = str[i];
            if(c == '<'){
                counter--;
            }else if(c == '>'){
                counter++;
            }
        }
        return counter;
    }
//};
