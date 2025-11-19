# 流程控制
## if-else
与其他语言用法类似,可以使用if来赋值
```
fn main() {
    let condition = true;
    let number = if condition {
        5
    } else {
        "s"//错误,必须是一种类型
    };

    println!("The value of number is: {}", number);
}
```

## 循环控制

### for循环
```
for item in &container//使用引用,防止所有权转移,对于copy类型的,可以不需要使用&

for _ in &container//不创建变量

for _ in 0..10//range类型进行循环
```
### while循环
与其他语言类似


### loop循环
loop构建无限循环,使用break进行循环条件的控制
