use proconio::input;

fn main() {
    input!{
        K:i64,
        A:i64,
        B:i64,
    }
    if A%K==0||B%K==0||B/K!=A/K||(B-A)>=K{
        println!("OK");
    }else{
        println!("NG");
    }
}