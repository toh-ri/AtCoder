use proconio::input;
use proconio::marker::Chars;
fn main() {
   input!{
       n: i64,
       x: i64,
       s: Chars,
   }

   let mut ans:i64 = x;
   for i in &s {
        match i {
            'o' => ans+=1,
            'x' => ans = (ans-1).max(0),
            _ => unreachable!(),
        }
   }

   println!("{}",ans);
   
}