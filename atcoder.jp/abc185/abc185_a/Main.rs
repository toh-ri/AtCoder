use proconio::input;

fn main() {
    input!{
        a:[i32;4],
    }
    let mut ans :i32=1000;
    for &x in &a{
        if ans>x{
            ans=x;
        }
    }
    println!("{}",ans);
}