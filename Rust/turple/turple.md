## turple basic
```
let tup: (i32, f64, u8) = (500, 6.4, 1);//创建时可以指定数据类型

元组里面还可以是元组，可以是各种数据类类型
```
自动识别为turple，然后用tup的来代表一个元组

调用turple中的单个元素使用.来调用，类似于数组，.后面指定index

函数也可以以turple作为返回对象
```
fn calculate_length(s: String) -> (String, usize) {
    let length = s.len(); // len() 返回字符串的长度

    (s, length)
}
```

可以直接用一个元组类型来接受，会自动解构