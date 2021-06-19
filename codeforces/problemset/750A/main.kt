private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

fun main() {
    val (n, k) = readInts()
    val times = Array(n) { i -> (i + 1) * 5 }
    for (i in 1..n-1) {
        times[i] += times[i - 1]
    }
    // times.forEach { println(it) }
    val remaining = 60 * 4 - k
    var t = times.binarySearch(remaining)
    if (t < 0) {
        t = Math.abs(t) - 1
    } else {
        t++
    }
    println(t)
}