import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int smallestDiff=100000;
        int[] pi = new int[N];
        for (int i = 0; i < N; i++) {
            pi[i] = in.nextInt();
        }
        Arrays.sort(pi); 

        for(int i = 0;i < N-1; i++){
            if(pi[i+1]-pi[i]<smallestDiff){
                smallestDiff=pi[i+1]-pi[i];
            }
        }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(smallestDiff);
    }
}
