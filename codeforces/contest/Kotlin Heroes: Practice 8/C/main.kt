private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

fun main() {
    var n = readInt()
    var a = readInts()
    var map = hashMapOf<Int, Int>()
    for (i in 1..n) map.put(i, a[i - 1])
    val result = map.toList().sortedByDescending { (_, value) -> value}.toMap()
    var x = 0
    var sum = 0
    for (entry in result) sum += entry.value * x++ + 1
    println(sum)
    for (entry in result) print("${entry.key} ")
    println("")
}