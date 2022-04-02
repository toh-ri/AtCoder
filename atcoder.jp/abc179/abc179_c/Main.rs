use proconio::input;
fn main() {
    input!{
        n:i64,
    }
    let mut ans:i64=0;
    for i in 1..=n{
        ans+=(n-1)/i;
    }
    println!("{}",ans);
}