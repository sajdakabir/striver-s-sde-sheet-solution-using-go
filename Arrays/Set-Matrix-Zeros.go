func setZeroes(matrix [][]int) {
	n := len(matrix)
	m := len(matrix[0])
	fmt.Println(m)
	var col = make([]int, m)
	var row = make([]int, n)
	// col:=[m]int
	// row:=[n]int

	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if matrix[i][j] == 0 {
				col[j] = 1
				row[i] = 1
			}
		}
	}

	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if row[i] == 1 || col[j] == 1 {
				matrix[i][j] = 0
			}
		}
	}

}