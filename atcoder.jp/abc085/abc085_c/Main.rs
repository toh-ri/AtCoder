use proconio::input;
use proconio::marker::{Bytes,Chars};
fn main() {
   input!{
       n: i64,
       y: i64,
   }

   let mut a=0;
   
   while a<=n && a*10000<=y{
    let mut b=0;
       while b<=n-a && b*5000<=y-a*10000{
           if y-a*10000-b*5000 == (n-b-a)*1000{
               println!("{} {} {}",a,b,n-b-a);
               return;
           }
           b+=1;
       }
       a+=1;
   }
   println!("-1 -1 -1");
   
}