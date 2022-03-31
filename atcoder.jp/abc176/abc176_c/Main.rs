use proconio::input;

fn main() {
    input!{
        n:usize,
        a:[i64;n],
    }
    let mut ans:i64 =0;
    let mut mx:i64=a[0];
    for &x in &a{
        if mx>x{
            ans+=mx-x;
        }else{
            mx=x;
        }
    }
    println!("{}",ans);
}