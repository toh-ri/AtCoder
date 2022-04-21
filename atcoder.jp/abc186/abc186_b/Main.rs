use proconio::input;
use proconio::marker::{Bytes,Chars};
fn main() {
   input!{
       h: usize,
       w: usize,
       a: [[i64;w];h]
   }

   let mut Bmin:i64=1000;

   for i in &a {
       for j in i{
           Bmin = (*j).min(Bmin); 
       }
   }
   let mut ans:i64=0;
   for i in &a {
    for j in i{
        ans+=*j-Bmin;
    }
}
println!("{}",ans);
}