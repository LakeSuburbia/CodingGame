import java.util. * ;
import java.io. * ;
import java.math. * ;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTx and initialTy, if Thor seems not follow your orders.
 **/
class Player {

  public static void main(String args[]) {
    Scanner in =new Scanner(System. in );
    int lightX = in.nextInt(); // the X position of the light of power
    int lightY = in.nextInt(); // the Y position of the light of power
    int initialTx = in.nextInt(); // Thor's starting X position
    int initialTy = in.nextInt(); // Thor's starting Y position
    // game loop
    while (true) {
      int remainingTurns = in.nextInt(); // The remaining amount of turns Thor can move. Do not remove this line.
      // Write an action using System.out.println()
      // To debug: System.err.println("Debug messages...");
      if (lightY > initialTy && lightX > initialTx) {
        System.out.println("SE");
        initialTy++;
        initialTx++;
      }
      else if (lightY < initialTy && lightX > initialTx) {

        System.out.println("NE");
        initialTy--;
        initialTx++;
      }
      else if (lightY > initialTy && lightX < initialTx) {

        System.out.println("SW");
        initialTy++;
        initialTx--;
      }
      else if (lightY < initialTy && lightX < initialTx) {

        System.out.println("NW");
        initialTy--;
        initialTx--;
      }
      else if (lightX < initialTx) {

        initialTx--;
        System.out.println("W");
      }
      else if (lightX > initialTx) {

        initialTx++;
        System.out.println("E");
      }
      else if (lightY < initialTy) {

        initialTy--;
        System.out.println("N");
      }
      else if (lightY > initialTy) {

        initialTy++;
        System.out.println("S");
      }
    }
  }
}
