use proconio::input;

fn main() {
    input!{
        Sx:f64,
        Sy:f64,
        Gx:f64,
        Gy:f64,
    }
    println!("{}",Sx+(Gx-Sx)*Sy/(Gy+Sy));
}
