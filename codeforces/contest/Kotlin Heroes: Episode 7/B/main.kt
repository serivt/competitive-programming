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
        val n = readInt()
        val x = readInts()
        var crash = false
        for (i in 1..(n - 1)) {
            val dist = x[i] - x[i - 1]
            val y = dist / 2
            if (x[i] - y == x[i - 1] + y) {
                crash = true
                break
            }
        }
        println(if (crash) "YES" else "NO")
    }
}