use proconio::input;

fn main() {
    input!{
        D:i64,
        T:i64,
        S:i64,
    }
    if D>S*T{
        println!("No");
    }else{
        println!("Yes");
    }
}
