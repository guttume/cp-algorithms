binPow = (a, b) => {
    let result = 1
    while (b > 0) {
        if (b % 2 != 0) result *= a
        a *= a
        b = Math.floor(b / 2)
    }
    return result
}

binExpRecurs = (a, b) => {
    if (b == 0) return 1
    let temp = binExpRecurs(a, Math.floor(b / 2))
    let result = temp * temp
    if (b % 2 != 0) return result * a
    return result
}

console.log(binExpRecurs(3, 9))
console.log(binPow(3, 9))
console.log(binExpRecurs(2, 7))
console.log(binPow(2, 7))