module Main where

import System.IO
import Data.Char
import Text.Printf

sort :: String -> String -> Bool
sort [] _ = True
sort _ [] = False
sort la@(a : as) lb@(b : bs)
    | la == lb = True
    | a < b = True
    | b < a = False
    | otherwise = sort as bs

listSort :: String -> String -> Bool -> [String]
listSort la lb b
    | b == True = [la ++ "\n" ++ lb]
    | b == False = [lb ++ "\n" ++ la]

main :: IO ()
main = do
    a <- getLine
    b <- getLine
    putStr . unlines $ (listSort a b (sort a b))
