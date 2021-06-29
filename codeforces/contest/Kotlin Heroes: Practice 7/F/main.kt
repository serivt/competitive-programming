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
    val s = mutableListOf<String>()
    val c = BooleanArray(n*n)
    var s1 = ""
    var s2 = ""
    for (i in 1..(2*n-2)) {
        val _s = readLn()
        s.add(_s)
        if (_s.length != n - 1) continue
        if (s1.length == 0) {
            s1 = _s
        } else {
            s2 = _s
        }
    }
    var x = 0
    for (i in 0..(2*n-2)-1) {
        if (s1.subSequence(0, s[i].length) == s[i]) x++
    }
    var substr: String;
    if (x >= n - 1 && s1.subSequence(1, n - 1) == s2.subSequence(0, n - 2)) {
        substr = s1
    } else {
        substr = s2
    }
    for (i in 0..(2*n-2)-1) {
        val y = s[i].length
        if (s[i] == substr.subSequence(0, y) && !c[y]) {
            c[y] = true
            print("P")
        } else {
            print("S")
        }
    }
}