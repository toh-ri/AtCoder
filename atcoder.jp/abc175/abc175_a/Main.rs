use proconio::input;
fn main() {
   input!{
       s: String,
   }

   let mut cnt:i64 =0;
   let mut ans:i64 =0;

   for i in s.chars(){
        if i =='R' {
            cnt+=1;
            ans=ans.max(cnt);
        }else{
            cnt=0;
        }
   }

   println!("{}",ans);
}