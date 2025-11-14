## Struct basic learn
结构体定义
```
struct User {
    active: bool,
    username: String,
    email: String,
    sign_in_count: u64,
}
```

使用结构体时需要创建实例，初始化时每个字段都要初始化，但是初始化的顺序不用和定义的结构顺序一致

```
    let user1 = User {
        email: String::from("someone@example.com"),
        username: String::from("someusername123"),
        active: true,
        sign_in_count: 1,
    };
```

通过.操作符使用成员变量，如果需要更改值需要声明mut
```
    let mut user1 = User {
        email: String::from("someone@example.com"),
        username: String::from("someusername123"),
        active: true,
        sign_in_count: 1,
    };

    user1.email = String::from("anotheremail@example.com");
```


可以使用结构体作为函数返回的值，需要提前定义
```
fn build_user(email: String, username: String) -> User {
    User {
        email: email,//email可省略
        username: username,//username可省略
        active: true,//不可省略
        sign_in_count: 1,//不可省略
    }
}
```
当函数参数和结构体字段同名时，可以直接使用缩略的方式进行初始化


当前面有重名的变量时，可以省略赋值步骤
 ```
 struct Person {
    name: String,
    age: u8,
}
fn main() {
    let age = 18;
    let mut p = Person {
        name: String::from("sunface"),
        age,
    };

    assert_eq!(age,18);}
 ```
## 结构体更新
根据已有的结构体实例，创建新的结构体实例

根据已有的 user1 实例来构建 user2

```
  let user2 = User {
        email: String::from("another@example.com"),
        ..user1
    };
```
这里表示除了email，其他的都与user1一样，**..user1 必须在结构体的尾部使用**，这里也会发生所有权的转移，只有那些不是copy的变量会被转移所有权，其他的变量user1还是可以用

## 元组结构体
结构体必须要有名称，但是结构体的字段可以没有名称，这种结构体长得很像元组，因此被称为元组结构体
```
    struct Color(i32, i32, i32);
    struct Point(i32, i32, i32);

    let black = Color(0, 0, 0);
    let origin = Point(0, 0, 0);
```

可以使用元组的p.1类似的语法来实现调用对象

## 单元结构体
单元结构体没有任何字段和属性
```
struct AlwaysEqual;

let subject = AlwaysEqual;

// 我们不关心 AlwaysEqual 的字段数据，只关心它的行为，因此将它声明为单元结构体，然后再为它实现某个特征
impl SomeTrait for AlwaysEqual {

}
```

## 结构体数据所有权
如果你想在结构体中定义一个引用，就必须加上生命周期，否则就会报错

## 使用 #[derive(Debug)] 来打印结构体的信息
结构体不能使用{}直接格式化输出，没有实现diplay特征

使用Debug来实现{:?}的格式化输出
```
$ cargo run
rect1 is Rectangle { width: 30, height: 50 }
```

可以使用{:#?}来实现更好的输出效果


还可以使用dbg!宏，它会拿走表达式的所有权，然后打印出相应的文件名、行号等 debug 信息，当然还有我们需要的表达式的求值结果。除此之外，它最终还会把表达式值的所有权返回！
```
#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

fn main() {
    let scale = 2;
    let rect1 = Rectangle {
        width: dbg!(30 * scale),
        height: 50,
    };

    dbg!(&rect1);
}
```

## Tips
1、可以在实例化一个结构体时将它整体标记为可变的，但是 Rust 不允许我们将结构体的某个字段专门指定为可变的