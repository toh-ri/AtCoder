use proconio::input;
use proconio::marker::Chars;
use proconio::marker::Bytes;
fn main() {
   input!{
       n: Bytes,
   }

   let mut sum :i64 =0;

   for i in &n{
       sum+=(i-b'0') as i64;
   }
   
   println!("{}",if sum%9==0 {"Yes"} else{"No"});
}