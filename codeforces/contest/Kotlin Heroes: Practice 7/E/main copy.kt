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
    val a = readInts()
    var e = mutableListOf<Int>()
    var x = 0
    for(i in 0..n-1) {
        var m = a[0]
        if (i == 0) m = a[1]
        for (j in 0..(n-1)) {
            if (i == j) continue
            if (m < a[j]) m = a[j]
        }
        x = 0
        for (j in 0..(n-1)) {
            if (i == j) continue
            x += a[j]
            if (x - m == m) {
                x++
                e.add(i + 1)
            }
        }
    }
    if (x == 0) {
        println("0")
    } else {
        println(e.size)
        for (i in e) {
            print("$i ")
        }
        println("")
    }
}