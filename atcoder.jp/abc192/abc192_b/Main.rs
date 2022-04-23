use proconio::input;
use proconio::marker::{Bytes,Chars};
fn main() {
   input!{
       s: String,
   }

   let mut cnt = 1;
   for i in s.chars() {
       if (cnt%2==0) ^ i.is_ascii_uppercase() {
           println!("No");
            return;
       }
       cnt+=1;
   }
   println!("Yes");

   
}