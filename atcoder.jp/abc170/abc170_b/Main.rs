use proconio::input;

fn main() {
    input!{
        X:i64,
        Y:i64,
    }
    if Y%2==0&&Y<=4*X&&Y>=2*X{
        println!("Yes");
    }else{
        println!("No");
    }
}
