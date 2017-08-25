package main

import "fmt"

func selectionSort(array []int) []int {
	var min int
	for j := 0; j < len(array)-1; j++ {
		min = j
		for i := j; i < len(array); i++ {
			if array[min] > array[i] {
				min = i
			}
		}
		array[min], array[j] = array[j], array[min]
	}
	return array
}

func main() {
	a := []int{45, 2, 34, 100, 36, 72, 1}
	fmt.Println("un sorted : ", a)
	a = selectionSort(a)
	fmt.Println("sorted : ", a)
}
