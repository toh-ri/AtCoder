use proconio::input;

fn main() {
    input!{
        x1:i64,
        x2:i64,
        x3:i64,
        x4:i64,
        x5:i64,
    }
    let ans= if x1==0{1} 
    else if x2==0{2} 
    else if x3==0{3}
    else if x4==0{4}
    else {5};
    println!("{}",ans);
}
