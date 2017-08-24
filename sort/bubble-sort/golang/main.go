package main

import (
	"fmt"
)

func bubbleSort(array []int) []int {
	for i := 0; i < len(array)-1; i++ {
		for j := 0; j < len(array)-1; j++ {
			if array[j] > array[j+1] {
				array[j], array[j+1] = array[j+1], array[j]
			}
		}
	}
	return array
}

func main() {
	a := []int{45, 2, 34, 100, 36, 72, 1}
	fmt.Println("un sorted : ", a)
	a = bubbleSort(a)
	fmt.Println("sorted : ", a)
}
