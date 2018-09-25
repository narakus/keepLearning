package main

import (
	"fmt"
	"sort"
)

func equal(x, y map[string]int) bool {
	if len(x) != len(y) {
		return false
	}
	for k, xv := range x {
		if yv, ok := y[k]; !ok || yv != xv {
			return false
		}
	}
	return true
}

func main() {
	ages := map[string]int{
		"alice":   31,
		"charlie": 34,
	}
	fmt.Println(ages["alice"])

	mymap := map[string]int{
		"key1": 1,
		"key2": 2,
	}
	fmt.Println(mymap)

	//	mymap2 := make(map[string]int)

	for key, value := range mymap {
		fmt.Printf("%s\t%d\n,", key, value)
	}

	var names []string
	for name := range ages {
		names = append(names, name)
	}
	sort.Strings(names)
	for _, name := range names {
		fmt.Printf("%s\t%d\n", name, ages[name])
	}

	if age, ok := ages["bob"]; !ok { /* ... */
	}

}
