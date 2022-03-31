use proconio::input;
fn main() {
    input!{
        n:usize,
        a:[i64;n],
    }
    let mut ans:i64=0;
    let mut mx:i64=0;
    for i in 2..1000{
        let mut count:i64=0;
        for &x in &a{
            if x%i==0{
                count+=1;
            }
        }
        if mx<count{
            mx=count;
            ans=i;
        }
    }
    println!("{}",ans)
}