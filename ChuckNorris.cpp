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
    string MESSAGE;
    getline(cin, MESSAGE);
    string bin = "";


    // converteer de MESSAGE naar binary
    int n = MESSAGE.length(); 
        for (int i = n-1; i >= 0; i--) 
        { 
            // convert each char to 
            // ASCII value 
            int val = int(MESSAGE[i]); 
    
            // Convert ASCII value to binary 
            int counter = 0;
            while (counter < 7) 
            { 
                (val % 2)? bin.push_back('1') : 
                        bin.push_back('0'); 
                val /= 2; 
                counter++;
            } 
            
    
            //cout << bin << endl; 
        } 
        reverse(bin.begin(), bin.end()); 


    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    int i = 0;
    
/**
    for (std::string::size_type i = 0; i < MESSAGE.size(); i++) {
		std::cout << MESSAGE[i] << ' ';
	}
**/

    while (i < bin.size())
    {
        if(bin.at(i) == '0'){
            cout << "00 ";
            while(bin[i] == '0' && i < bin.length()){
                cout << "0";
                i++;
            }
        }
        else if (bin.at(i)== '1') {
            cout << "0 ";
            while(bin[i] == '1'&& i < bin.length()){
                cout << "0";
                i++;
            }
        }

        if(i != bin.size()){
            cout << " ";
        }
    }
    cout << endl;
}
