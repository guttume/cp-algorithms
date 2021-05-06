package main

import "fmt"

func binExp(a int, b int) int {
	var result int = 1
	for b > 0 {
		if b%2 != 0 {
			result *= a
		}
		a *= a
		b /= 2
	}
	return result
}

func main() {
	fmt.Println(binExp(3, 22))
}
