private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

fun main() {
    var t = readInt()
    while (t-- > 0) {
        val (n, k) = readInts()
        var ans = 0
        for (i in 1..n) {
            val (l, r) = readInts()
            if (l <= k && r >= k) {
                ans = maxOf(ans, (r + 1) - k)
            }
        }
        println(ans)
    }
}