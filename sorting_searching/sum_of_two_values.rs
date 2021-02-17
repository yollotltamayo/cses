use std::collections::HashMap;
use std::io::{stdin,stdout};
fn main() {
    let mut map :HashMap<String, String>= HashMap::new();
    let mut s= String::new();
    stdin(&mut s).expect("Did not enter a correct string");
    println!("{}",s);
}
