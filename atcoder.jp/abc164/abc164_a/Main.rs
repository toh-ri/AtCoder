use proconio::input;

fn main() {
    input!{
        S:i64,
        W:i64,
    }
    if W>=S{
        println!("unsafe");
    }else{
        println!("safe");
    }
}