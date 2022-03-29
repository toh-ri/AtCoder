use proconio::input;

fn main() {
    input!{
        N:i64,
    }
    if N%2==1{
        println!("Black");
    }else{
        println!("White");
    }
}
