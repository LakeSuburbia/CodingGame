package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func abs(a int64) int64 {
	if a < 0 {
		return -a
	}
	return a
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Buffer(make([]byte, 1000000), 1000000)
	var inputs []string

	// n: the number of temperatures to analyse
	var n int
	scanner.Scan()
	fmt.Sscan(scanner.Text(), &n)
	if n == 0 {
		fmt.Println(0)
	} else {
		scanner.Scan()
		inputs = strings.Split(scanner.Text(), " ")
		var highest int64 = 5526
		for i := 0; i < n; i++ {
			// t: a temperature expressed as an integer ranging from -273 to 5526
			t, _ := strconv.ParseInt(inputs[i], 10, 32)
			_ = t
			if abs(t) < abs(highest) {
				highest = t
			} else if abs(t) == abs(highest) && t > highest {
				highest = t
			}
		}
		fmt.Println(highest) // Write answer to stdout
	}
}
