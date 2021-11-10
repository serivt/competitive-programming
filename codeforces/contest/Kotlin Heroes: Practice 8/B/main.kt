private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

fun main() {
    var a1 = readInt()
    var a2 = readInt()
    var k1 = readInt()
    var k2 = readInt()
    var n = readInt()
    var min = 0
    var max: Int
    if (k1 - 1 > 0) min += (k1 - 1) * a1
    if (k2 - 1 > 0) min += (k2 - 1) * a2
    if (k1 < k2) {
        max = minOf(n / k1, a1)
        max += minOf((n - k1 * max) / k2, a2)
    } else {
        max = minOf(n / k2, a2)
        max += minOf((n - k2 * max) / k1, a1)
    }
    println("${maxOf(n - min, 0)} ${max}")
}