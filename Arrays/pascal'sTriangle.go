
func generatRow(n int) []int {

	temp := []int{}
	ans := 1
	temp = append(temp, ans)
	for i := 1; i < n; i++ {
		ans = ans * (n - i)
		ans = ans / i
		temp = append(temp, ans)
	}
	return temp
}
func generate(n int) [][]int {

	ans := [][]int{}
	for i := 1; i <= n; i++ {
		ans = append(ans, generatRow(i))
	}
	return ans
}