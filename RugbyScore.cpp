#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  


int main()
{
    int N;
    vector<int>N1;
    vector<int>N2;
    vector<int>N3;

    int x=0,y=0,z=0;
    cin >> N; cin.ignore();

    for(int i = 0;i<N;i++){
        if(i*5<=N){
            for(int j=0;j<N-i;j++){
                if(j*7<=N-i){
                    for(int k=0;k<N-i-j;k++){
                        if(k*3+j*7+i*5==N){
                            N1.push_back(i+j);
                            N2.push_back(j);
                            N3.push_back(k);
                        }
                    }
                }
            }
        }
    }
int temp;
    for (int i = 0; i < N1.size()-1; i++)
    {      
        for (int j = 0; j < N1.size()-i-1; j++){ 
            if (N3[j] > N3[j+1]){ 
                temp = N1[j];  
                N1[j] = N1[j+1];  
                N1[j+1] = temp; 
                temp = N2[j];  
                N2[j] = N2[j+1];  
                N2[j+1] = temp; 
                temp = N3[j];  
                N3[j] = N3[j+1];  
                N3[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < N1.size()-1; i++)
    {      
        for (int j = 0; j < N1.size()-i-1; j++){ 
            if (N2[j] > N2[j+1]){ 
                temp = N1[j];  
                N1[j] = N1[j+1];  
                N1[j+1] = temp; 
                temp = N2[j];  
                N2[j] = N2[j+1];  
                N2[j+1] = temp; 
                temp = N3[j];  
                N3[j] = N3[j+1];  
                N3[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < N1.size()-1; i++)
    {      
        for (int j = 0; j < N1.size()-i-1; j++){ 
            if (N1[j] > N1[j+1]){ 
                temp = N1[j];  
                N1[j] = N1[j+1];  
                N1[j+1] = temp; 
                temp = N2[j];  
                N2[j] = N2[j+1];  
                N2[j+1] = temp; 
                temp = N3[j];  
                N3[j] = N3[j+1];  
                N3[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < N1.size(); i++)  {
        cout << N1[i] << " "<< N2[i] << " "<< N3[i];  
        cout << endl; 
    }
}
