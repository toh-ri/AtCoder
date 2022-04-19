use proconio::input;
use proconio::marker::Chars;
fn main() {
   input!{
       a: Chars,
   }

   if a[2]==a[3] && a[4]==a[5] {
       println!("Yes");
   }else{
       println!("No");
   }
   
}