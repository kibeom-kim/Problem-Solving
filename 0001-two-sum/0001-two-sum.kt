class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val mapOfSeenDifferences = mutableMapOf<Int, Int>()
        nums.forEachIndexed { index, num ->
            mapOfSeenDifferences[num]?.let { return intArrayOf(it, index) }
            mapOfSeenDifferences[target - num] = index
        }
        return intArrayOf()
    }
}