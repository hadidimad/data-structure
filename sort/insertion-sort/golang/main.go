package main

import (
	"fmt"
)

func insertionSort(array []int) []int {
	for i := 0; i < len(array); i++ {
		j := i
		for j > 0 && array[j] < array[j-1] {
			array[j], array[j-1] = array[j-1], array[j]
			j--
		}
	}
	return array
}

func main() {
	a := []int{45, 2, 34, 100, 36, 72, 1}
	fmt.Println("un sorted : ", a)
	a = insertionSort(a)
	fmt.Println("sorted : ", a)
}
