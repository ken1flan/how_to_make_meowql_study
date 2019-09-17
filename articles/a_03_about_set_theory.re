
= 集合と論理演算


//indepimage[venn_diagram][][scale=0.8]{
//}




@<tt>{WHERE}や@<tt>{CASE}のところで、2つ以上の条件を書くときに@<tt>{AND}を使ったと思います。
たぶんですが、少しピンと来ていないのではないかと思って、ちょっと補足します。


== どこでつかうの？


2つ以上の条件をつけるときに、実世界でどんなものがあるか考えてみます。



友達みんなで集まって遊ぶ約束をしたときに、あなたはケーキを持ってくる役割になりました。
友達から注文を取ると、このような感じでした。

 1. 今ももが旬だよね。あと生クリームの気分だから、ももと生クリームが使われているケーキがいい！
 1. めっちゃチーズ気分！ベイクドかレアで、うまそうに見えたほうを買ってきて！
 1. 今日おやつにチョコレート食べちゃったから、チョコ系ケーキ以外で頼む！


== 種類


友達の注文をそれぞれ図に描いてみました。


=== AND

//quote{
 1. 今ももが旬だよね。あと生クリームの気分だから、ももと生クリームが使われているケーキがいい！

//}


1の友達は「生クリームが使われている」かつ(AND)「ももが使われている」ケーキであるものが食べたいといっているのです。
ももの乗ったカスタードクリームのタルトや、いちごのショートケーキを買っていくと、友達はがっかりするでしょう。もものショートケーキのようなものを探さねばなりません。



//indepimage[and][][scale=0.8]{
//}



=== OR

//quote{
 1. めっちゃチーズ気分！ベイクドかレアで、うまそうに見えたほうを買ってきて！

//}


2の友達は「ベイクドチーズ」もしくは(OR)「レアチーズ」のケーキが食べたいと言っています。
ベイクドチーズケーキでもレアチーズケーキでも大丈夫そうです。もちろんベイクドアンドレアチーズのよくばりケーキでもよろこぶでしょう。



//indepimage[or][][scale=0.8]{
//}



=== NOT


3の友達は「チョコ」でない(NOT)ケーキを食べたいと言っています。
ガトーショコラやザッハトルテを買っていったら泣かれそうですが、イチゴショートでもベイクドチーズケーキでも、ナポレオンパイやサバランだってよろこんでもらえるでしょう。



//indepimage[not][][scale=0.8]{
//}



== @<href>{https://ja.wikipedia.org/wiki/%E3%83%99%E3%83%B3%E5%9B%B3,ベン図}


これまで出てきた図ですが…感覚的にわかるでしょうか？
まるの中には同じタイプのケーキをグループとしてまとめていて、その外側にはその条件にあてはまらないものを置いています。
複数のタイプのときには、グループの重なりあいを見ながら、ほしいものがどういった条件のものであるのか、考えることができます。



この図を@<href>{https://ja.wikipedia.org/wiki/%E3%83%99%E3%83%B3%E5%9B%B3,ベン図}といいます。
普段の仕事の中でも、複雑な条件について話し合うときに、とても便利だと思います。