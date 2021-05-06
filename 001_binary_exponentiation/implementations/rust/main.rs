fn bin_exp(a: u64, b: u64) -> u64 {
    let mut result: u64 = 1;
    let mut base = a;
    let mut exponent = b;
    while exponent > 0 {
        if exponent %2 != 0 {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

fn bin_exp_recurs(a: u64, b: u64) -> u64 {
    if b == 0 {
        return 1;
    }

    let temp = bin_exp_recurs(a, b / 2);
    let mut result = temp * temp;
    if b % 2 != 0 {
        result *= a;
    }
    return result;
}

fn main() {
    println!("{}", bin_exp(2, 24));
    println!("{}", bin_exp_recurs(2, 24));
}