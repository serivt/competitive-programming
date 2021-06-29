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
    val a = readLongs()
    val v = a.sorted()
    val sum = a.sum()
    var e = mutableListOf<Int>()
    val x = v[n - 1]
    val y = v[n - 2]
    for(i in 0..n-1) {
        val remaining = sum - a[i]
        val z = if (a[i] == x) y else x
        if (remaining - z == z) e.add(i + 1)
    }
    println(e.size)
    for (i in e) {
        print("$i ")
    }
    if (e.size > 0) println("")
}