use proconio::input;
fn main() {
    input!{
        n:usize,
        a:[i64;1<<n],
    }
    let mut max1:usize=0;
    let mut max2:usize=1<<(n-1);
    for i in 0..1<<(n-1){
        if a[max1]<a[i]{
            max1=i;
        }
    }
    for i in 1<<(n-1)..1<<n{
        if a[max2]<a[i]{
            max2=i;
        }
    }
    if a[max1]<a[max2]{
    println!("{}",max1+1);
    }else{
        println!("{}",max2+1);
    }
}