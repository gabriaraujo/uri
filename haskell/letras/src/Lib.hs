{-# OPTIONS -Wall #-}
module Lib where

-- import Test.QuickCheck
import Test.HUnit
-- import Data.Char

fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib(n - 1) + fib(n - 2)

and' :: Bool -> Bool -> Bool
True `and'` b = b
False `and'` _ = False

or' :: Bool -> Bool -> Bool
True `or'` _ = True
False `or'` b = b

xor :: Bool -> Bool -> Bool
True `xor` False = True
False `xor` True = True
_ `xor` _ = False

fatores :: Int -> [Int]
fatores n = [x | x <- [1..n], n `mod` x == 0]

perfeito :: Int -> [Int]
perfeito n = [x | x <- [1..n]
                , let xs = init (fatores x)
                , x == (sum xs)]

primo :: Int -> [Int]
primo n = [x | x <- [1..n], fatores x == [1, x]]

doubleOdd :: [Int] -> [Int]
doubleOdd [] = []
doubleOdd n = [x * x | x <- n, x `mod` 2 /= 0]

doubleOdd' :: [Int] -> [Int]
doubleOdd' = foldr step []
    where
        step x ac
            | x `mod` 2 /= 0 = (x * x) : ac
            | otherwise = ac

testDoubleOdd :: Test
testDoubleOdd = "testDoubleOdd" ~: doubleOdd [1, 2, 3] ~=? [1, 9]

produto :: [Int] -> Int
produto [] = 1
produto (x : xs) = x * produto xs

length' :: [a] -> Int
length' [] = 0
length' (_ : xs) = 1 + length' xs

reverse' :: [a] -> [a]
reverse' [] = []
reverse' (x : xs) = reverse' xs ++ [x]

reverse3 :: [a] -> [a]
reverse3 = foldr step []
    where
        step x ac = ac ++ [x]

rev :: [a] -> [a]
rev xs = rev' xs []
        where
            rev' [] ys = ys
            rev' (z : zs) ys = rev' zs (z : ys)

insert :: Ord a => a -> [a] -> [a]
insert x [] = [x]
insert x (y : ys)
    | x < y = x : y : ys
    | otherwise = y : insert x ys

isort :: Ord a => [a] -> [a]
isort [] = []
isort (x : xs) = insert x (isort xs)

take' :: Int -> [a] -> [a]
take' _ [] = []
take' n (x : xs)
    | n > 0 = x : take' (n - 1) xs
    | otherwise = []

drop' :: Int -> [a] -> [a]
drop' _ [] = []
drop' 0 xs = xs
drop' n (_ : xs) = drop' (n - 1) xs

merge' :: Ord a => [a] -> [a] -> [a]
merge' [] ys = ys
merge' xs [] = xs
merge' (x : xs) (y : ys)
    | x <= y = x : merge' xs (y : ys)
    | otherwise = y : merge' (x : xs) ys

msort' :: Ord a => [a] -> [a]
msort' [] = []
msort' [x] = [x]
msort' xs = merge' (msort' ys) (msort' zs)
        where
            n = length xs `div` 2
            ys = take n xs
            zs = drop n xs

concat' :: [[a]] -> [a]
concat' [] = []
concat' (xs : ys) = xs ++ concat' ys

pos :: Int -> [Int] -> Int
pos n xs = find 0 xs
    where
        find _ [] = -1
        find i (y : ys)
            | n == y = i
            | otherwise = find (i + 1) ys

removeAll :: Int -> [Int] -> [Int]
removeAll n xs = [y | y <- xs, y /= n]

nTimes :: Int -> a -> [a]
nTimes 0 _ = []
nTimes n x = x : nTimes (n - 1) x

countPos :: [Int] -> Int
countPos xs = length [x | x <- xs, x > 0]

countPosRec :: [Int] -> Int
countPosRec [] = 0
countPosRec (x : xs)
    | x > 0 = 1 + countPosRec xs
    | otherwise = countPosRec xs

and2 :: [Bool] -> Bool
and2 xs = foldr (&&) True xs

or2 :: [Bool] -> Bool
or2 xs = foldr (||) False xs

filter' :: (a -> Bool) -> [a] -> [a]
filter' _ [] = []
filter' p (x : xs)
    | p x = x : filter' p xs
    | otherwise = filter' p xs

filter2 :: (a -> Bool) -> [a] -> [a]
filter2 p xs = foldr step [] xs
    where
        step x ac
            | p x = x : ac
            | otherwise = ac

map' :: (a -> b) -> [a] -> [b]
map' _ [] = []
map' f (x : xs) = f x : map' f xs

sumSquaresEven :: [Int] -> Int
sumSquaresEven = sum . map (\ x -> x * x) . filter even

mapf :: (a -> b) -> [a] -> [b]
mapf f = foldr ((:) . f) []

reverse2 :: [a] -> [a]
reverse2 = foldr step []
    where
        step x xs = xs ++ [x]

int2Bin :: Int -> [Int]
int2Bin 0 = []
int2Bin n = n `mod` 2 : int2Bin (n `div` 2)

lines' :: String -> [String]
lines' "" = []
lines' xs = (beforeNewLine xs) : lines' (afterNewLine xs)

afterNewLine :: String -> String
afterNewLine "" = ""
afterNewLine ('\n' : xs) = xs
afterNewLine (_ : xs) = afterNewLine xs

beforeNewLine :: String -> String
beforeNewLine "" = ""
beforeNewLine ('\n' : _) = ""
beforeNewLine (x : xs) = x : beforeNewLine xs
