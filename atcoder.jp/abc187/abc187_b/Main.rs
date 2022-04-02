use proconio::input;
fn main() {
    input!{
        n:usize,
        v:[(f64,f64);n],
    }
    let mut ans:i64=0;
   for i in 0..n{
       for j in 0..i{
        if v[i].0!=v[j].0{
            let slope :f64=(v[i].1-v[j].1)/(v[i].0-v[j].0);
            if slope<=1.&&slope>=-1.{
                ans+=1;
            } 
        }
       }
   }
   println!("{}",ans);
}