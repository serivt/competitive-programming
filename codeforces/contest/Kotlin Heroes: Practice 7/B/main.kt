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
        val (a, b, k) = readLongs()
        val mid = (k / 2).toLong();
        val r = a * (mid + if (k % 2L != 0L) 1 else 0);
        val l = b * mid;
        println(r - l)
    }
}