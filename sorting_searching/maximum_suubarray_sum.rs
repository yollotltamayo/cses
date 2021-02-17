use std::io;
fn main() {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)
        .unwrap();
    let mut vec = inp
        .split_whitespace()
        .map(|c| c.parse::<i32>().unwrap())
        .collect::<Vec<i32>>();
    println!("{:?}", vec);
    inp.clear();
    io::stdin().read_line(&mut inp);
    let mut vec2 = inp
        .split_whitespace()
        .map(|c| c.parse::<i32>().unwrap())
        .collect::<Vec<i32>>();

    println!("{:?}", vec2);
    
    let b = inp.split('\n');
    //println!("{}",b);
}
