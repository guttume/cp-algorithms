fun binExp(a: Int, b: Int): Long {
    var base = a
    var exponent = b
    var result = 1L
    while (exponent > 0) {
        if (exponent % 2 != 0) result *= base
        base *= base
        exponent /= 2
    }
    return result
}

fun main() {
    println(binExp(3, 9))
}
