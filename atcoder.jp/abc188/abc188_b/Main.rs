use proconio::input;
fn main() {
    input!{
        n:usize,
        va:[i64;n],
        vb:[i64;n],
    }
    let mut ans:i64=0;
    for i in 0..n{
        ans+=va[i]*vb[i]
    }
    println!("{}",if ans==0 {"Yes"}else{"No"})
}