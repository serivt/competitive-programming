private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

fun stringDistance(a : String, b : String) : Int {
    if(a == b) { return 0 }
    if(a.isEmpty()) { return b.length }
    if(b.isEmpty()) { return a.length }
    val aLength = a.length + 1
    val bLength = b.length + 1
    var cost = Array(aLength) { it }
    var newCost = Array(aLength) { 0 }
    for (i in 1..bLength-1) {
        newCost[0] = i
        for (j in 1..aLength-1) {
            val match = if(a[j - 1] == b[i - 1]) 0 else 1
            val costReplace = cost[j - 1] + match
            val costInsert = cost[j] + 1
            val costDelete = newCost[j - 1] + 1
            newCost[j] = Math.min(Math.min(costInsert, costDelete), costReplace)
        }
        val swap = cost
        cost = newCost
        newCost = swap
    }
    return cost[aLength - 1]
}

fun main() {
    val (n, _) = readInts()
    val s = Array<String>(n) { _ -> "" }
    for (i in 0..n-1) s[i] = readLn()
    val q = readInt()
    for (i in 1..q) {
        val a = readLn()
        var ans = 0
        for (j in 1..n) {
            if (stringDistance(a, s[j-1]) == 1) ans++
        }
        println(ans)
    }
}