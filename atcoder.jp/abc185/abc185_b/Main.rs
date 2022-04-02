use proconio::input;
fn main() {
    input!{
        n:i64,
        m:usize,
        t:i64,
        v:[(i64,i64);m],
    }
    let mut now:i64=0;
    let mut now_1:i64=0;
    let mut bat:i64=n;
    let mut flag:bool=true;
    for i in 0..2*m{
        if i%2==0{
            now_1=now;
            now=v[i/2].0;
            bat-=now-now_1;
            if bat<=0{
                flag=false;
                break;
            }
        }else{
            now_1=now;
            now=v[i/2].1;
            bat+=now-now_1;
            bat=bat.min(n);
        }
    }
    bat-=t-v[m-1].1;
    if bat<=0{
        flag=false;
    }
    if flag {
        println!("Yes");
    }else{
        println!("No");
    }
}