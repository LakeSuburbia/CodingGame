package main

import "fmt"

func main() {
	// lightX: the X position of the light of power
	// lightY: the Y position of the light of power
	// initialTx: Thor's starting X position
	// initialTy: Thor's starting Y position
	var lightX, lightY, initialTx, initialTy int
	fmt.Scan(&lightX, &lightY, &initialTx, &initialTy)

	for {
		// remainingTurns: The remaining amount of turns Thor can move. Do not remove this line.
		var remainingTurns int
		fmt.Scan(&remainingTurns)
		nextmove := ""
		if lightY < initialTy {
			nextmove += "N"
			initialTy--
		} else if lightY > initialTy {
			nextmove += "S"
			initialTy++
		}
		if lightX < initialTx {
			nextmove += "W"
			initialTx--
		} else if lightX > initialTx {
			nextmove += "E"
			initialTx++
		}
		fmt.Println(nextmove)
	}
}
