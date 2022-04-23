use proconio::input;
use proconio::marker::{Bytes,Chars};
fn main() {
   input!{
       a: [usize;10],
   }

   println!("{}",a[a[a[0]]]);   
}