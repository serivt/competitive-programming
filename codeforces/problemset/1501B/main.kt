private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

fun main() {
    var t = readInt();
    while (t-- > 0) {
        val n = readInt();
        var a = readInts().toTypedArray();
        var cream = 0;
        for (i in n - 1 downTo 0) {
            if (cream < a[i]) cream = a[i]
            a[i] = if (cream > 0) 1 else 0;
            cream--;
        }
        for (i in a) print("$i ")
        println()
    }
}