use proconio::input;

fn main() {
    input!{
        N:i32,
        X:i32,
        T:i32,
    }
    println!("{}",(N+X-1)/X*T);
}
