use proconio::input;

fn main() {
    input!{
        n:usize,
        d:f64,
        x:[(f64,f64);n],
    }
    let mut ans:i64 =0;
    for &(i,j) in &x{
       if i.hypot(j)<=d{
           ans+=1;
       }
    }
    println!("{}",ans);
}