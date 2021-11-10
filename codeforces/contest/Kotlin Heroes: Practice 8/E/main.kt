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
        var s = readLn().toCharArray()
        var l = 0
        var r = s.size - 1
        while (l < s.size && s[l] == '0') l++
        while (r >= 0 && s[r] == '0') r--
        if (l == s.size && r == -1) println(0)
        else {
            var zeros = 0
            for(i in l..r) if (s[i] == '0') zeros++
            println(zeros)
        }
    }
}