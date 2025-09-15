package main

import "fmt"

func main() {
	ans := canBeTypedWords("hello world", "")
	fmt.Println(ans)
}

func canBeTypedWords(text string, brokenLetters string) int {
	ans := 0
	flag := 0
	if len(brokenLetters) == 0 {
		for _, t := range text {
			if string(t) == " " {
				ans++
			}
		}
	} else {
		for _, t := range text {
			for _, b := range brokenLetters {
				fmt.Println(string(t))
				if string(t) == " " {
					ans++
					flag = 0
					break
				}
				if flag == 1 {
					continue
				}
				if string(t) == string(b) && flag == 0 {
					ans--
					flag = 1
				}
			}
		}
	}
	ans++
	return ans
}
