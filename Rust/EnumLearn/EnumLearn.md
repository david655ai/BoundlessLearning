## 枚举
```
enum PokerSuit {
  Clubs,
  Spades,
  Diamonds,
  Hearts,
}
```
任何一张扑克，它的花色**肯定会落在四种花色中**，而且也**只会落在其中一个花色上**，这种特性非常适合枚举的使用，因为枚举值只可能是其中某一个成员。抽象来看，四种花色尽管是不同的花色，但是它们都是扑克花色这个概念，因此当某个函数处理扑克花色时，可以把它们当作相同的类型进行传参。

枚举只能处于其中的一个成员状态，枚举类型里面的成员可以理解为是一个个的状态名称

枚举类型是一个类型，它会包含所有可能的枚举成员，而枚举值是该类型中的具体某个成员的实例。

在创建枚举时，可以使用显式的整数设定枚举成员的值，**只能是整数**

枚举类型当中的成员都是这个枚举名字的类型，可以使用as来转换类型
```

// 修复错误
enum Number {
    Zero,
    One,
    Two,
}

enum Number1 {
    Zero = 0,
    One,
    Two,
}

// C-like enum
enum Number2 {
    Zero = 0,
    One = 1,
    Two = 2,
}


fn main() {
    // a enum variant can be converted to a integer by `as`
    assert_eq!(Number::One as u8, Number1::One as u8);
    assert_eq!(Number1::One as u8, Number2::One as u8);
} 

```

## 枚举值

创建实例
```
let heart = PokerSuit::Hearts;
let diamond = PokerSuit::Diamonds;
```

赋值
```
enum PokerCard {
    Clubs(u8),
    Spades(u8),
    Diamonds(u8),
    Hearts(u8),
}

fn main() {
   let c1 = PokerCard::Spades(5);
   let c2 = PokerCard::Diamonds(13);
}
```


任何类型的数据都可以放入枚举成员中：例如字符串、数值、结构体甚至另一个枚举

不用指明成员的数据类型

```
enum Message {
    Quit,
    Move { x: i32, y: i32 },//结构体形式变体
    Write(String),//元组
    ChangeColor(i32, i32, i32),//元组
}//这里的四个值都是Message类型

fn main() {
    let m1 = Message::Quit;
    let m2 = Message::Move{x:1,y:1};
    let m3 = Message::ChangeColor(255,255,0);
}
```

## Option枚举处理空值

Option 枚举包含两个成员，一个成员表示含有值：Some(T), 另一个表示没有值：None，定义如下：
```
enum Option<T> {
    Some(T),
    None,
}
```
这里T可以表示为任何类型的数据，调用这些成员时，可以不显式调用Option
```
let some_number = Some(5);
let some_string = Some("a string");

let absent_number: Option<i32> = None;
//如果使用none，则需要告诉Option<T>是什么类型的

```
当一个变量调用some时，这个变量的类型就为$Option<T>$，当一个值不是$Option<T>$时，可以认为这个值就不是空值

综上所述，枚举类型就是**一个拥有多个可能状态的类型，每个状态由一个“状态标签（variant）”标识，并且每个状态标签可以携带自己的数据**


```
let msgs: [Message; 3] = [
    Message::Quit,
    Message::Move { x: 1, y: 3 },
    Message::ChangeColor(255, 255, 0)
];
```
这里创建了Message数组，三个Message枚举类型对应123行的状态


