
= WITH句


//indepimage[with][][scale=0.8]{
//}




WITH句はSELECT文をカッコで括った副問合せを仮想的にテーブルと見立てて、本体のFROMやJOINなどで使うことができます。


//emlist[][sql]{
WITH WithTable AS (
  SELECT * FROM SomeTable
)
SELECT * FROM WithTable
;
//}


複雑なSQLを書こうとしたときに、@<tt>{SELECT}文をカッコで括った副問合せを使うこともあると思います。
また、その副問合せを何度も使いたくなることもあるでしょう。


//emlist[][sql]{
SELECT
  *
FROM Table1
;
//}


そのようなときに@<tt>{WITH句}を使うとすっきり書けます。
また、副問合せを何度も使わない場合でも、複雑な内容の場合は適切な表名をつけて@<tt>{WITH}句で外に追い出してしまったほうが読みやすくなることも多いと思います。


//emlist[][sql]{
WITH Foods AS (
  SELECT 'cake' AS FoodType, Id, Name FROM Cakes WHERE UseCheese = TRUE
  UNION
  SELECT 'bread' AS FoodType, Id, Name FROM Breads WHERE UseCheese = TRUE
  UNION
  SELECT 'dish' AS FoodType, Id, Name FROM Dishes WHERE Name LIKE '%cheese%'
)
SELECT
  *
FROM Foods
;
//}

== 参照
 * @<href>{https://www.atmarkit.co.jp/fnetwork/tokusyuu/01sql99/sql99_1b.html,@IT 新しい業界標準「SQL99」詳細解説}

