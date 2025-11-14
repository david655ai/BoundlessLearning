## 切片
1、切片对于字符串而言可以作为Sting的某一部分的引用。
注意：s为String，则s[..]为切片，&s[..]为对切片的引用
```
let s = String::from("hello world");
let hello = &s[0..5];
let world = &s[6..11];//左闭右开区间
//..作为range序列语法

fn main() {
    // 填空，打印出 "你好，世界" 中的每一个字符
    for c in "你好，世界".chars() {
        println!("{}", c)
    }
}//.chars()表示按照字符正确分割，而不是按照字节

```
## 字符串类型字面量
类型为&static str
```
let x = "sad"
```

## String::from("")

```
String -> 堆上存储 UTF-8 字节
这些字节就是一个
str（未引用的字符串切片）
```

String 本质上包含：
ptr：指向一段 UTF-8 字节（底层数据类型=str）（相当于指针）
len：长度
capacity：容量大小


&str与String转化
&str->String:s.to_String  String::from()
&String可以自动变为&str，因为String实现了Deref<Target = str>，且编译器会自动进行“解引用强制转换”（deref coercion）


### 字符串操作
注意要定义为mut可变类型

**追加**
s.push单个字符
s.push_str追加字符串

**连接**
使用+或者+=，本质调用add方法，要求右边的参数为&str类型，不能为String类型

**替换**
1、replace()
适用于String和&str类型，接受两个参数，第一个为要被替换的，第二个为新的字符串，返回新的字符串，会替换所有检查到的内容。
2、replacen()
接受第三个参数，表示需要替换对象的个数。
3、replace_range
仅接受String类型，直接操作原来的字符串，需要mut修饰。


## 字符串转义
```
let raw_str = r"Escapes don't work here: \x3F \u{211D}";
```
这里r表示不解释转义符


r#" ... "#      // 允许内部出现 "
r##" ... "##    // 允许内部出现 "#"
r###" ... "###  // 允许内部出现 "##"
