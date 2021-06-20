private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

fun main() {
    val n = readInt()
    val a = readInts().sorted()
    var sum = a.sum()
    var mid = (sum / 2).toInt()
    if (sum % 2 == 0) mid--
    var coins = 0
    for (i in n - 1 downTo 0) {
        if (sum <= mid) break
        coins++
        sum -= a[i]
    }
    println(coins)
}