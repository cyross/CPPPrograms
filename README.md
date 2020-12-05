# CPPPrograms
C++(C)のプログラム置き場

# フォルダ群

## hello

hello.cppをg++とclang++でビルドできるか確認用

## all_h

「江添亮のC++入門」に出てくるall.hを試してみる。
更にプリコンパイル済みヘッダも作成

## eigen1

行列ライブラリEigenを使ってみる

# よく使うコマンドまとめ

```
# 通常時
g++ -std=c++17 -Wall --pedantic-errors

# --std=c++17 : 規格はC++17ベース
# -Wall : 警告をすべて出す
# --pedantic-erros : C++規格を厳格にチェック、規約違反のときはエラー

# テストスイート使用(gtest)時
g++ -std=c++17 -Wall --pedantic-errors -lgtest_main -lgtest
```
