import java.util.*;
import java.io.*;
import java.math.*;
class Solution {public static void main(String args[]){Scanner in=new Scanner(System.in);int n = in.nextInt();int diff=5527;if(n==0){diff=0;}for(int i=0;i<n;i++){int t=in.nextInt();if(Math.abs(diff)>Math.abs(t)){diff=t;}else if(Math.abs(t)==Math.abs(diff)){if(t>diff)diff=t;}}System.out.println(diff);}}
