fun gcd(a: Int, b: Int): Int {
    var first = a
    var second = b
    while (second > 0) {
        first %= second
        first = second.also { second = first }
    }
    return first
}

fun gcdRecurs(a: Int, b: Int): Int {
    if (b == 0) return a
    return gcdRecurs(b, a % b)
}

fun main() {
    val a = 120
    val b = 140
    println(gcd(a, b))
    println(gcdRecurs(a, b))
}
