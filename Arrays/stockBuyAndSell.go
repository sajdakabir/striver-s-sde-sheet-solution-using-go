func maxProfit(prices []int) int {
	n := len(prices)
	maxP := 0
	minP := prices[0]

	for i := 1; i < n; i++ {
		cost := prices[i] - minP
		maxP = max(maxP, cost)
		minP = min(minP, prices[i])
	}
	return maxP
}
func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}