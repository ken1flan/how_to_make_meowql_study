
= 前夜

== データ分析基盤とその普及


@<href>{http://www.mwed.co.jp/,うちの会社}では、データ分析基盤として、サービスで使っているデータベースの内容や、アクセスログその他もろもろをRedshiftに分析用データベースとして集めていて、だれでも分析したりシェアしたりしやすいように@<href>{https://redash.io/,Redash}を置いています。整備したのは 2016年くらいです。@<href>{https://blog.mwed.info/posts/wedding-dwh-status-2016-06.html,ブログ}もあるので、細かいことはそちらをみてください。
最初はエンジニアやごく少数のエンジニア以外でSQLを使えるひとが使っていました。便利さや誰でも使えるということが伝わってきたようで、SQLに興味を持つひとがちらほらでてきました。ただ、自分で始めるようとするには少しハードルが高そうでした…。


//emlist[][text]{
2016年ごろ、誰でも使えるデータ分析基盤が整備
  ↓
エンジニアやごく少数のエンジニア以外でSQLを使えるひとだけが利用
  ↓
便利さやだれでも使えることが馴染んできた
  ↓
SQLに興味を持つひとが増えてきたが、どうやって学んだらよいかわからない
//}

== 背中を押した


以前はよく、データの分析をしたいのでデータをまとめて出してほしい、ということをよくエンジニアが頼まれていました。データを出してから条件を調整したいので出し直してといわれることもしばしば。しかも、一度で済むわけもありません。何度も何度も出し直し、時間がかかっていました。



そこに持ち込まれる内容で、分析用データベースにある情報だけでわかる内容もぼちぼちありました。
もしかして、みんなにSQLを使えるようになってもらったら、俺たち、仕事ラクになるんじゃ？
そんなハッピーな未来を妄想して、二の足を踏んでる同僚達の背中を押すべく…
「みんなで集まってSQLの勉強会やろうよ。困ったら手助けするからさ！」
こんなふうに言ったら、始まったのでした。


//emlist[][text]{
データの分析をしたいので抽出してほしいという依頼がよくあった。
調整後抽出し直しもしばしば。
  ↓
それぞれでSQLが使えるように手助けしたら、仕事がラクになりそう
  ↓
みんなで勉強しましょう。わからないところは教えますから！
//}


//indepimage[you_can_do_it][][scale=1.0]{
//}


