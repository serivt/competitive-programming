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
        var s = ""
        if (k > n) {
            for (i in 0..(n-1)) s += ('a' + i)
        } else {
            val f = (n / k).toInt()
            for (i in 0..(f-1)) {
                for (j in 0..(k-1)) s += ('a' + j)
            }
            if (n % k != 0) {
                val limit = (n - k * f) - 1
                for (i in 0..limit) s += "a"
            } 
        }
        println(s)
    }
}