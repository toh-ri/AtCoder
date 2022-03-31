use proconio::input;

fn main() {
    input!{
        n:usize,
        v:[(i64,i64);n],
    }
    let mut ans:i64 =0;
    for &(a,b) in &v{
        ans+=(a+b)*(b-a+1)/2;
    }
    println!("{}",ans);
}