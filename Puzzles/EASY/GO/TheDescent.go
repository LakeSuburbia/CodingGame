package main

import "fmt"

func main() {
	for {
		mem := 0
		index := -1
		for i := 0; i < 8; i++ {
			// mountainH: represents the height of one mountain.
			var mountainH int
			fmt.Scan(&mountainH)
			if mem < mountainH {
				mem = mountainH
				index = i
			}
		}
		fmt.Println(index)
	}
}
