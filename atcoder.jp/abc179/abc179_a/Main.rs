use proconio::input;
use proconio::marker::Chars;
fn main() {
   input!{
       a: Chars,
   }

   for i in &a {
       print!("{}",i);
   }

   if a[a.len()-1]=='s' {
       println!("es");
   }else{
       println!("s");
   }
   
}