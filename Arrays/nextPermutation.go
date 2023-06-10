func nextPermutation(nums []int) {
	n := len(nums)
	ind := -1

	for i := n - 2; i >= 0; i-- {
		if nums[i] < nums[i+1] {
			ind = i
			break
		}
	}

	if ind == -1 {
		reverse(nums)
	} else {
		for i := n - 1; i > ind; i-- {
			if nums[i] > nums[ind] {
				nums[i], nums[ind] = nums[ind], nums[i]
				break
			}
		}
		reverse(nums[ind+1:])
	}
}

func reverse(nums []int) {
	n := len(nums)
	for i := 0; i < n/2; i++ {
		nums[i], nums[n-1-i] = nums[n-1-i], nums[i]
	}
}